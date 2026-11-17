// TEA pattern matching.
//
// A query such as  ";tearing & ! *ing*"  is a logical expression over leaf patterns. Each leaf
// ("[template][;anagram]") is compiled to a compact bytecode and run against candidate words by a
// small backtracking interpreter. MatchEngine is one leaf; MatchEngineSet is the whole expression.
//
// The bytecode layout and the interpreter's search order follow the original program closely on
// purpose: they decide which words match in the corner cases (letter variables shared between a
// template and an anagram, punctuation absorbed by wildcards, omitted anagram letters), and the
// goal is to give the same answers.
#pragma once
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "tsd.h"

namespace tea {

// Pattern error codes (0 = no error). Text for each is in errorText().
enum PatternStatus {
    kOk = 0,
    kEmpty = 1,
    kChoiceNotLetters = 2,
    kTooManyParts = 3,
    kTooLong = 4,
    kChoiceUnclosed = 5,
    kSecondSemicolon = 6,
    kSubpatternUnclosed = 7,
    kStrayCloseParen = 8,
    kStrayCloseBracket = 9,
    kTooMuchPunctuation = 10,
    kAnagramNotLetters = 11,
    kStrayCaret = 12,
    kDanglingEscape = 13,
    kChoiceEmpty = 14,
};
const char* errorText(int status);

// State that every leaf of one query shares while a single word is being tested.
struct MatchContext {
    bool exclusiveVariables = true;   // different letter variables must stand for different letters
    uint8_t varsActive = 0;           // 0 until a variable is first touched for the current word
    uint8_t vars[10];                 // letter class bound to each variable; kUnbound if none
    int balanceCount = 0;             // how many anagram stages have succeeded for the current word
    int balance[256];                 // word letters minus the anagram's named letters, per letter class
};

// One candidate word, laid out the way the interpreter addresses it: a pointer into `letters`
// reaches the matching entries of the two arrays behind it at fixed distances.
struct WordBuffer {
    static constexpr int kPunctBefore = 0x80;   // offset of punctBefore[] from letters[]
    static constexpr int kFiltered = 0x100;     // offset of filtered[] from letters[]
    uint8_t mem[0x100 + 1536] = {};
    const uint8_t* raw = nullptr;               // the word as stored (NUL-terminated), without annotation
    uint8_t* letters() { return mem; }          // letter classes, 0xff-terminated
    void set(const Dictionary::Word& w);
};

class MatchEngine {
public:
    MatchEngine(const Dictionary& dict, MatchContext& ctx) : dict_(dict), ctx_(ctx) {}

    void setShortest(int n) { shortest_ = n < 2 ? 1 : n > 99 ? 100 : n; }
    void setLongest(int n) { longest_ = n < 2 ? 1 : n > 99 ? 100 : n; }

    // Compiles one leaf pattern. On failure valid() is false and status() says why.
    void compile(const std::string& pattern, bool ignoreUnusedPunctuation);
    bool valid() const { return valid_; }
    int status() const { return status_; }

    int minLength() const { return shortest_ > minLen_ ? shortest_ : minLen_; }
    int maxLength() const { return longest_ < maxLen_ ? longest_ : maxLen_; }
    void setWordLength(int n) { curLen_ = n; slack_ = n - minLen_; }
    // 1 if the pattern has no upper length limit, -1 if it allows a range of lengths, 0 if one length.
    int lengthKind() const { return maxLen_ > 100 ? 1 : (minLen_ < maxLen_ ? -1 : 0); }

    bool matchWord(WordBuffer& word);
    void formatBalance(std::string& out) const;

    const std::string& bytecode() const { return bc_; }   // for tests and --dump

private:
    using Code = const uint8_t*;

    // --- compiler ---
    uint8_t emitted(uint8_t op) { lastOp_ = op; opCount_++; return op; }
    int compilePattern(Code& cursor, std::string& bc, int& outVarPos, int& outEndPos, int& outExtra);
    int compileTemplate(Code& cursor, std::string& bc, int& outVarPos, int& outEndPos, int& outExtra);
    int compileAnagram(Code& cursor, std::string& bc, int& outExtra, int templateExtra);
    int poolAdd(const std::string& s);

    // --- interpreter ---
    struct Snapshot { uint8_t b[12]; };
    void take(Snapshot& s) const;
    void undo(const Snapshot& s) const;
    bool bind(int var, uint8_t letter) const;
    bool letterTaken(uint8_t letter) const;
    uint8_t* var(int i) const;

    Code matchGeneral(Code bc, uint8_t* w, int punctIdx, int slack, int n);
    Code runTemplate(Code bc, uint8_t* w, int punctIdx, int slack);
    Code runAnagram(Code bc, uint8_t* letters, int punctIdx, int budget, int n, int numLetters);
    Code anagramStage(uint8_t op, Code bc, uint8_t* hist, int budget, int numLetters);
    Code anagramSingles(Code bc, uint8_t* hist, int budget);
    Code anagramMultiples(Code bc, uint8_t* hist, int budget);
    Code anagramChoices(Code bc, uint8_t* hist, int idx, int mult, const uint8_t* allowed, int budget, int numLetters);
    Code anagramBoundVars(Code bc, uint8_t* hist, int budget, int numLetters);
    Code anagramFreeVars(Code bc, uint8_t* hist, int var, int budget, int numLetters);
    Code anagramSub(Code bc, uint8_t* letters, uint8_t op, int mult, Code sub, int punctIdx, int budget, int n, int numLetters);
    void computeBalance(Code bc, const uint8_t* letters, int n) const;

    const Dictionary& dict_;
    MatchContext& ctx_;
    std::string bc_;                    // compiled pattern
    std::vector<std::string> pool_;     // sub-patterns and choice-list letter sets used by anagrams
    uint8_t punctMode_[256];            // per byte: 0 = ignore, 0xff = significant punctuation, 0xfe = case-exact letter
    bool needsRaw_ = false;             // the pattern looks at punctuation or exact case
    int status_ = 0;
    bool valid_ = false;
    int minLen_ = 0, maxLen_ = 0;
    int shortest_ = 1, longest_ = 100;
    int curLen_ = 0, slack_ = 0;
    uint8_t lastOp_ = 0xfd;
    int opCount_ = 0;
};

class MatchEngineSet {
public:
    // Compiles a full query (macros already expanded) for one dictionary. Returns a PatternStatus.
    int compile(const Dictionary& dict, const std::string& query, int shortest, int longest, bool ignoreUnusedPunctuation, bool exclusiveVariables);

    // Smallest and largest word length that can satisfy the query; first > last if none.
    void lengthRange(int& first, int& last);
    void setWordLength(int n);
    bool matches(WordBuffer& word, int length) { return eval(2, &word, length); }
    // The compiled expression: one slot per leaf pattern (null where the logic has a parenthesis).
    size_t slotCount() const { return engines_.size(); }
    MatchEngine* leaf(size_t slot) const { return engines_[slot].get(); }
    // Evaluates the logic with a given truth value for each leaf slot (used by full-text search,
    // where a leaf is true if some word of a definition matches it).
    bool evalLeaves(const std::vector<uint8_t>& values) const;
    bool hasNot() const;               // the expression uses ! anywhere
    // The logic opcodes, one per slot: 1 or, 2 and, 3 end, 4 open, 5 close; +8 negates.
    const std::string& opcodes() const { return ops_; }
    // Sum of the leaves' lengthKind(): the GUI lists results longest first when it is negative.
    int lengthKindSum() const;
    // " -XY+Z" for a query that is a single anagram leaf; empty otherwise.
    std::string balanceText() const;

private:
    bool eval(int mode, WordBuffer* word, int length);
    MatchContext ctx_;
    std::vector<std::unique_ptr<MatchEngine>> engines_;   // null where the logic has a parenthesis
    std::string ops_;                                     // one logic opcode per engines_ slot
};

// Replaces unescaped @ and # with their expansions (when those are not empty).
std::string expandMacros(const std::string& pattern, const std::string& at, const std::string& hash);

} // namespace tea
