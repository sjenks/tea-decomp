// TEACON.exe — application module "InputEngine"
// 7 functions, 0x00409a5c..0x0040a338. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00409a5c  InputEngine::InputEngine   (169 bytes)   [analysis]
//   constructor(list, dictionaryIndex): links the engine into the global InputEngine list
undefined4 * __cdecl InputEngine::InputEngine(undefined4 *self,int dictList,int dictIndex)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42c49c);
  self[m_dictList / 4] = dictList;
  self[m_dictIndex / 4] = dictIndex;
  self[m_dict / 4] = *(undefined4 *)(dictIndex * 4 + *(int *)(dictList + 0xc));
  self[m_hFile / 4] = 0xffffffff;
  self[m_fileOffset / 4] = 0;
  self[m_length / 4] = 0;
  self[m_prev / 4] = g_inputEngineTail;
  *self = 0;
  if (g_inputEngineHead == (undefined4 *)0x0) {
    g_inputEngineHead = self;
  }
  else {
    *g_inputEngineTail = self;
  }
  g_inputEngineTail = self;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409b24  InputEngine::~InputEngine   (69 bytes)   [rtti:dtor destructor]
//   written in code as InputEngine::_dtor
void __cdecl InputEngine::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    g_inputEngineTail = *(undefined4 **)(self + m_prev);
    if (g_inputEngineTail == (undefined4 *)0x0) {
      (*(undefined4 *)&g_inputEngineHead) = 0;
    }
    else {
      *g_inputEngineTail = 0;
    }
    if (*(HANDLE *)(self + m_hFile) != (HANDLE)0xffffffff) {
      CloseHandle(*(HANDLE *)(self + m_hFile));
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409b6c  InputEngine::StartLength   (267 bytes)   [analysis]
//   selects one word-length bucket: looks up word_stream_offsets[L], skips empty buckets, opens the file, clears the word buffer
bool __cdecl InputEngine::StartLength(int self,int length)

{
  bool opened;
  undefined2 numLengths;
  int loaded;
  undefined2 regHigh;
  undefined4 wordStreamOffset;
  undefined2 regHigh2;
  uint wordStreamOffset2;
  undefined3 regHigh3;
  undefined1 linkMode;
  
  *(int *)(self + m_length) = length;
  *(undefined4 *)(self + m_wordsScanned) = 0;
  *(undefined4 *)(self + m_linkIndex) = 0;
  *(undefined4 *)(self + m_hasLinks) = 0;
  if (*(int *)(*(int *)(self + m_dict) + 0x23fc) < 1) {
    linkMode = 0;
  }
  else {
    linkMode = 2;
  }
  *(undefined1 *)(self + m_linkMode) = linkMode;
  if (*(HANDLE *)(self + m_hFile) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(self + m_hFile));
  }
  *(undefined4 *)(self + m_hFile) = 0xffffffff;
  loaded = TSDictionaryList::EnsureCurrent(*(int *)(self + m_dictList),*(int *)(self + m_dictIndex));
  if ((loaded != 0) && (0 < length)) {
    numLengths = TSDictionaryList::GetNumLengths(*(int *)(self + m_dictList),*(int *)(self + m_dictIndex));
    if (length < CONCAT22(regHigh,numLengths)) {
      wordStreamOffset = TSDictionaryList::GetWordStreamOffset(*(int *)(self + m_dictList),*(int *)(self + m_dictIndex),length);
      *(undefined4 *)(self + m_fileOffset) = wordStreamOffset;
      numLengths = TSDictionaryList::GetNumLengths(*(int *)(self + m_dictList),*(int *)(self + m_dictIndex));
      if (length != CONCAT22(regHigh2,numLengths) + -1) {
        wordStreamOffset2 = TSDictionaryList::GetWordStreamOffset(*(int *)(self + m_dictList),*(int *)(self + m_dictIndex),length + 1);
        if (wordStreamOffset2 <= *(uint *)(self + m_fileOffset)) goto LAB_00409c4b;
      }
      opened = InputEngine::OpenFile(self);
      if (CONCAT31(regHigh3,opened) == 0) {
        CloseHandle(*(HANDLE *)(self + m_hFile));
        *(undefined4 *)(self + m_hFile) = 0xffffffff;
      }
    }
  }
LAB_00409c4b:
  memset((undefined4 *)(self + m_letters),0,2000);
  *(undefined1 *)(self + m_letters + *(int *)(self + m_length)) = 0xff;
  return *(int *)(self + m_hFile) != -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409c78  InputEngine::NextMatch   (1058 bytes)   [notes+analysis]
//   Huffman-decodes words of the current length (8-bit lookahead table, then bit-by-bit trie walk), at most 2000 per call, testing each against the MatchEngineSet
char * __cdecl InputEngine::NextMatch(int self,int matchSet)

{
  uint *nextPtr;
  int dict;
  int codeLen;
  char ch;
  bool ok;
  int *engines;
  undefined3 regHigh;
  undefined3 regHigh2;
  undefined3 regHigh3;
  int symbol;
  uint bit;
  char *rawNext;
  int huffNodes;
  byte *logicOps;
  int singleEngine;
  int bitPos;
  uint bits;
  char *rawOut;
  char *lettersOut;
  int budget;
  uint *bitEnd;
  uint *bitPtr;
  
  bitPos = *(int *)(self + m_bitPos);
  bitPtr = *(uint **)(self + m_bitPtr);
  bitEnd = *(uint **)(self + m_bitEnd);
  dict = *(int *)(self + m_dict);
  huffNodes = dict + 4;
  if (*(int *)(*(int *)(matchSet + 0x28) + -4) == 0) {
    logicOps = (byte *)0x0;
  }
  else {
    logicOps = *(byte **)(matchSet + 0x28);
  }
  if (**(char **)(matchSet + 0x28) == '\x03') {
    singleEngine = *(int *)(matchSet + 8) - *(int *)(matchSet + 4);
    if (singleEngine < 0) {
      singleEngine = singleEngine + 3;
    }
    if (singleEngine >> 2 == 0) {
      engines = (int *)0x0;
    }
    else {
      engines = *(int **)(matchSet + 4);
    }
    singleEngine = *engines;
  }
  else {
    singleEngine = 0;
  }
  budget = 2000;
  if (bitPos < 0x20) {
    bits = *bitPtr >> ((byte)bitPos & 0x1f);
  }
  else {
    bits = 0;
  }
  do {
    lettersOut = (char *)(self + m_letters);
    rawOut = (char *)(self + m_rawWord);
LAB_00409d3a:
    symbol = *(int *)(dict + 0x1804 + (bits & 0xff) * 4);
    if (symbol < 0x100) {
      codeLen = *(int *)(huffNodes + symbol * 8);
      if (0x20 < codeLen + bitPos) {
LAB_00409d77:
        nextPtr = bitPtr + 1;
        if (nextPtr < bitEnd) {
          bit = *nextPtr;
          symbol = *(int *)(dict + 0x1804 +
                          ((bits | bit << (0x20U - (char)bitPos & 0x1f)) & 0xff) * 4);
          bitPtr = nextPtr;
          if (symbol < 0x100) {
            bitPos = *(int *)(huffNodes + symbol * 8) + -0x20 + bitPos;
            bits = bit >> ((byte)bitPos & 0x1f);
            goto LAB_00409e6b;
          }
          bitPos = bitPos + -0x18;
          bits = bit >> ((byte)bitPos & 0x1f);
        }
        else {
          symbol = 0x100;
        }
        goto joined_r0x00409ddb;
      }
      bitPos = bitPos + codeLen;
      bits = bits >> ((byte)codeLen & 0x1f);
    }
    else {
      if (0x18 < bitPos) goto LAB_00409d77;
      bitPos = bitPos + 8;
      bits = bits >> 8;
joined_r0x00409ddb:
      for (; 0xff < symbol; symbol = *(int *)(huffNodes + symbol * 8 + bit * 4)) {
        if (0x1f < bitPos) {
          bitPtr = bitPtr + 1;
          if (bitEnd <= bitPtr) {
            ok = InputEngine::OpenFile(self);
            if (CONCAT31(regHigh,ok) == 0) {
              *(undefined1 *)(self + m_letters) = 0xff;
              *(undefined4 *)(self + m_bitPos) = 0;
              *(undefined4 *)(self + m_bitPtr) = *(undefined4 *)(self + m_bitEnd);
              return (char *)(self + m_letters);
            }
            bitPtr = *(uint **)(self + m_bitPtr);
            bitEnd = *(uint **)(self + m_bitEnd);
          }
          bitPos = 0;
          bits = *bitPtr;
        }
        bit = bits & 1;
        bitPos = bitPos + 1;
        bits = bits >> 1;
      }
    }
LAB_00409e6b:
    rawNext = rawOut + 1;
    ch = (char)symbol;
    *rawOut = ch;
    if (ch != '\0') {
      if (ch == '\n') {
        *rawOut = '\0';
        lettersOut = (char *)0x0;
        rawOut = rawNext;
      }
      else {
        rawOut = rawNext;
        if ((lettersOut != (char *)0x0) &&
           (ch = *(char *)(dict + 8 + symbol * 8), *lettersOut = ch, ch != -1)) {
          lettersOut = lettersOut + 1;
        }
      }
      goto LAB_00409d3a;
    }
    *rawNext = '\0';
    if ((char *)(self + m_letters) == lettersOut) {
      *lettersOut = -1;
      *(undefined4 *)(self + m_linkIndex) = 0;
      *(undefined4 *)(self + m_hasLinks) = 1;
      *(char *)(self + m_linkMode) = *(char *)(self + m_linkMode) + -1;
      *(int *)(self + m_bitPos) = bitPos;
      *(uint **)(self + m_bitPtr) = bitPtr;
      *(uint **)(self + m_bitEnd) = bitEnd;
      *(int *)(self + m_wordsScanned) = *(int *)(self + m_wordsScanned) + (2000 - budget);
      return (char *)(self + m_letters);
    }
    if (*(char *)(self + m_linkMode) == '\x02') {
      if (0x1f < bitPos) {
        bitPtr = bitPtr + 1;
        if (bitEnd <= bitPtr) {
          ok = InputEngine::OpenFile(self);
          if (CONCAT31(regHigh2,ok) == 0) {
            *(undefined1 *)(self + m_letters) = 0xff;
            *(undefined4 *)(self + m_bitPos) = 0;
            *(undefined4 *)(self + m_bitPtr) = *(undefined4 *)(self + m_bitEnd);
            return (char *)(self + m_letters);
          }
          bitPtr = *(uint **)(self + m_bitPtr);
          bitEnd = *(uint **)(self + m_bitEnd);
        }
        bitPos = 0;
        bits = *bitPtr;
      }
      *(uint *)(self + m_hasLinks) = bits & 1;
      if ((bits & 1) != 0) {
        *(int *)(self + m_linkIndex) = *(int *)(self + m_linkIndex) + 1;
      }
      bitPos = bitPos + 1;
      bits = bits >> 1;
    }
    else {
      *(int *)(self + m_linkIndex) = *(int *)(self + m_linkIndex) + 1;
    }
    if (singleEngine == 0) {
      if (logicOps == (byte *)0x0) {
LAB_0040a049:
        *(int *)(self + m_bitPos) = bitPos;
        *(uint **)(self + m_bitPtr) = bitPtr;
        *(uint **)(self + m_bitEnd) = bitEnd;
        if (budget < 1) {
          *(int *)(self + m_wordsScanned) = *(int *)(self + m_wordsScanned) + 2000;
          rawNext = (char *)0x0;
        }
        else {
          *(int *)(self + m_wordsScanned) = *(int *)(self + m_wordsScanned) + (0x7d1 - budget);
          rawNext = (char *)(self + m_letters);
        }
        return rawNext;
      }
      symbol = *(int *)(matchSet + 8) - *(int *)(matchSet + 4);
      if (symbol < 0) {
        symbol = symbol + 3;
      }
      if (symbol >> 2 == 0) {
        engines = (int *)0x0;
      }
      else {
        engines = *(int **)(matchSet + 4);
      }
      bit = MatchEngineSet::EvalLogic('\x02',self + m_letters,*(int *)(self + m_length),logicOps,engines);
    }
    else {
      ok = MatchEngine::MatchWord(singleEngine,self + m_letters);
      bit = CONCAT31(regHigh3,ok);
    }
    if ((bit != 0) || (budget = budget + -1, budget < 1)) goto LAB_0040a049;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a09c  MatchEngineSet::EvalLogic   (372 bytes, 2 ranges)   [notes+analysis]
//   boolean VM over the logic bytecode: 1=OR 2=AND 3=END 4=open paren 5=close paren, bit 0x08=NOT. mode 0 = precomputed flags, 1 = length pre-check (NOT is skipped), 2 = match the word. The 0x412000 address in your notes is this function in TEA.exe
uint __cdecl MatchEngineSet::EvalLogic(char mode,int wordBuf,int length,byte *ops,int *engines)

{
  byte *target;
  int *nextEngine;
  bool matched;
  int minLength;
  undefined3 regHigh;
  byte op;
  byte *stackTop;
  byte parenStack [32];
  int engine;
  uint result;
  
  stackTop = parenStack;
  result = 0x2a;
  while( true ) {
    while( true ) {
      while( true ) {
        op = *ops;
        ops = ops + 1;
        if ((op & 0xf7) != 4) break;
        *stackTop = op;
        stackTop = stackTop + 1;
        engines = engines + 1;
      }
      nextEngine = engines + 1;
      engine = *engines;
      if (engine != 0) {
        if (mode == '\0') {
          result = (uint)(engine == 1);
        }
        else {
          minLength = MatchEngine::GetMinLength(engine);
          if ((length < minLength) || (minLength = MatchEngine::GetMaxLength(engine), minLength < length)) {
            result = 0;
          }
          else {
            result = 1;
          }
          if (((result != 0) && (mode == '\x02')) &&
             (matched = MatchEngine::MatchWord(engine,wordBuf), CONCAT31(regHigh,matched) == 0)) {
            result = 0;
          }
        }
      }
      if ((op & 8) != 0) {
        if (mode != '\x01') {
          result = (uint)(result == 0);
        }
        op = op & 0xf7;
      }
      if (((op == 1) && (result != 0)) || ((op == 2 && (result == 0)))) break;
      engines = nextEngine;
      if (op == 5) {
        stackTop = stackTop + -1;
        if (((*stackTop & 8) != 0) && (mode != '\x01')) {
          result = (uint)(result == 0);
        }
      }
      else if (op == 3) {
        return result;
      }
    }
    if (stackTop == parenStack) break;
    target = stackTop + -1;
    while (target < stackTop) {
      op = *ops;
      ops = ops + 1;
      nextEngine = nextEngine + 1;
      if ((op & 0xf7) == 4) {
        stackTop = stackTop + 1;
      }
      else if ((op & 0xf7) == 5) {
        stackTop = stackTop + -1;
      }
    }
    engines = nextEngine;
    if (((*stackTop & 8) != 0) && (mode != '\x01')) {
      result = (uint)(result == 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a218  InputEngine::OpenFile   (288 bytes)   [notes+analysis]
//   CreateFileA + seek to the saved offset; on ERROR_TOO_MANY_OPEN_FILES closes another engine's handle from the global list and retries
bool __cdecl InputEngine::OpenFile(int self)

{
  undefined4 *other;
  LPCSTR lpFileName;
  BOOL ok;
  DWORD initialEcx;
  bool result;
  DWORD status;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE hFile;
  DWORD bytesRead;
  
  bytesRead = initialEcx;
  if (*(int *)(self + m_hFile) == -1) {
    do {
      hFile = (HANDLE)0x0;
      dwFlagsAndAttributes = 0x80;
      dwCreationDisposition = 3;
      lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
      dwShareMode = 3;
      status = 0x80000000;
      lpFileName = (LPCSTR)(**(code **)(**(int **)(*(int *)(*(int *)(self + m_dictList) + 0xc) +
                                                  *(int *)(self + m_dictIndex) * 4) + 0x18))();
      hFile = CreateFileA(lpFileName,status,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
                           dwFlagsAndAttributes,hFile);
      *(HANDLE *)(self + m_hFile) = hFile;
      if (hFile != (HANDLE)0xffffffff) {
        if (*(int *)(self + m_fileOffset) != 0) {
          SetFilePointer(*(HANDLE *)(self + m_hFile),*(int *)(self + m_fileOffset),(PLONG)0x0,0);
        }
        goto LAB_0040a2d6;
      }
      status = GetLastError();
      other = g_inputEngineHead;
      if (status != 4) {
        return false;
      }
      for (; other != (undefined4 *)0x0; other = (undefined4 *)*other) {
        if (other[5] != -1) {
          status = SetFilePointer(*(HANDLE *)(self + m_hFile),0,(PLONG)0x0,1);
          other[6] = status;
          CloseHandle((HANDLE)other[5]);
          other[5] = 0xffffffff;
          break;
        }
      }
    } while (other != (undefined4 *)0x0);
    result = false;
  }
  else {
LAB_0040a2d6:
    ok = ReadFile(*(HANDLE *)(self + m_hFile),(LPVOID)(self + m_readBuf),0x4000,&bytesRead,
                     (LPOVERLAPPED)0x0);
    if (ok == 0) {
      result = false;
    }
    else {
      *(undefined4 *)(self + m_bitPos) = 0;
      *(LPVOID *)(self + m_bitPtr) = (LPVOID)(self + m_readBuf);
      *(DWORD *)(self + m_bitEnd) = (bytesRead + 3 & 0xfffffffc) + self + m_readBuf;
      result = bytesRead != 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a338  InputEngine::GetAnnotation   (37 bytes)   [notes+analysis]
//   returns the text following the display word's NUL, or NULL when empty. The 0x4122bc address in your notes is this function in TEA.exe
char * __cdecl InputEngine::GetAnnotation(int self)

{
  char *annotation;
  
  annotation = strlen((uint *)(self + m_rawWord));
  annotation = (char *)(self + m_rawWord + (int)(annotation + 1));
  if (*annotation == '\0') {
    annotation = (char *)0x0;
  }
  return annotation;
}

} // namespace tea
