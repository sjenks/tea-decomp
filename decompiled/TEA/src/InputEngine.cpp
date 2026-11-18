// TEA.exe — application module "InputEngine"
// 12 functions, 0x00411680..0x0041238c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00411680  InputEngine::InputEngine   (169 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00409a5c. constructor(list, dictionaryIndex): links the engine into the global InputEngine list
undefined4 * __cdecl InputEngine::InputEngine(undefined4 *self,int dictList,int dictIndex)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ecae0);
  self[m_dictList / 4] = dictList;
  self[m_dictIndex / 4] = dictIndex;
  self[m_dict / 4] = *(undefined4 *)(dictIndex * 4 + *(int *)(dictList + 0xc));
  self[m_hFile / 4] = 0xffffffff;
  self[m_fileOffset / 4] = 0;
  self[m_length / 4] = 0;
  self[m_prev / 4] = DAT_004ecacc;
  *self = 0;
  if (DAT_004ecac8 == (undefined4 *)0x0) {
    DAT_004ecac8 = self;
  }
  else {
    *DAT_004ecacc = self;
  }
  DAT_004ecacc = self;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411748  InputEngine::~InputEngine   (69 bytes)   [rtti:dtor destructor]
//   written in code as InputEngine::_dtor
void __cdecl InputEngine::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    DAT_004ecacc = *(undefined4 **)(self + m_prev);
    if (DAT_004ecacc == (undefined4 *)0x0) {
      (*(undefined4 *)&DAT_004ecac8) = 0;
    }
    else {
      *DAT_004ecacc = 0;
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
// 0x00411790  InputEngine::StartLength   (270 bytes)   [analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). Selects one word-length bucket and opens the file
bool __cdecl InputEngine::StartLength(int self,int length)

{
  bool opened;
  undefined2 numLengths;
  int loaded;
  undefined2 regHigh;
  undefined2 regHigh2;
  uint nextLengthOffset;
  undefined3 regHigh3;
  undefined4 linkModeOrOffset;
  
  *(int *)(self + m_length) = length;
  *(undefined4 *)(self + m_wordsScanned) = 0;
  *(undefined4 *)(self + m_linkIndex) = 0;
  *(undefined4 *)(self + m_hasLinks) = 0;
  if (*(int *)(*(int *)(self + m_dict) + 0x23fc) < 1) {
    linkModeOrOffset = 0;
  }
  else {
    linkModeOrOffset = 2;
  }
  *(undefined4 *)(self + m_linkMode) = linkModeOrOffset;
  if (*(HANDLE *)(self + m_hFile) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(self + m_hFile));
  }
  *(undefined4 *)(self + m_hFile) = 0xffffffff;
  loaded = TSDictionaryList::EnsureCurrent(*(int *)(self + m_dictList),*(int *)(self + m_dictIndex));
  if ((loaded != 0) && (0 < length)) {
    numLengths = TSDictionaryList::GetNumLengths(*(int *)(self + m_dictList),*(int *)(self + m_dictIndex));
    if (length < CONCAT22(regHigh,numLengths)) {
      linkModeOrOffset = TSDictionaryList::GetWordStreamOffset(*(int *)(self + m_dictList),*(int *)(self + m_dictIndex),length);
      *(undefined4 *)(self + m_fileOffset) = linkModeOrOffset;
      numLengths = TSDictionaryList::GetNumLengths(*(int *)(self + m_dictList),*(int *)(self + m_dictIndex));
      if (length != CONCAT22(regHigh2,numLengths) + -1) {
        nextLengthOffset = TSDictionaryList::GetWordStreamOffset(*(int *)(self + m_dictList),*(int *)(self + m_dictIndex),length + 1);
        if (nextLengthOffset <= *(uint *)(self + m_fileOffset)) goto LAB_00411872;
      }
      opened = InputEngine::OpenFile(self);
      if (CONCAT31(regHigh3,opened) == 0) {
        CloseHandle(*(HANDLE *)(self + m_hFile));
        *(undefined4 *)(self + m_hFile) = 0xffffffff;
      }
    }
  }
LAB_00411872:
  memset((undefined4 *)(self + m_letters),0,2000);
  *(undefined1 *)(self + m_letters + *(int *)(self + m_length)) = 0xff;
  return *(int *)(self + m_hFile) != -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004118a0  InputEngine::NextWord   (828 bytes)   [analysis]
//   decodes the next word of the current length with no pattern test (the same Huffman walk as NextMatch); returns the word buffer, 0xff-terminated at the end of the length
int __cdecl InputEngine::NextWord(int self,int unused)

{
  uint *nextPtr;
  char *rawNext;
  int dict;
  int codeLen;
  char ch;
  bool ok;
  undefined3 regHigh;
  uint bit;
  undefined3 regHigh2;
  undefined3 regHigh3;
  int huffNodes;
  int symbol;
  int bitPos;
  uint bits;
  char *rawOut;
  char *lettersOut;
  uint *bitEnd;
  uint *bitPtr;
  
  bitPos = *(int *)(self + m_bitPos);
  bitPtr = *(uint **)(self + m_bitPtr);
  bitEnd = *(uint **)(self + m_bitEnd);
  dict = *(int *)(self + m_dict);
  huffNodes = dict + 4;
  if (bitPos < 0x20) {
    bits = *bitPtr >> ((byte)bitPos & 0x1f);
  }
  else {
    bits = 0;
  }
  do {
    lettersOut = (char *)(self + m_letters);
    rawOut = (char *)(self + m_rawWord);
LAB_00411907:
    symbol = *(int *)(dict + 0x1804 + (bits & 0xff) * 4);
    if (symbol < 0x100) {
      codeLen = *(int *)(huffNodes + symbol * 8);
      if (0x20 < codeLen + bitPos) {
LAB_00411944:
        nextPtr = bitPtr + 1;
        if (nextPtr < bitEnd) {
          bit = *nextPtr;
          symbol = *(int *)(dict + 0x1804 +
                          ((bits | bit << (0x20U - (char)bitPos & 0x1f)) & 0xff) * 4);
          bitPtr = nextPtr;
          if (symbol < 0x100) {
            bitPos = *(int *)(huffNodes + symbol * 8) + -0x20 + bitPos;
            bits = bit >> ((byte)bitPos & 0x1f);
            goto LAB_00411a38;
          }
          bitPos = bitPos + -0x18;
          bits = bit >> ((byte)bitPos & 0x1f);
        }
        else {
          symbol = 0x100;
        }
        goto joined_r0x004119a8;
      }
      bitPos = bitPos + codeLen;
      bits = bits >> ((byte)codeLen & 0x1f);
    }
    else {
      if (0x18 < bitPos) goto LAB_00411944;
      bitPos = bitPos + 8;
      bits = bits >> 8;
joined_r0x004119a8:
      for (; 0xff < symbol; symbol = *(int *)(huffNodes + symbol * 8 + bit * 4)) {
        if (0x1f < bitPos) {
          bitPtr = bitPtr + 1;
          if (bitEnd <= bitPtr) {
            ok = InputEngine::OpenFile(self);
            if (CONCAT31(regHigh,ok) == 0) {
              *(undefined1 *)(self + m_letters) = 0xff;
              *(undefined4 *)(self + m_bitPos) = 0;
              *(undefined4 *)(self + m_bitPtr) = *(undefined4 *)(self + m_bitEnd);
              goto LAB_00411bd5;
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
LAB_00411a38:
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
      goto LAB_00411907;
    }
    *rawNext = '\0';
    if ((char *)(self + m_letters) == lettersOut) {
      *lettersOut = -1;
      *(undefined4 *)(self + m_linkIndex) = 0;
      *(undefined4 *)(self + m_hasLinks) = 1;
      *(int *)(self + m_linkMode) = *(int *)(self + m_linkMode) + -1;
      *(int *)(self + m_bitPos) = bitPos;
      *(uint **)(self + m_bitPtr) = bitPtr;
      *(uint **)(self + m_bitEnd) = bitEnd;
      goto LAB_00411bd5;
    }
    if (*(int *)(self + m_linkMode) == 2) {
      if (0x1f < bitPos) {
        bitPtr = bitPtr + 1;
        if (bitEnd <= bitPtr) {
          ok = InputEngine::OpenFile(self);
          if (CONCAT31(regHigh2,ok) == 0) {
            *(undefined1 *)(self + m_letters) = 0xff;
            *(undefined4 *)(self + m_bitPos) = 0;
            *(undefined4 *)(self + m_bitPtr) = *(undefined4 *)(self + m_bitEnd);
            goto LAB_00411bd5;
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
  } while ((unused != 0) &&
          (ok = MatchEngine::MatchWord(unused,self + m_letters), CONCAT31(regHigh3,ok) == 0));
  *(int *)(self + m_bitPos) = bitPos;
  *(uint **)(self + m_bitPtr) = bitPtr;
  *(uint **)(self + m_bitEnd) = bitEnd;
LAB_00411bd5:
  return self + m_letters;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411bdc  InputEngine::NextMatch   (1058 bytes)   [notes+analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). Huffman-decodes words of the current length and tests each against the MatchEngineSet
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
LAB_00411c9e:
    symbol = *(int *)(dict + 0x1804 + (bits & 0xff) * 4);
    if (symbol < 0x100) {
      codeLen = *(int *)(huffNodes + symbol * 8);
      if (0x20 < codeLen + bitPos) {
LAB_00411cdb:
        nextPtr = bitPtr + 1;
        if (nextPtr < bitEnd) {
          bit = *nextPtr;
          symbol = *(int *)(dict + 0x1804 +
                          ((bits | bit << (0x20U - (char)bitPos & 0x1f)) & 0xff) * 4);
          bitPtr = nextPtr;
          if (symbol < 0x100) {
            bitPos = *(int *)(huffNodes + symbol * 8) + -0x20 + bitPos;
            bits = bit >> ((byte)bitPos & 0x1f);
            goto LAB_00411dcf;
          }
          bitPos = bitPos + -0x18;
          bits = bit >> ((byte)bitPos & 0x1f);
        }
        else {
          symbol = 0x100;
        }
        goto joined_r0x00411d3f;
      }
      bitPos = bitPos + codeLen;
      bits = bits >> ((byte)codeLen & 0x1f);
    }
    else {
      if (0x18 < bitPos) goto LAB_00411cdb;
      bitPos = bitPos + 8;
      bits = bits >> 8;
joined_r0x00411d3f:
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
LAB_00411dcf:
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
      goto LAB_00411c9e;
    }
    *rawNext = '\0';
    if ((char *)(self + m_letters) == lettersOut) {
      *lettersOut = -1;
      *(undefined4 *)(self + m_linkIndex) = 0;
      *(undefined4 *)(self + m_hasLinks) = 1;
      *(int *)(self + m_linkMode) = *(int *)(self + m_linkMode) + -1;
      *(int *)(self + m_bitPos) = bitPos;
      *(uint **)(self + m_bitPtr) = bitPtr;
      *(uint **)(self + m_bitEnd) = bitEnd;
      *(int *)(self + m_wordsScanned) = *(int *)(self + m_wordsScanned) + (2000 - budget);
      return (char *)(self + m_letters);
    }
    if (*(int *)(self + m_linkMode) == 2) {
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
LAB_00411fad:
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
      bit = MatchEngineSet::EvalLogic(2,self + m_letters,*(int *)(self + m_length),logicOps,engines);
    }
    else {
      ok = MatchEngine::MatchWord(singleEngine,self + m_letters);
      bit = CONCAT31(regHigh3,ok);
    }
    if ((bit != 0) || (budget = budget + -1, budget < 1)) goto LAB_00411fad;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00412000  MatchEngineSet::EvalLogic   (372 bytes, 2 ranges)   [notes+analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). Boolean VM over the logic bytecode; this is the 0x412000 address given in your notes
uint __cdecl MatchEngineSet::EvalLogic(int mode,int wordBuf,int length,byte *ops,int *engines)

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
        if (mode == 0) {
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
          if (((result != 0) && (mode == 2)) &&
             (matched = MatchEngine::MatchWord(engine,wordBuf), CONCAT31(regHigh,matched) == 0)) {
            result = 0;
          }
        }
      }
      if ((op & 8) != 0) {
        if (mode != 1) {
          result = (uint)(result == 0);
        }
        op = op & 0xf7;
      }
      if (((op == 1) && (result != 0)) || ((op == 2 && (result == 0)))) break;
      engines = nextEngine;
      if (op == 5) {
        stackTop = stackTop + -1;
        if (((*stackTop & 8) != 0) && (mode != 1)) {
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
    if (((*stackTop & 8) != 0) && (mode != 1)) {
      result = (uint)(result == 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041217c  InputEngine::OpenFile   (288 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040a218. CreateFileA + seek to the saved offset; on ERROR_TOO_MANY_OPEN_FILES closes another engine's handle from the global list and retries
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
        goto LAB_0041223a;
      }
      status = GetLastError();
      other = DAT_004ecac8;
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
LAB_0041223a:
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
// 0x0041229c  InputEngine::GetLinkGroupIndex   (29 bytes)   [notes+analysis]
//   returns link_group_index-1 (+0x4808) when the has_links flag (+0x4804) is set, else -1
int __cdecl InputEngine::GetLinkGroupIndex(int self)

{
  if (*(int *)(self + m_hasLinks) != 0) {
    return *(int *)(self + m_linkIndex) + -1;
  }
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004122bc  InputEngine::GetAnnotation   (37 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040a338. returns the text following the display word's NUL, or NULL when empty. The 0x4122bc address in your notes is this function in TEA.exe
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

// ----------------------------------------------------------------------------------------------------
// 0x004122e4  DestroyFileHistory   (77 bytes)   [analysis]
//   static destructor of the file history (10 strings)
//   file placement: inferred (address adjacency)
void __stdcall DestroyFileHistory(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ecb0c);
  if (g_fileHistoryInitialised != '\0') {
    _vector_delete_ldtc_(0x519858,0x10,10,1,(undefined*)std::string::_dtor);
    g_fileHistoryInitialised = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412334  std::string::string_412334   (87 bytes)   [analysis]
//   default constructor: data = the shared empty rep
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00412372) */
int __cdecl std::string::string_412334(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ecb14);
  *(undefined4 *)(self + 8) = 0;
  *(undefined **)(self + 8) = &g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041238c  GetFileHistory   (85 bytes)   [analysis]
//   the file history singleton, loaded from the registry on first use
//   file placement: inferred (address adjacency)
undefined * __cdecl GetFileHistory(int owner,int isCrossword)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ecb5c);
  if (g_fileHistoryInitialised == '\0') {
    FileHistory::FileHistory((int *)&g_fileHistory,owner,isCrossword);
    g_fileHistoryInitialised = g_fileHistoryInitialised + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &g_fileHistory;
}

} // namespace tea
