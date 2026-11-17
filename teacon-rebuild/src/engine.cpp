#include "engine.h"

#include <cstring>

namespace tea {

namespace {

constexpr uint8_t kUnbound = 0xfe;
constexpr int kUnbounded = 15000;   // "any number of extra letters" while lengths are being added up
constexpr size_t kNoPos = static_cast<size_t>(-1);

// Bytecode. Every (sub)pattern is   <header> <min> <extra>  template...  kEnd  [kAnagram ...]  kEnd
enum : uint8_t {
    kSpanLetters = 0xf0,    // <len> (<offset> <letter>)*            fixed letters inside a run of <len> positions
    kSpanMixed = 0xf1,      // <len> items                            as above, plus choice lists and variables
    kStar = 0xf2,           // <restMin> continuation... kEnd         wildcard; tries 0..slack letters
    kStarLast = 0xf3,       // <restMin> continuation... kEnd         last wildcard: takes all remaining slack
    kAnagram = 0xf4,        // <numLetters> <int32 minCount> stages   start of the anagram part
    kSingles = 0xf5,        // <count> <letter>*                      anagram letters that each occur once
    kMultiples = 0xf6,      // (<count> <letter>)*                    anagram letters with multiplicities
    kChoices = 0xf7,        // <count> <pool>                         anagram choice list, used <count> times
    kVariables = 0xf8,      // <count>[10]                            anagram letter variables
    kSubFixed = 0xf9,       // header of a fixed-length (sub)pattern
    kSubVar = 0xfa,         // header of a variable-length (sub)pattern; in an anagram: <count> <pool>
    kSubVarLast = 0xfb,     // last variable-length element: takes all remaining slack
    kEnd = 0xfc,
    kStop = 0xfd,           // after the whole pattern; never executed
    kExactLetter = 0xfe,    // <byte>   the next letter must be exactly this byte (case, accent)
    kPunct = 0xff,          // <byte>   this punctuation character must be here
};

bool isMeta(uint8_t c) { return c == 0 || std::strchr("[]();*", c) != nullptr; }

} // namespace

const char* errorText(int status) {
    static const char* const text[] = {
        "",
        "Pattern is empty",
        "Choice lists can only include letters, optionally preceded by ^",
        "Too many patterns or choice lists",
        "Pattern is too long to match anything",
        "Choice list started - use ] to complete it",
        "Only one ; is allowed in a pattern",
        "Subpattern started - use ) to complete it",
        "A ) can only appear at the end of a subpattern",
        "A ] can only appear at the end of a choice list",
        "Too many non-alphabetic characters in templates",
        "Only letters and match-alls allowed in anagrams",
        "A ^ can only appear within a choice list",
        "Follow \\ by the character you want to match exactly",
        "Choice lists must contain at least one letter",
    };
    return status >= 1 && status <= 14 ? text[status] : "";
}

std::string expandMacros(const std::string& pattern, const std::string& at, const std::string& hash) {
    std::string out;
    const int n = static_cast<int>(pattern.size());
    for (int i = 0; i < n; i++) {
        char c = pattern[i];
        if (c == '@' && !at.empty()) {
            out += at;
        } else if (c == '#' && !hash.empty()) {
            out += hash;
        } else {
            if (c == '\\' && i + 1 < n) {   // an escaped character is copied untouched
                out += '\\';
                c = pattern[++i];
            }
            out += c;
        }
    }
    return out;
}

void WordBuffer::set(const Dictionary::Word& w) {
    size_t n = w.letters.size();
    if (n > 127) n = 127;
    std::memcpy(mem, w.letters.data(), n);
    mem[n] = 0xff;
    raw = reinterpret_cast<const uint8_t*>(w.display.c_str());
}

// ============================================================================================
// Compiler
// ============================================================================================

int MatchEngine::poolAdd(const std::string& s) {
    for (size_t i = 0; i < pool_.size(); i++)
        if (pool_[i] == s) return static_cast<int>(i);
    if (pool_.size() >= 256) return -1;
    pool_.push_back(s);
    return static_cast<int>(pool_.size()) - 1;
}

void MatchEngine::compile(const std::string& pattern, bool ignoreUnusedPunctuation) {
    std::memset(punctMode_, 0, sizeof punctMode_);
    // The whole pattern is compiled as if it were a sub-pattern closed by one extra ')'.
    std::string src(pattern.c_str());
    src += ')';
    Code cursor = reinterpret_cast<Code>(src.c_str());

    int extra = 0;
    status_ = 0;
    valid_ = false;
    lastOp_ = kStop;
    opCount_ = 0;
    pool_.clear();
    bc_.clear();
    needsRaw_ = false;
    int varPos = -1;
    int endPosInt = -1;   // where the "no more punctuation" check belongs; -1 = nowhere yet

    int min = compilePattern(cursor, bc_, varPos, endPosInt, extra);
    if (min != -1) {
        if (cursor[1] == 0) {
            if (extra + min == 0) { status_ = kEmpty; min = -1; }
        } else {
            status_ = kStrayCloseParen;   // stopped at a ')' that was not the one added above
            min = -1;
        }
    }
    if (varPos > -1 && static_cast<size_t>(varPos) < bc_.size()) bc_[varPos] = static_cast<char>(kSubVarLast);
    if (min == -1) return;

    minLen_ = min;
    maxLen_ = min + extra;
    if (maxLen_ > 0x65) maxLen_ = 0x65;
    valid_ = true;
    bc_ += static_cast<char>(kStop);

    size_t endPos = endPosInt < 0 ? kNoPos : static_cast<size_t>(endPosInt);

    // Spaces at the very start or very end of a template are not required of the word.
    for (size_t i = 0; i < bc_.size(); i++) {
        const uint8_t b = static_cast<uint8_t>(bc_[i]);
        if (b > 0xee) {
            if (b == kPunct) {
                if (bc_[i + 1] != ' ') break;
                endPos -= 2;
                bc_.erase(i, 2);
                i--;
            } else if (b != kSubFixed && b != kSubVar && b != kSubVarLast) {
                break;
            }
        }
    }
    for (long pos = static_cast<long>(bc_.size());;) {
        uint8_t b;
        do {
            pos--;
            if (pos < 0) goto trimmed;
            b = static_cast<uint8_t>(bc_[pos]);
        } while (b < 0xef);
        if (b == kPunct) {
            if (bc_[pos + 1] != ' ') break;
            if (endPos != kNoPos && pos < static_cast<long>(endPos)) endPos -= 2;
            bc_.erase(static_cast<size_t>(pos), 2);
            pos -= 1;
            continue;
        }
        if (b == kSpanLetters || b == kSpanMixed || b == kAnagram || b == kStarLast) break;
    }
trimmed:

    needsRaw_ = std::memchr(punctMode_, kExactLetter, 256) != nullptr;
    if (std::memchr(punctMode_, kPunct, 256) != nullptr) {
        needsRaw_ = true;
        if (!ignoreUnusedPunctuation)
            for (int c = 0; c < 256; c++)
                if (punctMode_[c] == 0) punctMode_[c] = kPunct;   // every non-letter becomes significant
        // After the template's last element nothing but the end of the word may follow.
        if (endPos != kNoPos && endPos <= bc_.size()) {
            bc_.insert(endPos, 1, static_cast<char>(kPunct));
            bc_.insert(endPos + 1, 1, '\0');
        }
    }
}

int MatchEngine::compilePattern(Code& cursor, std::string& bc, int& outVarPos, int& outEndPos, int& outExtra) {
    const bool nested = !bc.empty();
    int min = 0, extra = 0;
    int anagMin = 0, anagExtra = 0, anagPos = 0;
    int lastVarPos = -1;
    Code p = cursor;
    const int hdr = static_cast<int>(bc.size());
    bc += static_cast<char>(emitted(kSubFixed));
    bc += ' ';
    bc += ' ';

    if (*p != ';' && *p != ')') {
        min = compileTemplate(p, bc, lastVarPos, outEndPos, extra);
        if (min == -1) return -1;
    }
    if (*p == ';') {
        p++;
        anagPos = static_cast<int>(bc.size());
        bc += static_cast<char>(kAnagram);
        bc += static_cast<char>(dict_.numUsedLetters);
        bc.append(4, '\0');
        anagMin = compileAnagram(p, bc, anagExtra, extra);
        if (anagMin == -1) return -1;
        if (nested) outEndPos = static_cast<int>(bc.size()) + 1;
    }

    if (min == 0 && extra == 0) {   // no template: the anagram alone decides the length
        extra = anagExtra;
        min = anagMin;
        if (anagExtra > 0) outVarPos = hdr;
    }
    if (min >= 0x81) {
        status_ = kTooLong;
        return -1;
    }
    if (extra > 0) {
        // A stretchable template with a non-stretchable anagram: the word cannot use more letters
        // than the anagram offers.
        if (anagExtra < kUnbounded && min < anagMin + anagExtra) extra = anagMin + anagExtra - min;
        if (lastVarPos > -1) outVarPos = hdr;
        bc[hdr] = static_cast<char>(emitted(kSubVar));
        outExtra += extra;
    }
    if (lastVarPos > -1) {
        const uint8_t op = static_cast<uint8_t>(bc[lastVarPos]);
        if (op == kStar) bc[lastVarPos] = static_cast<char>(kStarLast);
        else if (op == kSubVar) bc[lastVarPos] = static_cast<char>(kSubVarLast);
    }
    bc[hdr + 1] = static_cast<char>(min);
    bc[hdr + 2] = static_cast<char>(extra < 0x65 ? extra : 0x65);
    if (anagPos != 0)
        for (int i = 0; i < 4; i++) bc[anagPos + 2 + i] = static_cast<char>((static_cast<uint32_t>(anagMin) >> (8 * i)) & 0xff);
    bc += static_cast<char>(kEnd);
    cursor = p;
    return min;
}

int MatchEngine::compileTemplate(Code& cursor, std::string& bc, int& outVarPos, int& outEndPos, int& outExtra) {
    Code p = cursor;
    int spanPos = 0;   // where the current run of letter positions started in bc (0 = none open)
    int total = 0;     // letters in runs already closed
    int n = 0;         // letters in the open run
    const auto closeSpan = [&] {
        if (spanPos != 0) {
            bc[spanPos + 1] = static_cast<char>(n);
            total += n;
            spanPos = 0;
        }
    };

    for (;;) {
        for (;;) {
            const uint8_t c = *p;
            if (c == ';' || c == ')') goto done;
            if (c == ']') { status_ = kStrayCloseBracket; return -1; }
            if (c == '^') { status_ = kStrayCaret; return -1; }
            if (c == 0) { status_ = kSubpatternUnclosed; return -1; }
            if (c == '(') break;
            if (c == '*') {
                // Everything after a wildcard is compiled as its continuation.
                outExtra = kUnbounded;
                if (spanPos != 0) { bc[spanPos + 1] = static_cast<char>(n); total += n; }
                p++;
                spanPos = static_cast<int>(bc.size());
                outVarPos = spanPos;
                bc += static_cast<char>(emitted(kStar));
                bc += ' ';
                outEndPos = static_cast<int>(bc.size());
                n = compileTemplate(p, bc, outVarPos, outEndPos, outExtra);
                if (n == -1) return -1;
                goto done;   // the continuation's minimum length goes into the wildcard's operand
            }
            if (c == '[') {
                if (spanPos == 0) {
                    spanPos = static_cast<int>(bc.size());
                    bc += static_cast<char>(emitted(kSpanMixed));
                    bc += ' ';
                    n = 0;
                } else {
                    bc[spanPos] = static_cast<char>(emitted(kSpanMixed));
                }
                if (p[1] == '^') { p++; bc += static_cast<char>(n | 0xc0); }
                else bc += static_cast<char>(n | 0x40);
                if (p[1] == ']') { status_ = kChoiceEmpty; return -1; }
                const size_t countPos = bc.size();
                bc += ' ';
                for (;;) {
                    p++;
                    if (isMeta(*p)) break;
                    if (*p == '\\' && p[1] != 0) p++;
                    const int idx = dict_.letterIndex[*p];
                    if (idx == kNotLetter) break;
                    bc += static_cast<char>(idx);
                }
                bc[countPos] = static_cast<char>(bc.size() - (countPos + 1));
                if (*p != ']') {
                    status_ = (*p == ')' && p[1] == 0) ? kChoiceUnclosed : kChoiceNotLetters;
                    return -1;
                }
            } else if (c < '0' || c > '9') {
                bool escaped = false;
                if (c == '\\') {
                    escaped = true;
                    Code after = p + 2;
                    p++;
                    if (*after == 0) { status_ = kDanglingEscape; return -1; }
                }
                const int idx = dict_.letterIndex[*p];
                const bool matchAll = !escaped && (*p == '.' || *p == '?');
                if ((idx == kNotLetter && !matchAll) || (idx != kNotLetter && escaped)) {
                    closeSpan();
                    if (idx == kNotLetter) {
                        bc += static_cast<char>(emitted(kPunct));
                        bc += static_cast<char>(*p);
                        punctMode_[*p] = kPunct;
                    } else {
                        // Exact case: check the raw byte here, then compile the letter itself normally.
                        bc += static_cast<char>(emitted(kExactLetter));
                        bc += static_cast<char>(*p);
                        punctMode_[*p] = kExactLetter;
                        p--;
                    }
                    n = -1;
                } else {
                    if (spanPos == 0) {
                        spanPos = static_cast<int>(bc.size());
                        bc += static_cast<char>(emitted(kSpanLetters));
                        bc += ' ';
                        n = 0;
                    }
                    if (idx != kNotLetter && !matchAll) {
                        bc += static_cast<char>(n);
                        bc += static_cast<char>(idx);
                    }
                }
            } else {
                if (spanPos == 0) {
                    spanPos = static_cast<int>(bc.size());
                    bc += static_cast<char>(emitted(kSpanMixed));
                    bc += ' ';
                    n = 0;
                } else {
                    bc[spanPos] = static_cast<char>(emitted(kSpanMixed));
                }
                bc += static_cast<char>(n | 0x80);
                bc += static_cast<char>(c - '0');
            }
            // A space is the one element that does not move the end-of-template mark.
            const size_t size = bc.size();
            if (!(static_cast<uint8_t>(bc[size - 2]) == kPunct && bc[size - 1] == ' ')) outEndPos = static_cast<int>(size);
            n++;
            p++;
        }

        // '(' : a sub-pattern
        closeSpan();
        p++;
        int subExtra = 0;
        const int subMin = compilePattern(p, bc, outVarPos, outEndPos, subExtra);
        if (subMin == -1) return -1;
        n = subMin;
        total += subMin;
        p++;
        if (subExtra >= 1) {
            // Variable length: the rest of the template becomes the sub-pattern's continuation.
            outExtra += subExtra;
            n = compileTemplate(p, bc, outVarPos, outEndPos, outExtra);
            if (n == -1) return -1;
            total += n;
            goto done;
        }
    }

done:
    if (spanPos != 0) {
        bc[spanPos + 1] = static_cast<char>(n);
        total += n;
    }
    bc += static_cast<char>(kEnd);
    cursor = p;
    return total;
}

int MatchEngine::compileAnagram(Code& cursor, std::string& bc, int& outExtra, int templateExtra) {
    int counts[256] = {0};
    int lastVarSub = -1;
    int total = 0;
    Code p;

    // Pass 1: sub-patterns. Each distinct one goes into the pool; identical ones share an entry.
    for (p = cursor; *p != ')'; p++) {
        if (*p == '\\') {
            Code after = p + 2;
            p++;
            if (*after == 0) { status_ = kDanglingEscape; return -1; }
        } else if (*p == ';') {
            status_ = kSecondSemicolon;
            return -1;
        } else if (*p == 0) {
            status_ = kSubpatternUnclosed;
            return -1;
        } else if (*p == '(') {
            std::string sub;
            int varPos = -1, endPos = -1;
            p++;
            const int subMin = compilePattern(p, sub, varPos, endPos, outExtra);
            if (subMin == -1) return -1;
            const int idx = poolAdd(sub);
            if (idx < 0) { status_ = kTooManyParts; return -1; }
            counts[idx]++;
            total += subMin;
        }
    }
    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            if (static_cast<uint8_t>(pool_[i][0]) == kSubVar) lastVarSub = static_cast<int>(bc.size());
            bc += static_cast<char>(emitted(kSubVar));
            bc += static_cast<char>(counts[i]);
            bc += static_cast<char>(i);
        }
        counts[i] = 0;
    }

    const auto skipGroup = [](Code& q) {   // q at '(' -> q at its matching ')'
        int depth = 1;
        do {
            Code next = q + 1;
            if (*next == '\\' && q[2] != 0) next = q + 3;
            q = next;
            if (*q == '(') depth++;
            else if (*q == ')') depth--;
            else if (*q == 0) break;
        } while (depth > 0);
    };

    // Pass 2: choice lists, each stored as a 256-entry "letter allowed" table.
    for (p = cursor; *p != 0 && *p != ')'; p++) {
        if (*p == '\\') {
            p++;
        } else if (*p == '(') {
            skipGroup(p);
        } else if (*p == ']') {
            status_ = kStrayCloseBracket;
            return -1;
        } else if (*p == '[') {
            const bool negated = p[1] == '^';
            if (negated) p++;
            if (p[1] == ']') { status_ = kChoiceEmpty; return -1; }
            std::string allowed(256, negated ? '\1' : '\0');
            for (;;) {
                p++;
                if (isMeta(*p)) break;
                if (*p == '\\' && p[1] != 0) p++;
                const int idx = dict_.letterIndex[*p];
                if (idx == kNotLetter) break;
                allowed[idx] = negated ? '\0' : '\1';
            }
            const int idx = poolAdd(allowed);
            if (idx < 0) { status_ = kTooManyParts; return -1; }
            counts[idx]++;
            if (*p != ']') {
                status_ = (*p == ')' && p[1] == 0) ? kChoiceUnclosed : kChoiceNotLetters;
                return -1;
            }
            total++;
        }
    }
    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            bc += static_cast<char>(emitted(kChoices));
            bc += static_cast<char>(counts[i]);
            bc += static_cast<char>(i);
        }
        counts[i] = 0;
    }

    // Pass 3: plain letters, match-alls, letter variables and the wildcard.
    uint8_t varCount[10] = {0};
    for (p = cursor; *p != 0 && *p != ')'; p++) {
        if (*p == '(') {
            skipGroup(p);
        } else if (*p == '[') {
            Code q = p;
            for (;;) {
                p = q;
                q = p + 1;
                if (*q == ']' || *q == 0) break;
                if (*q == '\\' && p[2] != 0) q = p + 2;
            }
            p = q;
        } else if (*p == '*') {
            lastVarSub = -1;
            outExtra = kUnbounded;
        } else if (*p >= '0' && *p <= '9') {
            varCount[*p - '0']++;
            total++;
        } else if (*p != ' ') {
            bool escaped = false;
            if (*p == '\\' && p[1] != 0) {
                escaped = true;
                p++;
            }
            const int idx = dict_.letterIndex[*p];
            const bool matchAll = !escaped && (*p == '.' || *p == '?');
            if (idx == kNotLetter && !matchAll) { status_ = kAnagramNotLetters; return -1; }
            if (idx == kNotLetter || matchAll) emitted(kStar);   // a match-all only adds to the length
            else counts[idx]++;
            total++;
        }
    }

    bool anyVar = false;
    for (int i = 0; i < 10; i++) anyVar = anyVar || varCount[i] != 0;
    if (anyVar) {
        bc += static_cast<char>(emitted(kVariables));
        for (int i = 0; i < 10; i++) bc += static_cast<char>(varCount[i]);
    }

    int maxCount = 0, distinct = 0;
    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) distinct++;
        if (counts[i] > maxCount) maxCount = counts[i];
    }
    if (maxCount >= 2) {
        bc += static_cast<char>(emitted(kMultiples));
        for (int i = 0; i < 256; i++)
            if (counts[i] > 0) {
                bc += static_cast<char>(counts[i]);
                bc += static_cast<char>(i);
            }
    } else if (maxCount == 1) {
        bc += static_cast<char>(emitted(kSingles));
        bc += static_cast<char>(distinct);
        for (int i = 0; i < 256; i++)
            if (counts[i] > 0) bc += static_cast<char>(i);
    }

    cursor = p;
    if (lastVarSub > -1 && templateExtra == 0) bc[lastVarSub] = static_cast<char>(emitted(kSubVarLast));
    return total;
}

// ============================================================================================
// Interpreter
// ============================================================================================

// Letter-variable bindings are saved before anything that may bind and then fail.
void MatchEngine::take(Snapshot& s) const {
    s.b[0] = ctx_.varsActive;
    if (ctx_.varsActive == 1) std::memcpy(s.b + 1, ctx_.vars, 10);
}

void MatchEngine::undo(const Snapshot& s) const {
    if (s.b[0] == 0) {
        ctx_.varsActive = 0;
    } else if (s.b[0] == 1) {
        ctx_.varsActive = 1;
        std::memcpy(ctx_.vars, s.b + 1, 10);
    }
}

uint8_t* MatchEngine::var(int i) const {
    if (ctx_.varsActive == 0) {
        std::memset(ctx_.vars, kUnbound, 10);
        ctx_.varsActive = 1;
    }
    return &ctx_.vars[i];
}

bool MatchEngine::letterTaken(uint8_t letter) const {
    if (ctx_.exclusiveVariables)
        for (int i = 0; i < 10; i++)
            if (ctx_.vars[i] == letter) return true;
    return false;
}

bool MatchEngine::bind(int v, uint8_t letter) const {
    uint8_t* slot = var(v);
    if (*slot == kUnbound && !letterTaken(letter)) {
        *slot = letter;
        return true;
    }
    return letter == *slot;
}

bool MatchEngine::matchWord(WordBuffer& word) {
    ctx_.varsActive = 0;
    ctx_.balanceCount = 0;
    if (needsRaw_) {
        // Build, for this pattern: how many significant punctuation characters precede each letter,
        // and the word's bytes with the insignificant punctuation removed.
        uint8_t* before = word.mem + WordBuffer::kPunctBefore;
        uint8_t* const beforeEnd = before + curLen_;
        uint8_t* filtered = word.mem + WordBuffer::kFiltered;
        uint8_t* const filteredEnd = word.mem + sizeof word.mem - 2;
        uint8_t count = 0;
        for (const uint8_t* raw = word.raw;; raw++) {
            const uint8_t b = *raw;
            if (dict_.letterIndex[b] == kNotLetter) {
                if ((before == beforeEnd && (b == 0 || b == ' ')) || b == 0) {
                    *before = count;
                    *filtered = 0;
                    break;
                }
                if (punctMode_[b] == kPunct && filtered < filteredEnd) {
                    *filtered++ = b;
                    count++;
                }
            } else {
                if (filtered < filteredEnd) *filtered++ = b;
                *before++ = count;
                if (before > beforeEnd) {
                    *filtered = 0;
                    break;
                }
            }
        }
    }
    return matchGeneral(reinterpret_cast<Code>(bc_.data()) + 3, word.mem, 0, slack_, curLen_) != nullptr;
}

// Runs one (sub)pattern body against n letters at w: the template, then the anagram if there is one.
// Note that the anagram is tried against the first way the template matched and no other.
MatchEngine::Code MatchEngine::matchGeneral(Code bc, uint8_t* w, int punctIdx, int slack, int n) {
    Snapshot s;
    take(s);
    for (;;) {
        if (*bc == kEnd) return bc + 1;
        if (*bc == kAnagram) break;
        bc = runTemplate(bc, w, punctIdx, slack);
        if (!bc) {
            undo(s);
            return nullptr;
        }
    }
    const int minCount = static_cast<int>(static_cast<uint32_t>(bc[2]) | (static_cast<uint32_t>(bc[3]) << 8) | (static_cast<uint32_t>(bc[4]) << 16) | (static_cast<uint32_t>(bc[5]) << 24));
    Code r = runAnagram(bc + 6, w, punctIdx, n - minCount, n, bc[1]);
    if (r) {
        computeBalance(bc + 6, w, n);
        return r + 1;
    }
    undo(s);
    return nullptr;
}

MatchEngine::Code MatchEngine::runTemplate(Code bc, uint8_t* w, int punctIdx, int slack) {
    Snapshot s;
    take(s);
    for (;;) {
        const uint8_t op = *bc;
        if (op == kEnd) return bc + 1;

        if (op == kSpanLetters) {
            const uint8_t len = bc[1];
            Code q = bc + 1;
            for (;;) {
                const uint8_t off = q[1];
                if (off > 0xef) { bc = q + 1; break; }
                q += 2;
                if (w[off] != *q) { undo(s); return nullptr; }
            }
            w += len;
            continue;
        }

        if (op == kSpanMixed) {
            const uint8_t len = bc[1];
            bc += 2;
            for (uint8_t f; (f = *bc) < 0xf0;) {
                if ((f & 0x40) == 0) {
                    if ((f & 0x80) == 0) {
                        if (w[f] != bc[1]) { undo(s); return nullptr; }
                    } else if (!bind(bc[1], w[f & 0x7f])) {
                        undo(s);
                        return nullptr;
                    }
                    bc += 2;
                } else {
                    const bool negated = (f & 0x80) != 0;
                    int left = bc[1];
                    bc += 2;
                    bool found = false;
                    while (left > 0) {
                        left--;
                        if (w[f & 0x3f] == *bc++) { found = true; break; }
                    }
                    if (found == negated) { undo(s); return nullptr; }
                    if (!negated) bc += left;
                }
            }
            w += len;
            continue;
        }

        if (op == kStarLast) {
            // Takes every remaining spare letter, and whatever punctuation lies inside that stretch.
            Code cont = bc + 2;
            const uint8_t limit = needsRaw_ ? w[slack + WordBuffer::kPunctBefore] : 0;
            Code r;
            while ((r = runTemplate(cont, w + slack, punctIdx, 0)) == nullptr) {
                if (static_cast<int>(limit) <= punctIdx) { undo(s); return nullptr; }
                punctIdx++;
            }
            bc = r;
            continue;
        }

        if (op == kStar) {
            Code cont = bc + 2;
            Code r;
            for (;;) {
                // The punctuation counts are only filled in (and only matter) when this pattern
                // looks at punctuation; without that there is nothing to step over.
                const uint8_t limit = needsRaw_ ? w[WordBuffer::kPunctBefore] : 0;
                for (; (r = runTemplate(cont, w, punctIdx, slack)) == nullptr && punctIdx < static_cast<int>(limit); punctIdx++) {}
                if (r) break;
                if (slack == 0) { undo(s); return nullptr; }
                w++;
                slack--;
            }
            bc = r;
            continue;
        }

        if (op == kSubFixed) {
            const uint8_t len = bc[1];
            bc = matchGeneral(bc + 3, w, punctIdx, 0, len);
            if (!bc) { undo(s); return nullptr; }
            w += len;
            continue;
        }

        if (op == kSubVarLast) {
            const uint8_t min = bc[1];
            if (static_cast<int>(bc[2]) < slack) { undo(s); return nullptr; }
            Code r = matchGeneral(bc + 3, w, punctIdx, slack, min + slack);
            if (r) r = runTemplate(r, w + min + slack, punctIdx, 0);
            if (!r) { undo(s); return nullptr; }
            bc = r;
            continue;
        }

        if (op == kSubVar) {
            int len = bc[1];
            const uint8_t maxExtra = bc[2];
            Code body = bc + 3;
            int extra = 0;
            Code r;
            for (;;) {
                Snapshot inner;
                take(inner);
                r = matchGeneral(body, w, punctIdx, extra, len);
                if (r) r = runTemplate(r, w + len, punctIdx, slack);
                if (r) break;
                len++;
                slack--;
                extra++;
                if (slack < 0 || static_cast<int>(maxExtra) < extra) {
                    undo(inner);
                    undo(s);
                    return nullptr;
                }
                undo(inner);
            }
            bc = r;
            continue;
        }

        // kExactLetter / kPunct: compare one raw byte. The byte sits `punctIdx` places further on in
        // the filtered text than the current letter does, because that many punctuation characters
        // have been matched so far.
        const int at = punctIdx + WordBuffer::kFiltered;
        if (op == kPunct) punctIdx++;
        if (bc[1] != w[at]) { undo(s); return nullptr; }
        bc += 2;
    }
}

// The anagram part: stages run in the order they were compiled (sub-patterns, choice lists,
// variables, named letters). `budget` is word length minus the anagram's item count; each item left
// unused adds one, and the anagram fails once the budget rises above zero.
MatchEngine::Code MatchEngine::runAnagram(Code bc, uint8_t* letters, int punctIdx, int budget, int n, int numLetters) {
    const uint8_t op = *bc;
    if (op == kEnd) return bc;
    if (op == kSubVar || op == kSubVarLast)
        return anagramSub(bc + 3, letters, op, bc[1], reinterpret_cast<Code>(pool_[bc[2]].data()), punctIdx, budget, n, numLetters);
    uint8_t hist[260];
    std::memset(hist, 0, sizeof hist);
    for (int i = 0; i < n; i++) hist[letters[i]]++;   // letters claimed by a sub-pattern carry the top bit
    return anagramStage(op, bc + 1, hist, budget, numLetters);
}

MatchEngine::Code MatchEngine::anagramStage(uint8_t op, Code bc, uint8_t* hist, int budget, int numLetters) {
    switch (op) {
    case kSingles: return anagramSingles(bc, hist, budget);
    case kMultiples: return anagramMultiples(bc, hist, budget);
    case kChoices: return anagramChoices(bc + 2, hist, numLetters - 1, bc[0], reinterpret_cast<const uint8_t*>(pool_[bc[1]].data()), budget, numLetters);
    case kVariables: return anagramBoundVars(bc, hist, budget, numLetters);
    default: return bc - 1;   // nothing left to check
    }
}

MatchEngine::Code MatchEngine::anagramSingles(Code bc, uint8_t* hist, int budget) {
    int count = *bc++;
    for (; count > 0; count--) {
        const uint8_t letter = *bc++;
        if (hist[letter] == 0) {
            if (budget >= 0) return nullptr;
            budget++;
        }
    }
    return bc;
}

MatchEngine::Code MatchEngine::anagramMultiples(Code bc, uint8_t* hist, int budget) {
    for (;;) {
        const uint8_t count = *bc;
        if (count > 0xef) return bc;
        const uint8_t have = hist[bc[1]];
        if (have < count) {
            budget += count - have;
            if (budget > 0) return nullptr;
        }
        bc += 2;
    }
}

MatchEngine::Code MatchEngine::anagramChoices(Code bc, uint8_t* hist, int idx, int mult, const uint8_t* allowed, int budget, int numLetters) {
    for (;; idx--) {
        if (idx < 0) {
            // No letter left for this choice: leave it unused if the budget allows.
            if (budget >= 0) return nullptr;
            return mult < 2 ? anagramStage(*bc, bc + 1, hist, budget + 1, numLetters)
                            : anagramChoices(bc, hist, idx, mult - 1, allowed, budget + 1, numLetters);
        }
        if (hist[idx] != 0 && allowed[idx] != 0) {
            hist[idx]--;
            Code r = mult < 2 ? anagramStage(*bc, bc + 1, hist, budget, numLetters)
                              : anagramChoices(bc, hist, idx, mult - 1, allowed, budget, numLetters);
            hist[idx]++;
            if (r) return r;
        }
    }
}

// Variables already bound by the template take their letters first.
MatchEngine::Code MatchEngine::anagramBoundVars(Code bc, uint8_t* hist, int budget, int numLetters) {
    for (int i = 0; i < 10; i++) {
        const uint8_t count = bc[i];
        if (count == 0) continue;
        const uint8_t letter = *var(i);
        if (letter == kUnbound) continue;
        if (hist[letter] < count) {
            budget += count - hist[letter];
            if (budget > 0) return nullptr;
            hist[letter] = 0;
        } else {
            hist[letter] -= count;
        }
    }
    return anagramFreeVars(bc, hist, 0, budget, numLetters);
}

MatchEngine::Code MatchEngine::anagramFreeVars(Code bc, uint8_t* hist, int v, int budget, int numLetters) {
    uint8_t count = 0;
    while (v < 10 && ((count = bc[v]) == 0 || *var(v) != kUnbound)) v++;
    if (v >= 10) return anagramStage(bc[10], bc + 11, hist, budget, numLetters);

    for (int letter = 0; letter < numLetters; letter++) {
        if (hist[letter] == 0 || letterTaken(static_cast<uint8_t>(letter))) continue;
        const int shortfall = static_cast<int>(count) - static_cast<int>(hist[letter]);
        if (shortfall < 1) {
            hist[letter] -= count;
        } else {
            if (budget + shortfall > 0) continue;
            budget += shortfall;
            hist[letter] = 0;
        }
        *var(v) = static_cast<uint8_t>(letter);
        Code r = anagramFreeVars(bc, hist, v + 1, budget, numLetters);
        *var(v) = kUnbound;
        hist[letter] = static_cast<uint8_t>(count - shortfall);
        if (shortfall > 0) budget -= shortfall;
        if (r) return r;
    }
    // Or leave this variable out altogether.
    if (budget + count < 1) return anagramFreeVars(bc, hist, v + 1, budget + count, numLetters);
    return nullptr;
}

// A sub-pattern inside an anagram must match some run of consecutive letters not already claimed.
MatchEngine::Code MatchEngine::anagramSub(Code bc, uint8_t* letters, uint8_t op, int mult, Code sub, int punctIdx, int budget, int n, int numLetters) {
    int min = sub[1];
    int extra = sub[2];
    int tries = 0x7fffffff;
    if (op == kSubVarLast && mult == 1) {
        if (budget < 0 || extra < budget) {
            min += extra;
            tries = 0;
        } else {
            extra = budget;
            tries = 1;
        }
    } else if (n - min < extra) {
        extra = n - min;
    }
    for (;;) {
        if (extra < 0 || tries == 0) {
            const int b = budget + min;   // leave the sub-pattern out
            if (b >= 1) return nullptr;
            return mult < 2 ? runAnagram(bc, letters, punctIdx, b, n, numLetters)
                            : anagramSub(bc, letters, op, mult - 1, sub, punctIdx, b, n, numLetters);
        }
        const int len = min + extra;
        for (int start = n - len; start >= 0; start--) {
            Snapshot s;
            take(s);
            uint8_t* const a = letters + start;
            uint8_t* const e = a + len;
            uint8_t* q = a;
            while (q < e && (*q & 0x80) == 0) q++;
            if (q == e && matchGeneral(sub + 3, a, punctIdx, extra, len) != nullptr) {
                for (q = a; q < e; q++) *q ^= 0x80;
                Code r = mult < 2 ? runAnagram(bc, letters, punctIdx, budget - extra, n, numLetters)
                                  : anagramSub(bc, letters, op, mult - 1, sub, punctIdx, budget - extra, n, numLetters);
                for (q = a; q < e; q++) *q ^= 0x80;
                if (r) return r;
            }
            undo(s);
        }
        tries--;
        extra--;
    }
}

// Balance = the word's letters minus the letters the anagram names. Only an anagram made purely of
// named letters and match-alls gets one.
void MatchEngine::computeBalance(Code bc, const uint8_t* letters, int n) const {
    ctx_.balanceCount++;
    std::memset(ctx_.balance, 0, sizeof ctx_.balance);
    const uint8_t op = *bc;
    if (op != kSingles && op != kMultiples) return;
    for (int i = 0; i < n; i++) ctx_.balance[letters[i]]++;
    if (op == kSingles) {
        const int count = bc[1];
        for (int i = 0; i < count; i++) ctx_.balance[bc[2 + i]]--;
    } else {
        for (Code q = bc + 1; *q < 0xf0; q += 2) ctx_.balance[q[1]] -= *q;
    }
}

void MatchEngine::formatBalance(std::string& out) const {
    if (ctx_.balanceCount != 1) return;
    for (int positive = 0; positive < 2; positive++) {
        bool first = true;
        for (int i = 0; i < 256; i++) {
            const int v = ctx_.balance[i];
            if (v == 0 || (v > 0) != (positive == 1)) continue;
            if (first) {
                out += positive ? '+' : '-';
                first = false;
            }
            out.append(static_cast<size_t>(positive ? v : -v), static_cast<char>(dict_.canonical[i]));
        }
    }
}

// ============================================================================================
// Logical expressions
// ============================================================================================

namespace {
enum : uint8_t { kOr = 1, kAnd = 2, kFinish = 3, kOpen = 4, kClose = 5, kNot = 8 };
}

int MatchEngineSet::compile(const Dictionary& dict, const std::string& query, int shortest, int longest, bool ignoreUnusedPunctuation, bool exclusiveVariables) {
    engines_.clear();
    ops_.clear();
    ctx_.exclusiveVariables = exclusiveVariables;
    ctx_.varsActive = 0;
    ctx_.balanceCount = 0;

    const size_t npos = std::string::npos;
    int depth = 0;
    size_t pos = 0, search = 0;
    for (;;) {
        // Next & or | that is not escaped.
        size_t at;
        for (;;) {
            at = npos;
            if (search <= query.size()) {
                at = query.find_first_of("&|", search);
                if (at != npos && at >= query.size()) at = npos;
            }
            if (at == npos || at == 0 || query[at - 1] != '\\') break;
            search = at + 1;
        }
        std::string seg = query.substr(pos, at == npos ? npos : at - pos);
        uint8_t op = kFinish;
        if (at != npos) {
            op = query[at] == '&' ? kAnd : kOr;
            pos = at + 1;
        }

        // Parentheses do double duty: grouping here, sub-patterns inside a leaf. Pairs that balance
        // within this operand are taken to be sub-patterns; the surplus is grouping.
        unsigned opens = 0, closes = 0, opensBeforeNot = 0;
        for (size_t i = 0; i < seg.size(); i++) {
            if (i != 0 && seg[i - 1] == '\\') continue;
            if (seg[i] == '(') opens++;
            else if (seg[i] == ')') closes++;
            else if (seg[i] == '!') opensBeforeNot = opens;
        }
        unsigned paired = closes < opens ? closes : opens;
        if (opens - paired < opensBeforeNot) paired = opens - opensBeforeNot;
        opens -= paired;
        closes -= paired;

        int closing = 0;
        while (!seg.empty()) {
            const char c = seg.back();
            if (closes == 0 || c != ')') {
                if (c != ' ') break;
            } else {
                if (seg.size() != 1 && seg[seg.size() - 2] == '\\') break;
                closing++;
                closes--;
            }
            seg.pop_back();
        }
        uint8_t negate = 0;
        while (!seg.empty()) {
            const char c = seg.front();
            if (opens == 0 || c != '(') {
                if (c == '!') negate ^= kNot;
                else if (c != ' ') break;
            } else {
                engines_.emplace_back(nullptr);
                ops_ += static_cast<char>(negate | kOpen);
                depth++;
                negate = 0;
                opens--;
            }
            seg.erase(0, 1);
        }

        auto engine = std::make_unique<MatchEngine>(dict, ctx_);
        engine->setShortest(shortest);
        engine->setLongest(longest);
        engine->compile(seg, ignoreUnusedPunctuation);
        engines_.push_back(std::move(engine));

        if (depth > 31) depth = 0x10000;
        depth -= closing;
        if (depth < 0) depth = -0x10000;
        for (; closing != 0; closing--) {
            engines_.emplace_back(nullptr);
            ops_ += static_cast<char>(negate | kClose);
            negate = 0;
        }
        ops_ += static_cast<char>(op | negate);

        search = pos;
        if (at == npos) break;
    }

    if (depth > 0) return kSubpatternUnclosed;
    if (depth < 0) return kStrayCloseParen;
    for (const auto& e : engines_)
        if (e && !e->valid()) return e->status();
    return kOk;
}

// mode 1: could a word of this length satisfy the query? (negation is not applied)
// mode 2: does this word satisfy it?
// Evaluation is strictly left to right: a true operand before | or a false one before & ends the
// current group at once, so  a & b | c  behaves as  a & (b | c).
bool MatchEngineSet::eval(int mode, WordBuffer* word, int length) {
    const uint8_t* op = reinterpret_cast<const uint8_t*>(ops_.data());
    size_t slot = 0;
    uint8_t stack[80];
    int sp = 0;
    bool acc = false;
    for (;;) {
        uint8_t o;
        for (;;) {
            o = *op++;
            if ((o & 0xf7) != kOpen) break;
            if (sp < static_cast<int>(sizeof stack)) stack[sp] = o;
            sp++;
            slot++;
        }
        size_t next = slot + 1;
        MatchEngine* e = slot < engines_.size() ? engines_[slot].get() : nullptr;
        if (e) {
            acc = !(length < e->minLength() || e->maxLength() < length);
            if (acc && mode == 2 && !e->matchWord(*word)) acc = false;
        }
        if (o & kNot) {
            if (mode != 1) acc = !acc;
            o &= 0xf7;
        }
        if ((o == kOr && acc) || (o == kAnd && !acc)) {
            if (sp == 0) return acc;
            // Skip the rest of the enclosing group.
            const int target = sp - 1;
            while (target < sp) {
                o = *op++;
                next++;
                if ((o & 0xf7) == kOpen) sp++;
                else if ((o & 0xf7) == kClose) sp--;
            }
            slot = next;
            if ((stack[sp] & kNot) && mode != 1) acc = !acc;
            continue;
        }
        slot = next;
        if (o == kClose) {
            sp--;
            if (sp >= 0 && (stack[sp] & kNot) && mode != 1) acc = !acc;
        } else if (o == kFinish) {
            return acc;
        }
    }
}

bool MatchEngineSet::evalLeaves(const std::vector<uint8_t>& values) const {
    // The same left-to-right evaluation as eval(2, ...), with leaf results supplied.
    const uint8_t* op = reinterpret_cast<const uint8_t*>(ops_.data());
    size_t slot = 0;
    uint8_t stack[80];
    int sp = 0;
    bool acc = false;
    for (;;) {
        uint8_t o;
        for (;;) {
            o = *op++;
            if ((o & 0xf7) != kOpen) break;
            if (sp < static_cast<int>(sizeof stack)) stack[sp] = o;
            sp++;
            slot++;
        }
        size_t next = slot + 1;
        if (slot < engines_.size() && engines_[slot]) acc = slot < values.size() && values[slot] != 0;
        if (o & kNot) {
            acc = !acc;
            o &= 0xf7;
        }
        if ((o == kOr && acc) || (o == kAnd && !acc)) {
            if (sp == 0) return acc;
            const int target = sp - 1;
            while (target < sp) {
                o = *op++;
                next++;
                if ((o & 0xf7) == kOpen) sp++;
                else if ((o & 0xf7) == kClose) sp--;
            }
            slot = next;
            if (stack[sp] & kNot) acc = !acc;
            continue;
        }
        slot = next;
        if (o == kClose) {
            sp--;
            if (sp >= 0 && (stack[sp] & kNot)) acc = !acc;
        } else if (o == kFinish) {
            return acc;
        }
    }
}

void MatchEngineSet::lengthRange(int& first, int& last) {
    first = 0x65;
    last = 0;
    for (int n = 0; n < 0x65; n++) {
        if (eval(1, nullptr, n)) {
            if (first == 0x65) first = n;
            last = n;
        }
    }
}

void MatchEngineSet::setWordLength(int n) {
    for (auto& e : engines_)
        if (e && e->minLength() <= n && n <= e->maxLength()) e->setWordLength(n);
}

bool MatchEngineSet::hasNot() const {
    for (char o : ops_)
        if (static_cast<uint8_t>(o) & kNot) return true;
    return false;
}

int MatchEngineSet::lengthKindSum() const {
    int sum = 0;
    for (const auto& e : engines_)
        if (e) sum += e->lengthKind();
    return sum;
}

std::string MatchEngineSet::balanceText() const {
    std::string out;
    if (engines_.size() == 1 && engines_[0]) {
        engines_[0]->formatBalance(out);
        if (!out.empty()) out.insert(0, " ");
    }
    return out;
}

} // namespace tea
