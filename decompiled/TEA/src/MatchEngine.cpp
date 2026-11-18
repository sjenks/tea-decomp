// TEA.exe — application module "MatchEngine"
// 39 functions, 0x00411264..0x00460050. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00411264  MatchEngine::~MatchEngine   (200 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as MatchEngine::_dtor
void __cdecl MatchEngine::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eca40);
  if (self == 0) goto LAB_0041131b;
  if (*(int *)(self + m_bcData) != 0) {
    if (*(int *)(*(int *)(self + m_bcData) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + m_bcData) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_004112fc;
    }
    operator_delete();
    *(undefined4 *)(self + m_bcData) = 0;
  }
LAB_004112fc:
  Pattern::_dtor(self,2);
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0041131b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411498  std::logic_error::vf1   (11 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::logic_error::vf1(int self)

{
  return *(undefined4 *)(self + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x004114a4  std::vector<TSDictionaryList::Dictionary *>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_TSDictionaryList_Dictionary_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_TSDictionaryList_Dictionary_ptr::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_ptr_40771c(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004114dc  std::vector<const MatchEngine *>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_const_MatchEngine_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_const_MatchEngine_ptr::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_ptr_410d88(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411514  std::vector<long>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_long::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_long::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_ptr_40957c(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411568  std::vector<std::string>::~vector   (54 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::vector_std_string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_std_string::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_string(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004115a0  MsgHookProc   (222 bytes, 2 ranges)   [analysis]
//   exported keyboard hook (@MsgHookProc$qqsiuil): F1, or Ctrl+Tab, in a child of a popup posts the registered help message to that popup; F1 in a menu posts it to the main window
//   file placement: inferred (address adjacency)
undefined4 __stdcall MsgHookProc(int code_,undefined4 wParam,undefined4 *msg)

{
  SHORT ctrlState;
  uint style;
  HWND hWnd2;
  HWND hWnd;
  
                    /* 0x115a0  2  @MsgHookProc$qqsiuil */
  if ((-1 < code_) && (msg != (undefined4 *)0x0)) {
    if (code_ == 0) {
      if ((msg[1] == 0x100) &&
         ((msg[2] == 0x70 || ((msg[2] == 9 && (ctrlState = GetKeyState(0x11), ctrlState < 0)))))) {
        hWnd = (HWND)0x0;
        hWnd2 = (HWND)*msg;
        while ((hWnd2 != (HWND)0x0 &&
               (style = GetWindowLongA(hWnd2,-0x10), hWnd = hWnd2, (style & 0x40000000) != 0))) {
          hWnd2 = (HWND)GetWindowLongA(hWnd2,-8);
        }
        if ((hWnd != (HWND)0x0) && (style = GetWindowLongA(hWnd,-0x10), (style & 0x80000000) != 0))
        {
          PostMessageA(hWnd,g_helpMessageId,msg[2],0);
          return 1;
        }
      }
    }
    else if (((code_ == 2) && (msg[1] == 0x100)) && (msg[2] == 0x70)) {
      PostMessageA(g_hWndMain,g_helpMessageId,2,0);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431458  MatchEngine::Emit   (25 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040a360. records the opcode just emitted (last opcode, opcode count) and returns it
undefined4 __cdecl MatchEngine::Emit(int self,undefined4 op)

{
  *(char *)(self + m_lastOp) = (char)op;
  *(int *)(self + m_opCount) = *(int *)(self + m_opCount) + 1;
  return op;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431474  MatchEngine::CompilePattern   (2751 bytes)   [notes+analysis (position-matched TEACON.exe)]
//   paired with TEACON.exe 0x0040a37c by position between identical neighbours; the bodies differ (2748 vs 2751 bytes), so treat the name as probable. compiles "[template][;anagram]" into 0xf9 <minLen> <extra> ... 0xfc; for an anagram part emits 0xf4 <numLetters> <minCount:4> then CompileAnagram's code; recursive through CompileTemplate for sub-patterns
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl MatchEngine::CompilePattern(int *self,int *cursor,int bc,int *outVarPos,int *outEndPos,int *outExtra)

{
  undefined4 op;
  undefined4 *strRep;
  undefined1 *opSlot;
  int prevRefs;
  undefined1 extraByte;
  int templateLen;
  undefined4 *sehChainHead;
  undefined *copyCtor;
  uint k;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  undefined1 exceptMsg2 [240];
  int *byteSrc;
  undefined4 *strRep2;
  int bytePos;
  int anagramLenBytes [2];
  int extraPos;
  int minLenPos;
  int templateVarPos2;
  int templateVarPos3;
  int templateVarPos4;
  int templateVarPos5;
  undefined4 *strRep3;
  int startPos2;
  uint eraseLen;
  undefined1 nul;
  uint available;
  undefined1 *unused2;
  undefined4 unused3;
  int *unused4;
  int *unused5;
  int *strRep4;
  int *newData2;
  int *unused6;
  uint unused7;
  undefined1 *unused8;
  int *newRep;
  int *unused9;
  uint len;
  int *strRep5;
  undefined1 *unused10;
  int *unused11;
  undefined4 unused12;
  uint *msgText;
  uint tailLen;
  undefined1 *unused13;
  undefined4 unused14;
  int *unused15;
  int *unused16;
  int *strRep6;
  int *unused17;
  int *unused18;
  uint unused19;
  undefined1 *unused20;
  int *newRep2;
  int *unused21;
  uint len2;
  int *strRep7;
  undefined1 *unused22;
  int *unused23;
  undefined4 unused24;
  uint *msgText2;
  uint headerEnd;
  undefined1 unused25;
  int numUsedLetters;
  int startPos;
  int anagramPos;
  int templateVarPos;
  int anagramExtra;
  int templateExtra;
  int anagramLen;
  char *p;
  char hasPrefix;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str3;
  undefined1 str2 [8];
  int *str4;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused26;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused27;
  
  __InitExceptBlockLDTC(0x4f2de4);
  hasPrefix = *(int *)(*(int *)(bc + 8) + -4) != 0;
  templateLen = 0;
  p = (char *)*cursor;
  anagramLen = 0;
  templateExtra = 0;
  anagramExtra = 0;
  templateVarPos = -1;
  anagramPos = 0;
  startPos = *(int *)(*(int *)(bc + 8) + -4);
  op = MatchEngine::Emit((int)self,0xf9);
  std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(char)op);
  std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,0x20);
  std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,0x20);
  if (((*p != ';') && (*p != ')')) &&
     (templateLen = MatchEngine::CompileTemplate((int)self,(int *)&p,bc,&templateVarPos,outEndPos,&templateExtra),
     templateLen == -1)) {
    *sehChainHead = sehPrevFrame;
    return -1;
  }
  if (*p != ';') goto LAB_00431bdb;
  p = p + 1;
  anagramPos = *(int *)(*(int *)(bc + 8) + -4);
  std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,0xf4);
  numUsedLetters = TSDictionaryList::GetNumUsedLetters(self[m_dictList / 4],self[m_dictIndex / 4]);
  unused25 = (undefined1)numUsedLetters;
  std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(undefined1)numUsedLetters);
  headerEnd = *(int *)(*(int *)(bc + 8) + -4) + 4;
  if ((*(int *)&g_stringNpos) - 0xeU < headerEnd) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    k = 1;
    copyCtor = &LAB_00408370;
    op = 0;
    ehContext = 0x14;
    msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00516d20);
    std::string::string_from_cstr((int)str2,msgText2);
    ehDtorCount = ehDtorCount + 2;
    lengthError[0] = &std::logic_error::vftable;
    unused24 = 0;
    unused27 = (int *)0x0;
    ehContext = 0x20;
    if (str4[-3] == -1 || str4[-3] + 1 < 0) {
      len2 = str4[-1];
      newRep2 = std::string::__getRep(newStr2,len2,len2);
      unused20 = newStr2;
      newData = newRep2 + 3;
      unused19 = len2;
      unused18 = str4;
      unused17 = newData;
      unused21 = newData;
      unused27 = newData;
      memcpy(newData,str4,len2);
    }
    else {
      unused22 = newStr2;
      unused23 = str4;
      unused27 = str4;
      strRep7 = str4 + -3;
      if (strRep7 != &g_nullStringRep) {
        *strRep7 = *strRep7 + 1;
      }
    }
    ehContext = 0x14;
    lengthError[0] = &std::length_error::vftable;
    ehDtorCount = ehDtorCount + 2;
    if (str4 != (int *)0x0) {
      if (str4[-3] != -1) {
        strRep6 = str4 + -3;
        if (strRep6 == &g_nullStringRep) {
          prevRefs = 1;
        }
        else if (strRep6 == &g_nullStringRep) {
          prevRefs = 1;
        }
        else {
          *strRep6 = *strRep6 + -1;
          prevRefs = *strRep6 + 1;
        }
        if (prevRefs != 0) goto LAB_00431854;
      }
      unused16 = str4 + -3;
      unused15 = str4 + -3;
      operator_delete();
      unused14 = 0;
      unused13 = str2;
      str4 = (int *)0x0;
      unused = 0;
    }
LAB_00431854:
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,op,copyCtor,k,throwFlags,throwFile,throwLine);
  }
  if (headerEnd < *(uint *)(*(int *)(bc + 8) + -4)) {
    tailLen = *(int *)(*(int *)(bc + 8) + -4) - headerEnd;
    if (*(uint *)(*(int *)(bc + 8) + -4) < headerEnd) {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      k = 1;
      copyCtor = &LAB_004084c8;
      op = 0;
      ehContext = 0x44;
      msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00516d2c);
      std::string::string_from_cstr((int)str,msgText);
      ehDtorCount = ehDtorCount + 2;
      outOfRange[0] = &std::logic_error::vftable;
      unused12 = 0;
      unused26 = (int *)0x0;
      ehContext = 0x50;
      if (str3[-3] == -1 || str3[-3] + 1 < 0) {
        len = str3[-1];
        newRep = std::string::__getRep(newStr,len,len);
        unused8 = newStr;
        newData2 = newRep + 3;
        unused7 = len;
        unused6 = str3;
        unused9 = newData2;
        unused26 = newData2;
        memcpy(newData2,str3,len);
      }
      else {
        unused10 = newStr;
        unused11 = str3;
        unused26 = str3;
        strRep5 = str3 + -3;
        if (strRep5 != &g_nullStringRep) {
          *strRep5 = *strRep5 + 1;
        }
      }
      ehContext = 0x44;
      outOfRange[0] = &std::out_of_range::vftable;
      ehDtorCount = ehDtorCount + 2;
      if (str3 != (int *)0x0) {
        if (str3[-3] != -1) {
          strRep4 = str3 + -3;
          if (strRep4 == &g_nullStringRep) {
            prevRefs = 1;
          }
          else if (strRep4 == &g_nullStringRep) {
            prevRefs = 1;
          }
          else {
            *strRep4 = *strRep4 + -1;
            prevRefs = *strRep4 + 1;
          }
          if (prevRefs != 0) goto LAB_00431aeb;
        }
        unused5 = str3 + -3;
        unused4 = str3 + -3;
        operator_delete();
        unused3 = 0;
        unused2 = str;
        str3 = (int *)0x0;
      }
LAB_00431aeb:
      ehContext = 8;
      _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,op,copyCtor,k,throwFlags,throwFile,throwLine);
    }
    available = *(int *)(*(int *)(bc + 8) + -4) - headerEnd;
    nul = 0;
    eraseLen = available;
    if (tailLen < available) {
      eraseLen = tailLen;
    }
    std::string::replace(bc,headerEnd,eraseLen,(uint)&nul,0,0,0);
  }
  else {
    std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,
                 headerEnd - *(int *)(*(int *)(bc + 8) + -4),0);
  }
  strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
  if (strRep != &g_nullStringRep) {
    *strRep = 0;
  }
  anagramLen = MatchEngine::CompileAnagram(self,(undefined4*)&p,bc,&anagramExtra,templateExtra);
  if (anagramLen == -1) {
    *sehChainHead = sehPrevFrame;
    return -1;
  }
  if (hasPrefix != '\0') {
    *outEndPos = *(int *)(*(int *)(bc + 8) + -4) + 1;
  }
LAB_00431bdb:
  if (((templateLen == 0) && (templateExtra == 0)) && (templateExtra = anagramExtra, templateLen = anagramLen, 0 < anagramExtra)) {
    *outVarPos = startPos;
  }
  if (templateLen < 0x81) {
    if (0 < templateExtra) {
      if ((anagramExtra < 15000) && (templateLen < anagramLen + anagramExtra)) {
        templateExtra = (anagramLen + anagramExtra) - templateLen;
      }
      if (-1 < templateVarPos) {
        *outVarPos = startPos;
      }
      startPos2 = startPos;
      if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
        std::string::__unshare(bc);
      }
      strRep3 = (undefined4 *)(*(int *)(bc + 8) + -0xc);
      if (strRep3 != &g_nullStringRep) {
        *strRep3 = 0xffffffff;
      }
      opSlot = (undefined1 *)(*(int *)(bc + 8) + startPos2);
      op = MatchEngine::Emit((int)self,0xfa);
      *opSlot = (char)op;
      *outExtra = *outExtra + templateExtra;
    }
    if (-1 < templateVarPos) {
      templateVarPos5 = templateVarPos;
      if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
        std::string::__unshare(bc);
      }
      strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
      if (strRep != &g_nullStringRep) {
        *strRep = 0xffffffff;
      }
      if (*(char *)(*(int *)(bc + 8) + templateVarPos5) == -0xe) {
        templateVarPos4 = templateVarPos;
        if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
          std::string::__unshare(bc);
        }
        strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
        if (strRep != &g_nullStringRep) {
          *strRep = 0xffffffff;
        }
        *(undefined1 *)(*(int *)(bc + 8) + templateVarPos4) = 0xf3;
      }
      else {
        templateVarPos3 = templateVarPos;
        if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
          std::string::__unshare(bc);
        }
        strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
        if (strRep != &g_nullStringRep) {
          *strRep = 0xffffffff;
        }
        if (*(char *)(*(int *)(bc + 8) + templateVarPos3) == -6) {
          templateVarPos2 = templateVarPos;
          if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
            std::string::__unshare(bc);
          }
          strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
          if (strRep != &g_nullStringRep) {
            *strRep = 0xffffffff;
          }
          *(undefined1 *)(*(int *)(bc + 8) + templateVarPos2) = 0xfb;
        }
      }
    }
    minLenPos = startPos + 1;
    if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
      std::string::__unshare(bc);
    }
    strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = 0xffffffff;
    }
    *(char *)(*(int *)(bc + 8) + minLenPos) = (char)templateLen;
    extraPos = startPos + 2;
    if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
      std::string::__unshare(bc);
    }
    strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = 0xffffffff;
    }
    if (templateExtra < 0x65) {
      extraByte = (undefined1)templateExtra;
    }
    else {
      extraByte = 0x65;
    }
    *(undefined1 *)(*(int *)(bc + 8) + extraPos) = extraByte;
    if (anagramPos != 0) {
      anagramLenBytes[0] = anagramLen;
      k = 0;
      byteSrc = anagramLenBytes;
      do {
        bytePos = anagramPos + k + 2;
        if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
          std::string::__unshare(bc);
        }
        strRep2 = (undefined4 *)(*(int *)(bc + 8) + -0xc);
        if (strRep2 != &g_nullStringRep) {
          *strRep2 = 0xffffffff;
        }
        *(char *)(*(int *)(bc + 8) + bytePos) = (char)*byteSrc;
        k = k + 1;
        byteSrc = (int *)((int)byteSrc + 1);
      } while (k < 4);
    }
    std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,0xfc);
    *cursor = (int)p;
    *sehChainHead = sehPrevFrame;
  }
  else {
    self[m_status / 4] = 4;
    templateLen = -1;
    *sehChainHead = sehPrevFrame;
  }
  return templateLen;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431f34  MatchEngine::CompileTemplate   (2223 bytes, 2 ranges)   [notes+analysis (position-matched TEACON.exe)]
//   paired with TEACON.exe 0x0040ae38 by position between identical neighbours; the bodies differ (2202 vs 2223 bytes), so treat the name as probable. compiles the template part: letters and '.'/'?' into a 0xf0 group, choice lists [..] / [^..] and digit variables into a 0xf1 group, punctuation 0xfe/0xff, '*' as 0xf2 wildcard, (..) sub-patterns via CompilePattern; returns the minimum letter count or -1 with the status set
int __cdecl MatchEngine::CompileTemplate(int self,int *cursorRef,int bc,int *outVarPos,int *outEndPos,undefined4 *outExtra)

{
  byte *next;
  byte ch;
  bool escaped;
  undefined1 groupCountByte;
  undefined4 op;
  char *terminator;
  int countPos;
  undefined1 *opSlot;
  int countPos2;
  int letterClass;
  undefined4 *strRep;
  int groupCount;
  undefined1 classByte;
  char listStart;
  int subExtra;
  int minLen;
  int groupPos;
  byte *p;
  
  p = (byte *)*cursorRef;
  groupPos = 0;
  minLen = 0;
  groupCount = 0;
  do {
    while( true ) {
      letterClass = groupPos;
      ch = *p;
      if ((ch == 0x3b) || (ch == 0x29)) goto LAB_0043276a;
      if (ch == 0x5d) {
        *(undefined4 *)(self + m_status) = 9;
        return -1;
      }
      if (*p == 0x5e) {
        *(undefined4 *)(self + m_status) = 0xc;
        return -1;
      }
      if (*p == 0) {
        *(undefined4 *)(self + m_status) = 7;
        return -1;
      }
      groupCountByte = (undefined1)groupCount;
      if (*p == 0x28) break;
      if (*p == 0x2a) {
        *outExtra = 15000;
        if (groupPos != 0) {
          letterClass = groupPos + 1;
          if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
            std::string::__unshare(bc);
          }
          strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
          if (strRep != &g_nullStringRep) {
            *strRep = 0xffffffff;
          }
          *(undefined1 *)(*(int *)(bc + 8) + letterClass) = groupCountByte;
          minLen = minLen + groupCount;
        }
        p = p + 1;
        groupPos = *(int *)(*(int *)(bc + 8) + -4);
        *outVarPos = groupPos;
        op = MatchEngine::Emit(self,0xf2);
        std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(char)op);
        std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,0x20);
        *outEndPos = *(int *)(*(int *)(bc + 8) + -4);
        groupCount = MatchEngine::CompileTemplate(self,(int *)&p,bc,outVarPos,outEndPos,outExtra);
        if (groupCount == -1) {
          return -1;
        }
        goto LAB_0043276a;
      }
      if (*p == 0x5b) {
        if (groupPos == 0) {
          groupPos = *(int *)(*(int *)(bc + 8) + -4);
          op = MatchEngine::Emit(self,0xf1);
          std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(char)op);
          std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,0x20);
          groupCount = 0;
        }
        else {
          if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
            std::string::__unshare(bc);
          }
          strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
          if (strRep != &g_nullStringRep) {
            *strRep = 0xffffffff;
          }
          opSlot = (undefined1 *)(*(int *)(bc + 8) + letterClass);
          op = MatchEngine::Emit(self,0xf1);
          *opSlot = (char)op;
        }
        if (p[1] == 0x5e) {
          p = p + 1;
          std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(byte)groupCount | 0xc0);
        }
        else {
          std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(byte)groupCount | 0x40);
        }
        if (p[1] == 0x5d) {
          *(undefined4 *)(self + m_status) = 0xe;
          return -1;
        }
        letterClass = *(int *)(*(int *)(bc + 8) + -4);
        std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,0x20);
        while( true ) {
          p = p + 1;
          terminator = thunk_strchr(PTR_s_ptr_004f2d24,*p);
          if (terminator != (char *)0x0) break;
          if ((*p == 0x5c) && (p[1] != 0)) {
            p = p + 1;
          }
          countPos = *(int *)(*(int *)(*(int *)(*(int *)(self + m_dictList) + 0xc) +
                                   *(int *)(self + m_dictIndex) * 4) + 8 + (uint)*p * 8);
          if (countPos == 0xff) break;
          std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(char)countPos);
        }
        if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
          std::string::__unshare(bc);
        }
        strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
        if (strRep != &g_nullStringRep) {
          *strRep = 0xffffffff;
        }
        listStart = (char)letterClass;
        *(char *)(*(int *)(bc + 8) + letterClass) =
             *(char *)(*(int *)(bc + 8) + -4) - (listStart + '\x01');
        if (*p != 0x5d) {
          if ((*p == 0x29) && (p[1] == 0)) {
            *(undefined4 *)(self + m_status) = 5;
          }
          else {
            *(undefined4 *)(self + m_status) = 2;
          }
          return -1;
        }
      }
      else if ((*p < 0x30) || (0x39 < *p)) {
        escaped = false;
        if (*p == 0x5c) {
          escaped = true;
          next = p + 2;
          p = p + 1;
          if (*next == 0) {
            *(undefined4 *)(self + m_status) = 0xd;
            return -1;
          }
        }
        letterClass = *(int *)(*(int *)(*(int *)(*(int *)(self + m_dictList) + 0xc) +
                                  *(int *)(self + m_dictIndex) * 4) + 8 + (uint)*p * 8);
        if (((letterClass == 0xff) && ((escaped || ((*p != 0x2e && (*p != 0x3f)))))) ||
           ((letterClass != 0xff && (escaped)))) {
          if (groupPos != 0) {
            countPos2 = groupPos + 1;
            countPos = *(int *)(*(int *)(bc + 8) + -0xc);
            if (countPos != 0 && 0 < countPos + 1) {
              std::string::__unshare(bc);
            }
            strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
            if (strRep != &g_nullStringRep) {
              *strRep = 0xffffffff;
            }
            *(undefined1 *)(*(int *)(bc + 8) + countPos2) = groupCountByte;
            minLen = minLen + groupCount;
            groupPos = 0;
          }
          if (letterClass == 0xff) {
            op = MatchEngine::Emit(self,0xff);
            std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(char)op);
            std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,*p);
            *(undefined1 *)(self + 0x1028 + (uint)*p) = 0xff;
          }
          else {
            op = MatchEngine::Emit(self,0xfe);
            std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(char)op);
            std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,*p);
            *(undefined1 *)(self + 0x1028 + (uint)*p) = 0xfe;
            p = p + -1;
          }
          groupCount = -1;
        }
        else {
          if (groupPos == 0) {
            groupPos = *(int *)(*(int *)(bc + 8) + -4);
            op = MatchEngine::Emit(self,0xf0);
            std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(char)op);
            std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,0x20);
            groupCount = 0;
          }
          if ((letterClass != 0xff) && ((escaped || ((*p != 0x2e && (*p != 0x3f)))))) {
            std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(char)groupCount);
            classByte = (undefined1)letterClass;
            std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,classByte);
          }
        }
      }
      else {
        if (groupPos == 0) {
          groupPos = *(int *)(*(int *)(bc + 8) + -4);
          op = MatchEngine::Emit(self,0xf1);
          std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(char)op);
          std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,0x20);
          groupCount = 0;
        }
        else {
          if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
            std::string::__unshare(bc);
          }
          strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
          if (strRep != &g_nullStringRep) {
            *strRep = 0xffffffff;
          }
          opSlot = (undefined1 *)(*(int *)(bc + 8) + letterClass);
          op = MatchEngine::Emit(self,0xf1);
          *opSlot = (char)op;
        }
        std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(byte)groupCount | 0x80);
        std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,*p - 0x30);
      }
      letterClass = *(int *)(*(int *)(bc + 8) + -4);
      if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
        std::string::__unshare(bc);
      }
      strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
      if (strRep != &g_nullStringRep) {
        *strRep = 0xffffffff;
      }
      if (*(char *)(*(int *)(bc + 8) + letterClass + -2) == -1) {
        if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
          std::string::__unshare(bc);
        }
        strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
        if (strRep != &g_nullStringRep) {
          *strRep = 0xffffffff;
        }
        if (*(char *)(*(int *)(bc + 8) + letterClass + -1) != ' ') goto LAB_0043274d;
      }
      else {
LAB_0043274d:
        *outEndPos = letterClass;
      }
      groupCount = groupCount + 1;
      p = p + 1;
    }
    if (groupPos != 0) {
      countPos = groupPos + 1;
      letterClass = *(int *)(*(int *)(bc + 8) + -0xc);
      if (letterClass != 0 && 0 < letterClass + 1) {
        std::string::__unshare(bc);
      }
      strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
      if (strRep != &g_nullStringRep) {
        *strRep = 0xffffffff;
      }
      *(undefined1 *)(*(int *)(bc + 8) + countPos) = groupCountByte;
      minLen = minLen + groupCount;
      groupPos = 0;
    }
    p = p + 1;
    subExtra = 0;
    groupCount = MatchEngine::CompilePattern((int *)self,(int *)&p,bc,outVarPos,outEndPos,&subExtra);
    if (groupCount == -1) {
      return -1;
    }
    minLen = minLen + groupCount;
    p = p + 1;
  } while (subExtra < 1);
  *outExtra = *outExtra + subExtra;
  groupCount = MatchEngine::CompileTemplate(self,(int *)&p,bc,outVarPos,outEndPos,outExtra);
  if (groupCount == -1) {
    minLen = -1;
  }
  else {
    minLen = minLen + groupCount;
LAB_0043276a:
    if (groupPos != 0) {
      letterClass = groupPos + 1;
      if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
        std::string::__unshare(bc);
      }
      strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
      if (strRep != &g_nullStringRep) {
        *strRep = 0xffffffff;
      }
      *(char *)(*(int *)(bc + 8) + letterClass) = (char)groupCount;
      minLen = minLen + groupCount;
    }
    std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,0xfc);
    *cursorRef = (int)p;
  }
  return minLen;
}

// ----------------------------------------------------------------------------------------------------
// 0x004327e8  MatchEngine::CompileAnagram   (3500 bytes)   [notes+analysis (position-matched TEACON.exe)]
//   paired with TEACON.exe 0x0040b6d8 by position between identical neighbours; the bodies differ (3470 vs 3500 bytes), so treat the name as probable. compiles the anagram part in stages: sub-patterns (0xfa count pool-index), choice lists (0xf7 count pool-index), letter variables (0xf8 + ten counts), then named letters as singles (0xf5) or multiples (0xf6); returns the letter count or -1 with the status set
/* WARNING: Removing unreachable block (ram,0x004328f8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl MatchEngine::CompileAnagram(int *self,undefined4 *cursorRef,int bc,undefined4 *outExtra,int templateExtra)

{
  byte *next;
  byte ch;
  bool escaped;
  undefined4 op;
  int count;
  undefined1 *opSlot;
  int n;
  int *countAt;
  char *q;
  undefined4 *sehChainHead;
  int counts [251];
  char varCountsByDigit [20];
  undefined4 *strRep;
  int subPatternPos2;
  undefined1 unused;
  undefined1 unused2;
  undefined1 singlesOp;
  undefined1 unused3;
  undefined1 countByte;
  undefined1 multiplesOp;
  char varCount;
  undefined1 varsOp;
  int letterClass;
  int unused4;
  byte unused5;
  char varCounts [16];
  undefined1 *unused6;
  undefined4 unused7;
  int unused8;
  int unused9;
  int unused10;
  int unused11;
  int unused12;
  undefined4 *strRep2;
  int classPos;
  int choiceClass;
  uint allowed;
  undefined1 unused13;
  undefined1 countByte2;
  undefined1 subOp;
  char subFirstOp;
  int subPattern;
  undefined1 *unused14;
  undefined4 unused15;
  undefined *unused16;
  undefined *unused17;
  int *strRep3;
  undefined *unused18;
  undefined *unused19;
  int *strRep4;
  int poolIndex;
  undefined *unused20;
  undefined *unused21;
  int *strRep5;
  int subLen;
  int outEndPos;
  int outVarPos;
  undefined1 *unused22;
  undefined *unused23;
  undefined4 unused24;
  int distinctLetters;
  int i;
  int letterCount;
  int subPatternPos;
  byte *p;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 choiceSet [8];
  int choiceSetData;
  undefined1 subBc [8];
  undefined *subBcData;
  
  __InitExceptBlockLDTC(0x4f2e98);
  countAt = counts;
  p = (byte *)*cursorRef;
  subPatternPos = -1;
  letterCount = 0;
  i = 0;
  do {
    *countAt = 0;
    i = i + 1;
    countAt = countAt + 1;
  } while (i < 0x100);
  for (; *p != 0x29; p = p + 1) {
    if (*p == 0x5c) {
      next = p + 2;
      p = p + 1;
      if (*next == 0) {
        self[m_status / 4] = 0xd;
        *sehChainHead = sehPrevFrame;
        return -1;
      }
    }
    else {
      if (*p == 0x3b) {
        self[m_status / 4] = 6;
        *sehChainHead = sehPrevFrame;
        return -1;
      }
      if (*p == 0) {
        self[m_status / 4] = 7;
        *sehChainHead = sehPrevFrame;
        return -1;
      }
      if (*p == 0x28) {
        unused24 = 0;
        unused22 = subBc;
        unused23 = &g_emptyStringData;
        subBcData = &g_emptyStringData;
        ehDtorCount = ehDtorCount + 1;
        ehContext = 0x20;
        p = p + 1;
        subLen = MatchEngine::CompilePattern(self,(int *)&p,(int)subBc,&outVarPos,&outEndPos,outExtra);
        if (subLen == -1) {
          n = -1;
          ehDtorCount = ehDtorCount + -1;
          if (subBcData != (undefined *)0x0) {
            if (*(int *)(subBcData + -0xc) != -1) {
              strRep5 = (int *)(subBcData + -0xc);
              if (strRep5 == &g_nullStringRep) {
                count = 1;
              }
              else if (strRep5 == &g_nullStringRep) {
                count = 1;
              }
              else {
                *strRep5 = *strRep5 + -1;
                count = *strRep5 + 1;
              }
              if (count != 0) goto LAB_004329c5;
            }
            unused21 = subBcData + -0xc;
            unused20 = subBcData + -0xc;
            operator_delete();
          }
LAB_004329c5:
          *sehChainHead = sehPrevFrame;
          return n;
        }
        poolIndex = Pattern::Add(self,(int)subBc);
        if (poolIndex < 0) {
          self[m_status / 4] = 3;
          n = -1;
          ehDtorCount = ehDtorCount + -1;
          if (subBcData != (undefined *)0x0) {
            if (*(int *)(subBcData + -0xc) != -1) {
              strRep4 = (int *)(subBcData + -0xc);
              if (strRep4 == &g_nullStringRep) {
                count = 1;
              }
              else if (strRep4 == &g_nullStringRep) {
                count = 1;
              }
              else {
                *strRep4 = *strRep4 + -1;
                count = *strRep4 + 1;
              }
              if (count != 0) goto LAB_00432aad;
            }
            unused19 = subBcData + -0xc;
            unused18 = subBcData + -0xc;
            operator_delete();
          }
LAB_00432aad:
          *sehChainHead = sehPrevFrame;
          return n;
        }
        counts[poolIndex] = counts[poolIndex] + 1;
        letterCount = letterCount + subLen;
        ehDtorCount = ehDtorCount + -1;
        if (subBcData != (undefined *)0x0) {
          if (*(int *)(subBcData + -0xc) != -1) {
            strRep3 = (int *)(subBcData + -0xc);
            if (strRep3 == &g_nullStringRep) {
              n = 1;
            }
            else if (strRep3 == &g_nullStringRep) {
              n = 1;
            }
            else {
              *strRep3 = *strRep3 + -1;
              n = *strRep3 + 1;
            }
            if (n != 0) goto LAB_00432b7f;
          }
          unused17 = subBcData + -0xc;
          unused16 = subBcData + -0xc;
          operator_delete();
          unused15 = 0;
          subBcData = (undefined *)0x0;
          unused14 = subBc;
        }
LAB_00432b7f:
        ehContext = 0;
      }
    }
  }
  countAt = counts;
  i = 0;
  do {
    if (0 < *countAt) {
      subPattern = Pattern::At((int)self,(byte)i);
      subFirstOp = **(char **)(subPattern + 8);
      if (subFirstOp == -6) {
        subPatternPos = *(int *)(*(int *)(bc + 8) + -4);
      }
      op = MatchEngine::Emit((int)self,0xfa);
      subOp = (undefined1)op;
      std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,subOp);
      countByte2 = (undefined1)*countAt;
      std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,countByte2);
      unused13 = (byte)i;
      std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(byte)i);
    }
    *countAt = 0;
    i = i + 1;
    countAt = countAt + 1;
  } while (i < 0x100);
  for (p = (byte *)*cursorRef; (ch = *p, ch != 0 && (ch != 0x29));
      p = p + 1) {
    if (ch == 0x5c) {
      p = p + 1;
    }
    else if (*p == 0x28) {
      n = 1;
      do {
        next = p + 1;
        if ((*next == 0x5c) && (p[2] != 0)) {
          next = p + 3;
        }
        p = next;
        ch = *p;
        if (ch != 0) {
          if (ch == 0x28) {
            n = n + 1;
          }
          else if (ch == 0x29) {
            n = n + -1;
          }
        }
      } while (0 < n);
    }
    else {
      if (*p == 0x5d) {
        self[m_status / 4] = 9;
        *sehChainHead = sehPrevFrame;
        return -1;
      }
      if (*p == 0x5b) {
        next = p + 1;
        if (*next == 0x5e) {
          p = p + 1;
        }
        allowed = (uint)(*next != 0x5e);
        if (p[1] == 0x5d) {
          self[m_status / 4] = 0xe;
          *sehChainHead = sehPrevFrame;
          return -1;
        }
        ehContext = 0x50;
        choiceSetData = 0;
        std::string::string_fill((int)choiceSet,0x100);
        ehDtorCount = ehDtorCount + 1;
        ehContext = 0x68;
        while( true ) {
          p = p + 1;
          q = thunk_strchr(PTR_s_ptr_004f2d24,*p);
          if (q != (char *)0x0) break;
          if ((*p == 0x5c) && (p[1] != 0)) {
            p = p + 1;
          }
          choiceClass = *(int *)(*(int *)(*(int *)(self[m_dictList / 4] + 0xc) + self[m_dictIndex / 4] * 4) + 8 +
                             (uint)*p * 8);
          ehContext = 0x68;
          if (choiceClass == 0xff) break;
          classPos = choiceClass;
          if (1 < *(int *)(choiceSetData + -0xc) + 1) {
            std::string::__unshare((int)choiceSet);
          }
          strRep2 = (undefined4 *)(choiceSetData + -0xc);
          if (strRep2 != &g_nullStringRep) {
            *strRep2 = 0xffffffff;
          }
          *(undefined1 *)(choiceSetData + classPos) = (undefined1)allowed;
        }
        n = Pattern::Add(self,(int)choiceSet);
        if (n < 0) {
          self[m_status / 4] = 3;
          n = -1;
          ehDtorCount = ehDtorCount + -1;
          if (choiceSetData != 0) {
            if (*(int *)(choiceSetData + -0xc) != -1) {
              countAt = (int *)(choiceSetData + -0xc);
              if (countAt == &g_nullStringRep) {
                count = 1;
              }
              else if (countAt == &g_nullStringRep) {
                count = 1;
              }
              else {
                *countAt = *countAt + -1;
                count = *countAt + 1;
              }
              if (count != 0) goto LAB_00432eee;
            }
            unused12 = choiceSetData + -0xc;
            unused11 = choiceSetData + -0xc;
            operator_delete();
          }
LAB_00432eee:
          *sehChainHead = sehPrevFrame;
          return n;
        }
        counts[n] = counts[n] + 1;
        if (*p != 0x5d) {
          if ((*p == 0x29) && (p[1] == 0)) {
            self[m_status / 4] = 5;
          }
          else {
            self[m_status / 4] = 2;
          }
          n = -1;
          ehDtorCount = ehDtorCount + -1;
          if (choiceSetData != 0) {
            if (*(int *)(choiceSetData + -0xc) != -1) {
              countAt = (int *)(choiceSetData + -0xc);
              if (countAt == &g_nullStringRep) {
                count = 1;
              }
              else if (countAt == &g_nullStringRep) {
                count = 1;
              }
              else {
                *countAt = *countAt + -1;
                count = *countAt + 1;
              }
              if (count != 0) goto LAB_00432fc2;
            }
            unused10 = choiceSetData + -0xc;
            operator_delete();
          }
LAB_00432fc2:
          *sehChainHead = sehPrevFrame;
          return n;
        }
        letterCount = letterCount + 1;
        ehDtorCount = ehDtorCount + -1;
        if (choiceSetData != 0) {
          if (*(int *)(choiceSetData + -0xc) != -1) {
            countAt = (int *)(choiceSetData + -0xc);
            if (countAt == &g_nullStringRep) {
              n = 1;
            }
            else if (countAt == &g_nullStringRep) {
              n = 1;
            }
            else {
              *countAt = *countAt + -1;
              n = *countAt + 1;
            }
            if (n != 0) goto LAB_0043306e;
          }
          unused9 = choiceSetData + -0xc;
          unused8 = choiceSetData + -0xc;
          operator_delete();
          unused7 = 0;
          choiceSetData = 0;
          unused6 = choiceSet;
        }
LAB_0043306e:
        ehContext = 0;
      }
    }
  }
  countAt = counts;
  i = 0;
  do {
    if (0 < *countAt) {
      op = MatchEngine::Emit((int)self,0xf7);
      varCounts[0xf] = (char)op;
      std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,varCounts[0xf]);
      varCounts[0xe] = (char)*countAt;
      std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,varCounts[0xe]);
      varCounts[0xd] = (byte)i;
      std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(byte)i);
    }
    *countAt = 0;
    i = i + 1;
    countAt = countAt + 1;
  } while (i < 0x100);
  q = varCounts;
  p = (byte *)*cursorRef;
  i = 0;
  do {
    *q = '\0';
    i = i + 1;
    q = q + 1;
  } while (i < 10);
  for (; (ch = *p, ch != 0 && (ch != 0x29)); p = p + 1) {
    if (ch == 0x28) {
      n = 1;
      do {
        next = p + 1;
        if ((*next == 0x5c) && (p[2] != 0)) {
          next = p + 3;
        }
        p = next;
        ch = *p;
        if (ch != 0) {
          if (ch == 0x28) {
            n = n + 1;
          }
          else if (ch == 0x29) {
            n = n + -1;
          }
        }
        next = p;
      } while (0 < n);
    }
    else {
      next = p;
      if (*p == 0x5b) {
        while (p = next, next = p + 1, *next != 0x5d) {
          if ((*next == 0x5c) && (p[2] != 0)) {
            next = p + 2;
          }
        }
      }
      else if (*p == 0x2a) {
        subPatternPos = -1;
        *outExtra = 15000;
      }
      else {
        ch = *p;
        if ((ch < 0x30) || (0x39 < ch)) {
          if (ch != 0x20) {
            escaped = false;
            if ((*p == 0x5c) && (p[1] != 0)) {
              escaped = true;
              p = p + 1;
            }
            unused5 = *p;
            unused4 = self[m_dictIndex / 4];
            letterClass = *(int *)(*(int *)(*(int *)(self[m_dictList / 4] + 0xc) + self[m_dictIndex / 4] * 4) + 8 +
                                (uint)*p * 8);
            if ((letterClass == 0xff) && ((escaped || ((*p != 0x2e && (*p != 0x3f)))))) {
              self[m_status / 4] = 0xb;
              *sehChainHead = sehPrevFrame;
              return -1;
            }
            if ((letterClass == 0xff) || ((!escaped && ((*p == 0x2e || (*p == 0x3f)))))) {
              MatchEngine::Emit((int)self,0xf2);
            }
            else {
              counts[letterClass] = counts[letterClass] + 1;
            }
            letterCount = letterCount + 1;
            next = p;
          }
        }
        else {
          varCountsByDigit[ch] = varCountsByDigit[ch] + '\x01';
          letterCount = letterCount + 1;
          next = p;
        }
      }
    }
    p = next;
  }
  q = varCounts;
  i = 0;
  do {
    if (*q != '\0') break;
    i = i + 1;
    q = q + 1;
  } while (i < 10);
  if (i < 10) {
    op = MatchEngine::Emit((int)self,0xf8);
    varsOp = (undefined1)op;
    std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,varsOp);
    i = 0;
    q = varCounts;
    do {
      varCount = *q;
      std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,varCount);
      i = i + 1;
      q = q + 1;
    } while (i < 10);
  }
  n = 0;
  distinctLetters = 0;
  i = 0;
  countAt = counts;
  do {
    count = *countAt;
    if (0 < count) {
      distinctLetters = distinctLetters + 1;
    }
    if (n < count) {
      n = count;
    }
    i = i + 1;
    countAt = countAt + 1;
  } while (i < 0x100);
  if (n < 2) {
    if (n == 1) {
      op = MatchEngine::Emit((int)self,0xf5);
      singlesOp = (undefined1)op;
      std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,singlesOp);
      unused2 = (undefined1)distinctLetters;
      std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(undefined1)distinctLetters);
      i = 0;
      countAt = counts;
      do {
        if (0 < *countAt) {
          unused = (byte)i;
          std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(byte)i);
        }
        i = i + 1;
        countAt = countAt + 1;
      } while (i < 0x100);
    }
  }
  else {
    op = MatchEngine::Emit((int)self,0xf6);
    multiplesOp = (undefined1)op;
    std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,multiplesOp);
    i = 0;
    countAt = counts;
    do {
      if (0 < *countAt) {
        countByte = (undefined1)*countAt;
        std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,countByte);
        unused3 = (byte)i;
        std::string::replace_fill(bc,*(uint *)(*(int *)(bc + 8) + -4),0,1,(byte)i);
      }
      i = i + 1;
      countAt = countAt + 1;
    } while (i < 0x100);
  }
  *cursorRef = p;
  if ((-1 < subPatternPos) && (templateExtra == 0)) {
    subPatternPos2 = subPatternPos;
    if (1 < *(int *)(*(int *)(bc + 8) + -0xc) + 1) {
      std::string::__unshare(bc);
    }
    strRep = (undefined4 *)(*(int *)(bc + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = 0xffffffff;
    }
    opSlot = (undefined1 *)(*(int *)(bc + 8) + subPatternPos2);
    op = MatchEngine::Emit((int)self,0xfb);
    *opSlot = (char)op;
  }
  *sehChainHead = sehPrevFrame;
  return letterCount;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433594  MatchEngine::Compile   (4431 bytes)   [notes+analysis (position-matched TEACON.exe)]
//   paired with TEACON.exe 0x0040c468 by position between identical neighbours; the bodies differ (4431 vs 4431 bytes), so treat the name as probable. compiles one leaf pattern: appends ')' and runs CompilePattern, records min/max length, removes trailing ' ' punctuation pairs, picks the matcher (MatchFixedTemplate / MatchDistinctAnagram / MatchMultiAnagram when the code is a single stage, else MatchGeneral) and fills the punctuation table
/* WARNING: Removing unreachable block (ram,0x00433693) */
/* WARNING: Removing unreachable block (ram,0x0043378a) */
/* WARNING: Removing unreachable block (ram,0x00433736) */
/* WARNING: Removing unreachable block (ram,0x0043377d) */
/* WARNING: Removing unreachable block (ram,0x00433821) */
/* WARNING: Removing unreachable block (ram,0x00433854) */
/* WARNING: Removing unreachable block (ram,0x0043385f) */
/* WARNING: Removing unreachable block (ram,0x0043389f) */
/* WARNING: Removing unreachable block (ram,0x00433878) */
/* WARNING: Removing unreachable block (ram,0x00433898) */
/* WARNING: Removing unreachable block (ram,0x00433885) */
/* WARNING: Removing unreachable block (ram,0x004338a4) */
/* WARNING: Removing unreachable block (ram,0x004338a8) */
/* WARNING: Removing unreachable block (ram,0x004338f6) */
/* WARNING: Removing unreachable block (ram,0x00433936) */
/* WARNING: Removing unreachable block (ram,0x00433a2d) */
/* WARNING: Removing unreachable block (ram,0x004339d9) */
/* WARNING: Removing unreachable block (ram,0x00433a20) */
/* WARNING: Removing unreachable block (ram,0x00433ac4) */
/* WARNING: Removing unreachable block (ram,0x00433af7) */
/* WARNING: Removing unreachable block (ram,0x00433b02) */
/* WARNING: Removing unreachable block (ram,0x00433b42) */
/* WARNING: Removing unreachable block (ram,0x00433b1b) */
/* WARNING: Removing unreachable block (ram,0x00433b3b) */
/* WARNING: Removing unreachable block (ram,0x00433b28) */
/* WARNING: Removing unreachable block (ram,0x00433b47) */
/* WARNING: Removing unreachable block (ram,0x00433b4b) */
/* WARNING: Removing unreachable block (ram,0x00433b99) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl MatchEngine::Compile(int *self,int dictList,int dictIndex,uint *patternText,int ignoreUnusedPunctuation)

{
  char lastOp;
  int minLen;
  char *found;
  uint pos;
  uint pos2;
  undefined4 *src;
  uint *p;
  undefined4 *dst;
  undefined4 *sehChainHead;
  byte op;
  undefined4 objectDtor;
  undefined *copyCtor;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  int *unused2;
  undefined1 exceptMsg2 [816];
  uint afterEnd;
  uint unused3;
  uint eraseLen;
  undefined1 nul;
  undefined1 *unused4;
  undefined4 unused5;
  int *unused6;
  int *unused7;
  int *strRep;
  int *newData2;
  int *unused8;
  uint unused9;
  undefined1 *unused10;
  int *newRep;
  int *unused11;
  uint len3;
  int *strRep2;
  undefined1 *unused12;
  int *unused13;
  undefined4 unused14;
  uint *msgText;
  uint erasePos;
  undefined4 *strRep3;
  uint next2;
  undefined4 *strRep4;
  uint idx2;
  byte op2;
  undefined4 terminators;
  undefined1 unused15;
  uint eraseLen2;
  undefined1 nul2;
  undefined1 *unused16;
  undefined4 unused17;
  int *unused18;
  int *unused19;
  int *strRep5;
  int *unused20;
  int *unused21;
  uint unused22;
  undefined1 *unused23;
  int *newRep2;
  int *unused24;
  uint len4;
  int *strRep6;
  undefined1 *unused25;
  int *unused26;
  undefined4 unused27;
  uint *msgText2;
  int next;
  undefined4 *strRep7;
  uint idx;
  uint i;
  int *bcRef2;
  undefined4 *strRep8;
  int *bcRef;
  int varPos2;
  undefined4 *strRep9;
  uint clearLen;
  undefined1 nul3;
  uint len2;
  uint len1;
  uint endPos;
  int varPos;
  int extra;
  undefined4 *text;
  char *len;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str3;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused28;
  undefined1 str2 [8];
  int *str4;
  undefined **outOfRange2 [2];
  undefined1 newStr2 [8];
  int *unused29;
  
  op = 0;
  __InitExceptBlockLDTC(0x4f2fdc);
  self[m_dictList / 4] = dictList;
  self[m_dictIndex / 4] = dictIndex;
  memset(self + 0x40a,0,0x100);
  len = strlen(patternText);
  text = (undefined4 *)operator_new_array();
  pos = 0xffffffff;
  do {
    p = patternText;
    if (pos == 0) break;
    pos = pos - 1;
    p = (uint *)((int)patternText + (uint)op * -2 + 1);
    pos2 = *patternText;
    patternText = p;
  } while ((char)pos2 != '\0');
  pos = ~pos;
  src = (undefined4 *)((int)p - pos);
  dst = text;
  for (pos2 = pos >> 2; pos2 != 0; pos2 = pos2 - 1) {
    *dst = *src;
    src = src + (uint)op * -2 + 1;
    dst = dst + (uint)op * -2 + 1;
  }
  for (pos = pos & 3; pos != 0; pos = pos - 1) {
    *(undefined1 *)dst = *(undefined1 *)src;
    src = (undefined4 *)((int)src + (uint)op * -2 + 1);
    dst = (undefined4 *)((int)dst + (uint)op * -2 + 1);
  }
  *(char *)((int)text + (int)len) = ')';
  ((undefined1 *)((int)text + 1))[(int)len] = 0;
  extra = 0;
  self[m_status / 4] = 0;
  self[m_valid / 4] = 0;
  *(undefined1 *)(self + m_lastOp / 4) = 0xfd;
  self[m_opCount / 4] = 0;
  Pattern::Clear(self);
  varPos = -1;
  endPos = 0xffffffff;
  if (*(int *)(self[m_bcData / 4] + -4) == 0) {
    std::string::replace_fill((int)(self + m_bc / 4),*(uint *)(self[m_bcData / 4] + -4),0,
                 -*(int *)(self[m_bcData / 4] + -4),0);
  }
  else {
    len1 = *(uint *)(self[m_bcData / 4] + -4);
    len2 = *(uint *)(self[m_bcData / 4] + -4);
    nul3 = 0;
    clearLen = len2;
    if (len1 < len2) {
      clearLen = len1;
    }
    std::string::replace((int)(self + m_bc / 4),0,clearLen,(uint)&nul3,0,0,0);
  }
  strRep9 = (undefined4 *)(self[m_bcData / 4] + -0xc);
  if (strRep9 != &g_nullStringRep) {
    *strRep9 = 0;
  }
  minLen = MatchEngine::CompilePattern(self,(int *)&text,(int)(self + m_bc / 4),&varPos,(int *)&endPos,
                       &extra);
  if (minLen != -1) {
    if (*(char *)((int)text + 1) == '\0') {
      if (extra + minLen == 0) {
        self[m_status / 4] = 1;
        minLen = -1;
      }
    }
    else {
      self[m_status / 4] = 8;
      minLen = -1;
    }
  }
  if (-1 < varPos) {
    bcRef = self + m_bc / 4;
    varPos2 = varPos;
    if (1 < *(int *)(self[m_bcData / 4] + -0xc) + 1) {
      std::string::__unshare((int)bcRef);
    }
    strRep8 = (undefined4 *)(bcRef[2] + -0xc);
    if (strRep8 != &g_nullStringRep) {
      *strRep8 = 0xffffffff;
    }
    *(undefined1 *)(bcRef[2] + varPos2) = 0xfb;
  }
  operator_delete_array();
  if (minLen == -1) {
    *sehChainHead = sehPrevFrame;
  }
  else {
    self[m_minLen / 4] = minLen;
    self[m_maxLen / 4] = minLen + extra;
    if (0x65 < self[m_maxLen / 4]) {
      self[m_maxLen / 4] = 0x65;
    }
    self[m_valid / 4] = 1;
    bcRef2 = self + m_bc / 4;
    std::string::replace_fill((int)bcRef2,*(uint *)(self[m_bcData / 4] + -4),0,1,0xfd);
    self[m_matcher / 4] = (int)MatchEngine::MatchGeneral;
    if (self[m_opCount / 4] == 2) {
      lastOp = (char)self[m_lastOp / 4];
      if (lastOp == -0x10) {
        self[m_matcher / 4] = (int)MatchEngine::MatchFixedTemplate;
      }
      else if (lastOp == -0xb) {
        self[m_matcher / 4] = (int)MatchEngine::MatchDistinctAnagram;
      }
      else if (lastOp == -10) {
        self[m_matcher / 4] = (int)MatchEngine::MatchMultiAnagram;
      }
    }
    for (i = 0; (int)i < *(int *)(self[m_bcData / 4] + -4); i = i + 1) {
      idx = i;
      if (1 < *(int *)(self[m_bcData / 4] + -0xc) + 1) {
        std::string::__unshare((int)(self + m_bc / 4));
      }
      strRep7 = (undefined4 *)(self[m_bcData / 4] + -0xc);
      if (strRep7 != &g_nullStringRep) {
        *strRep7 = 0xffffffff;
      }
      op = *(byte *)(self[m_bcData / 4] + idx);
      if (0xee < op) {
        if (op == 0xff) {
          next = i + 1;
          if (1 < *(int *)(self[m_bcData / 4] + -0xc) + 1) {
            std::string::__unshare((int)(self + m_bc / 4));
          }
          pos = i;
          if ((undefined4 *)(self[m_bcData / 4] + -0xc) != &g_nullStringRep) {
            *(undefined4 *)(self[m_bcData / 4] + -0xc) = 0xffffffff;
          }
          if (*(char *)(self[m_bcData / 4] + next) != ' ') break;
          endPos = endPos - 2;
          if (*(uint *)(self[m_bcData / 4] + -4) < i) {
            throwLine = 0;
            throwFile = 0;
            throwFlags = 0;
            pos2 = 1;
            copyCtor = &LAB_004084c8;
            objectDtor = 0;
            ehContext = 0x80;
            msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,
                                             PTR_s_string_index_out_of_range_in_fun_00516d2c);
            std::string::string_from_cstr((int)str2,msgText2);
            ehDtorCount = ehDtorCount + 2;
            outOfRange2[0] = &std::logic_error::vftable;
            unused27 = 0;
            unused29 = (int *)0x0;
            ehContext = 0x8c;
            if (str4[-3] == -1 || str4[-3] + 1 < 0) {
              len4 = str4[-1];
              newRep2 = std::string::__getRep(newStr2,len4,len4);
              unused23 = newStr2;
              newData = newRep2 + 3;
              unused22 = len4;
              unused21 = str4;
              unused20 = newData;
              unused24 = newData;
              unused29 = newData;
              memcpy(newData,str4,len4);
            }
            else {
              unused25 = newStr2;
              unused26 = str4;
              unused29 = str4;
              unused2 = str4;
              strRep6 = str4 + -3;
              if (strRep6 != &g_nullStringRep) {
                *strRep6 = *strRep6 + 1;
              }
            }
            ehContext = 0x80;
            outOfRange2[0] = &std::out_of_range::vftable;
            ehDtorCount = ehDtorCount + 2;
            if (str4 != (int *)0x0) {
              if (str4[-3] != -1) {
                strRep5 = str4 + -3;
                if (strRep5 == &g_nullStringRep) {
                  minLen = 1;
                }
                else if (strRep5 == &g_nullStringRep) {
                  minLen = 1;
                }
                else {
                  *strRep5 = *strRep5 + -1;
                  minLen = *strRep5 + 1;
                }
                if (minLen != 0) goto LAB_0043412d;
              }
              unused19 = str4 + -3;
              unused18 = str4 + -3;
              operator_delete();
              unused17 = 0;
              unused16 = str2;
              str4 = (int *)0x0;
              unused = 0;
            }
LAB_0043412d:
            ehContext = 0x74;
            _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange2,objectDtor,copyCtor,pos2,throwFlags,throwFile,throwLine);
          }
          eraseLen2 = *(int *)(self[m_bcData / 4] + -4) - pos;
          nul2 = 0;
          if (2 < eraseLen2) {
            eraseLen2 = 2;
          }
          std::string::replace((int)(self + m_bc / 4),pos,eraseLen2,(uint)&nul2,0,0,0);
          i = i - 1;
        }
        else if (((op != 0xf9) && (op != 0xfa)) && (op != 0xfb)) break;
      }
    }
    pos = *(uint *)(self[m_bcData / 4] + -4);
    do {
      while( true ) {
        do {
          pos2 = pos;
          pos = pos2 - 1;
          if ((int)pos2 < 1) goto LAB_00434602;
          terminators = DAT_004f2d28;
          unused15 = DAT_004f2d2c;
          idx2 = pos;
          if (*(int *)(self[m_bcData / 4] + -0xc) != 0 && 0 < *(int *)(self[m_bcData / 4] + -0xc) + 1) {
            std::string::__unshare((int)(self + m_bc / 4));
          }
          strRep4 = (undefined4 *)(self[m_bcData / 4] + -0xc);
          if (strRep4 != &g_nullStringRep) {
            *strRep4 = 0xffffffff;
          }
          op2 = *(byte *)(self[m_bcData / 4] + idx2);
        } while (op2 < 0xef);
        if (op2 != 0xff) break;
        next2 = pos2;
        if (1 < *(int *)(self[m_bcData / 4] + -0xc) + 1) {
          std::string::__unshare((int)(self + m_bc / 4));
        }
        strRep3 = (undefined4 *)(self[m_bcData / 4] + -0xc);
        if (strRep3 != &g_nullStringRep) {
          *strRep3 = 0xffffffff;
        }
        if (*(char *)(self[m_bcData / 4] + next2) != ' ') goto LAB_00434602;
        if ((int)pos < (int)endPos) {
          endPos = endPos - 2;
        }
        erasePos = pos;
        if (*(uint *)(self[m_bcData / 4] + -4) < pos) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          pos = 1;
          copyCtor = &LAB_004084c8;
          objectDtor = 0;
          ehContext = 0xbc;
          msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00516d2c
                                          );
          std::string::string_from_cstr((int)str,msgText);
          ehDtorCount = ehDtorCount + 2;
          outOfRange[0] = &std::logic_error::vftable;
          unused14 = 0;
          unused28 = (int *)0x0;
          ehContext = 200;
          if (str3[-3] == -1 || str3[-3] + 1 < 0) {
            len3 = str3[-1];
            newRep = std::string::__getRep(newStr,len3,len3);
            unused10 = newStr;
            newData2 = newRep + 3;
            unused9 = len3;
            unused8 = str3;
            unused11 = newData2;
            unused28 = newData2;
            memcpy(newData2,str3,len3);
          }
          else {
            unused12 = newStr;
            unused13 = str3;
            unused28 = str3;
            strRep2 = str3 + -3;
            if (strRep2 != &g_nullStringRep) {
              *strRep2 = *strRep2 + 1;
            }
          }
          ehContext = 0xbc;
          outOfRange[0] = &std::out_of_range::vftable;
          ehDtorCount = ehDtorCount + 2;
          if (str3 != (int *)0x0) {
            if (str3[-3] != -1) {
              strRep = str3 + -3;
              if (strRep == &g_nullStringRep) {
                minLen = 1;
              }
              else if (strRep == &g_nullStringRep) {
                minLen = 1;
              }
              else {
                *strRep = *strRep + -1;
                minLen = *strRep + 1;
              }
              if (minLen != 0) goto LAB_0043456e;
            }
            unused7 = str3 + -3;
            unused6 = str3 + -3;
            operator_delete();
            unused5 = 0;
            unused4 = str;
            str3 = (int *)0x0;
          }
LAB_0043456e:
          ehContext = 0xb0;
          _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,objectDtor,copyCtor,pos,throwFlags,throwFile,throwLine);
        }
        eraseLen = *(int *)(self[m_bcData / 4] + -4) - erasePos;
        nul = 0;
        if (2 < eraseLen) {
          eraseLen = 2;
        }
        std::string::replace((int)(self + m_bc / 4),erasePos,eraseLen,(uint)&nul,0,0,0);
        pos = pos2 - 2;
      }
      found = thunk_strchr((char *)&terminators,op2);
    } while (found == (char *)0x0);
LAB_00434602:
    found = thunk_memchr((char *)(self + 0x40a),-2,0x100);
    self[m_needsRaw / 4] = (uint)(found != (char *)0x0);
    found = thunk_memchr((char *)(self + 0x40a),-1,0x100);
    if (found != (char *)0x0) {
      self[m_needsRaw / 4] = 1;
      if (ignoreUnusedPunctuation == 0) {
        pos = 0;
        do {
          if (*(char *)((int)self + pos + 0x1028) == '\0') {
            *(undefined1 *)((int)self + pos + 0x1028) = 0xff;
          }
          pos = pos + 1;
        } while (pos < 0x100);
      }
      if (endPos != 0xffffffff) {
        unused3 = endPos;
        std::string::replace_fill((int)(self + m_bc / 4),endPos,0,1,0xff);
        afterEnd = endPos + 1;
        std::string::replace_fill((int)(self + m_bc / 4),afterEnd,0,1,0);
      }
    }
    *sehChainHead = sehPrevFrame;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004346e4  MatchEngine::IsValid   (14 bytes)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x0040d5b8 (14 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. returns the int at +0x1020; MatchEngineSet::Compile treats 0 as a compile failure
undefined4 __cdecl MatchEngine::IsValid(int self)

{
  return *(undefined4 *)(self + m_valid);
}

// ----------------------------------------------------------------------------------------------------
// 0x004346f4  MatchEngine::GetStatus   (14 bytes)   [analysis (position-matched TEACON.exe)]
//   paired with TEACON.exe 0x0040d5c8 by position between identical neighbours; the bodies differ (14 vs 14 bytes), so treat the name as probable. returns the status byte at +0x1024
undefined4 __cdecl MatchEngine::GetStatus(int self)

{
  return *(undefined4 *)(self + m_status);
}

// ----------------------------------------------------------------------------------------------------
// 0x00434704  MatchEngine::MatchEngine   (194 bytes)   [analysis (position-matched TEACON.exe)]
//   paired with TEACON.exe 0x0040d5d8 by position between identical neighbours; the bodies differ (191 vs 194 bytes), so treat the name as probable. constructor: Pattern pool, empty bytecode string, shortest=1, longest=100, matcher=MatchGeneral
/* WARNING: Removing unreachable block (ram,0x00434755) */
undefined4 * __cdecl MatchEngine::MatchEngine(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f30d8);
  Pattern::Pattern(self);
  self[m_bcData / 4] = 0;
  self[m_bcData / 4] = &g_emptyStringData;
  self[m_valid / 4] = 0;
  self[m_status / 4] = 1;
  self[m_dictList / 4] = 0;
  self[m_dictIndex / 4] = 0xffffffff;
  self[m_shortest / 4] = 1;
  self[m_longest / 4] = 100;
  self[m_matcher / 4] = MatchEngine::MatchGeneral;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004347e4  MatchEngine::SetShortest   (51 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040d6b4. clamps to 1..100 and stores at +0x1134
void __cdecl MatchEngine::SetShortest(int self,int shortest)

{
  if (shortest < 2) {
    *(undefined4 *)(self + m_shortest) = 1;
    return;
  }
  if (99 < shortest) {
    *(undefined4 *)(self + m_shortest) = 100;
    return;
  }
  *(int *)(self + m_shortest) = shortest;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434818  MatchEngine::SetLongest   (51 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040d6e8. clamps to 1..100 and stores at +0x1138
void __cdecl MatchEngine::SetLongest(int self,int longest)

{
  if (longest < 2) {
    *(undefined4 *)(self + m_longest) = 1;
    return;
  }
  if (99 < longest) {
    *(undefined4 *)(self + m_longest) = 100;
    return;
  }
  *(int *)(self + m_longest) = longest;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043484c  MatchEngine::GetLengthKind   (41 bytes)   [analysis]
//   1 when max_len > 100 (open-ended), -1 when min_len < max_len, 0 for a fixed length. TEA.exe only
undefined4 __cdecl MatchEngine::GetLengthKind(int self)

{
  if (100 < *(int *)(self + m_maxLen)) {
    return 1;
  }
  if (*(int *)(self + m_minLen) < *(int *)(self + m_maxLen)) {
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434878  MatchEngine::SetWordLength   (31 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040d71c. stores the candidate length (+0x113c) and the slack over the template minimum (+0x1140)
void __cdecl MatchEngine::SetWordLength(int self,int length)

{
  *(int *)(self + m_curLen) = length;
  *(int *)(self + m_slack) = length - *(int *)(self + m_minLen);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434898  MatchEngine::MatchWord   (262 bytes)   [analysis (position-matched TEACON.exe)]
//   paired with TEACON.exe 0x0040d73c by position between identical neighbours; the bodies differ (262 vs 262 bytes), so treat the name as probable. builds the punctuation-prefix and filtered raw buffers when needed, then calls the selected matcher
bool __cdecl MatchEngine::MatchWord(int self,int wordBuf)

{
  byte ch;
  int matched;
  char *punctBefore;
  byte *filtered;
  byte *raw;
  char punctCount;
  
  MatchEngine::ResetMatchState();
  if (*(int *)(self + m_needsRaw) == 0) {
LAB_0043496b:
    matched = (**(code **)(self + m_matcher))
                      (self,*(int *)(self + m_bcData) + 3,wordBuf,0,
                       *(undefined4 *)(self + m_slack),*(undefined4 *)(self + m_curLen));
    return matched != 0;
  }
  punctBefore = (char *)(wordBuf + 0x80);
  filtered = (byte *)(wordBuf + 0x100);
  punctCount = '\0';
  raw = (byte *)(wordBuf + 1000);
LAB_004348d7:
  ch = *raw;
  if (*(int *)(*(int *)(*(int *)(*(int *)(self + m_dictList) + 0xc) + *(int *)(self + m_dictIndex) * 4)
               + 8 + (uint)ch * 8) == 0xff) {
    if ((punctBefore == (char *)(wordBuf + *(int *)(self + m_curLen) + 0x80U)) &&
       ((ch == 0 || (ch == 0x20)))) {
      *punctBefore = punctCount;
LAB_00434968:
      *filtered = 0;
      goto LAB_0043496b;
    }
    if (*(char *)(self + 0x1028 + (uint)ch) == -1) {
      *filtered = ch;
      filtered = filtered + 1;
      punctCount = punctCount + '\x01';
    }
  }
  else {
    *filtered = ch;
    filtered = filtered + 1;
    *punctBefore = punctCount;
    punctBefore = punctBefore + 1;
    if ((char *)(wordBuf + *(int *)(self + m_curLen) + 0x80U) < punctBefore) goto LAB_00434968;
  }
  raw = raw + 1;
  goto LAB_004348d7;
}

// ----------------------------------------------------------------------------------------------------
// 0x004349a0  MatchEngine::FormatBalance   (255 bytes)   [notes (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040d844. renders the anagram balance table as text. Entry checked; body only skimmed
void __cdecl MatchEngine::FormatBalance(int self,int out)

{
  bool first;
  int count;
  undefined4 letter;
  int k;
  int *balanceAt;
  int letterClass;
  uint sign;
  
  if (g_balanceCount == 1) {
    sign = 0;
    do {
      first = true;
      balanceAt = &g_balance;
      letterClass = 0;
      do {
        if ((*balanceAt != 0) && (0 < *balanceAt == sign)) {
          if (first) {
            if (sign == 0) {
              std::string::replace_fill(out,*(uint *)(*(int *)(out + 8) + -4),0,1,0x2d);
            }
            else {
              std::string::replace_fill(out,*(uint *)(*(int *)(out + 8) + -4),0,1,0x2b);
            }
            first = false;
          }
          if (sign == 0) {
            count = -*balanceAt;
          }
          else {
            count = *balanceAt;
          }
          k = 0;
          if (0 < count) {
            do {
              letter = TSDictionaryList::GetLetterChar(*(int *)(self + m_dictList),*(int *)(self + m_dictIndex),letterClass);
              std::string::replace_fill(out,*(uint *)(*(int *)(out + 8) + -4),0,1,(char)letter);
              k = k + 1;
            } while (k < count);
          }
        }
        letterClass = letterClass + 1;
        balanceAt = balanceAt + 1;
      } while (letterClass < 0x100);
      sign = sign + 1;
    } while ((int)sign < 2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434aa0  MatchEngine::GetMinLength   (28 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040d944. max(shortest setting, compiled min_len)
int __cdecl MatchEngine::GetMinLength(int self)

{
  int minLength;
  
  minLength = *(int *)(self + m_shortest);
  if (*(int *)(self + m_shortest) < *(int *)(self + m_minLen)) {
    minLength = *(int *)(self + m_minLen);
  }
  return minLength;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434abc  MatchEngine::GetMaxLength   (28 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040d960. min(longest setting, compiled max_len)
int __cdecl MatchEngine::GetMaxLength(int self)

{
  int maxLength;
  
  maxLength = *(int *)(self + m_maxLen);
  if (*(int *)(self + m_longest) < *(int *)(self + m_maxLen)) {
    maxLength = *(int *)(self + m_longest);
  }
  return maxLength;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434ad8  std::string::string   (87 bytes)   [analysis]
//   default constructor: data = the shared empty rep
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00434b16) */
int __cdecl std::string::string(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f30f8);
  *(undefined4 *)(self + 8) = 0;
  *(undefined **)(self + 8) = &g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f0dc  MatchEngine::MatchFixedTemplate   (32 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040dc80. fast path: (offset, letter) pairs compared in sequence until an opcode >= 0xf0
byte * MatchEngine::MatchFixedTemplate(undefined4 self,int bc,int wordBuf)

{
  byte letter;
  char *pc;
  
  pc = (char *)(bc + 1);
  do {
    letter = pc[1];
    if (0xef < letter) {
      return (byte *)(pc + 1);
    }
    pc = pc + 2;
  } while (*(char *)(wordBuf + (uint)letter) == *pc);
  return (byte *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f0fc  MatchEngine::MatchDistinctAnagram   (114 bytes)   [notes (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040dca0. fast path for anagrams of distinct letters. Entry checked; body not read
byte * MatchEngine::MatchDistinctAnagram(undefined4 self,int bc,byte *letters)

{
  byte letter;
  byte *pc;
  uint remaining;
  char hist [256];
  
  remaining = (uint)*(byte *)(bc + 7);
  pc = (byte *)(bc + 8);
  memset((undefined4 *)hist,0,(uint)*(byte *)(bc + 1));
  for (; *letters != 0xff; letters = letters + 1) {
    hist[*letters] = hist[*letters] + '\x01';
  }
  do {
    if ((int)remaining < 1) {
      return pc;
    }
    letter = *pc;
    pc = pc + 1;
    remaining = remaining - 1;
  } while (hist[letter] != '\0');
  return (byte *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f170  MatchEngine::MatchMultiAnagram   (99 bytes)   [notes (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040dd14. fast path for anagrams with repeated letters. Entry checked; body not read
byte * MatchEngine::MatchMultiAnagram(undefined4 self,int bc,byte *letters)

{
  byte *pc;
  byte *count;
  byte hist [256];
  
  pc = (byte *)(bc + 6);
  memset((undefined4 *)hist,0,(uint)*(byte *)(bc + 1));
  for (; *letters != 0xff; letters = letters + 1) {
    hist[*letters] = hist[*letters] + 1;
  }
  do {
    count = pc + 1;
    pc = pc + 2;
    if (0xef < *count) {
      return pc;
    }
  } while (*count <= hist[*pc]);
  return (byte *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f1d4  MatchEngine::RunTemplateVM   (1671 bytes, 2 ranges)   [notes+analysis (position-matched TEACON.exe)]
//   paired with TEACON.exe 0x0040dd78 by position between identical neighbours; the bodies differ (1659 vs 1671 bytes), so treat the name as probable. template interpreter: fixed letters (0xf0), letter/choice/variable groups (0xf1), punctuation (0xfe/0xff), wildcards (0xf2/0xf3), sub-patterns (0xf9..0xfb); backtracks and restores variable bindings on failure
byte * MatchEngine::RunTemplateVM(int self,byte *bc,byte *wordBuf,int punctIdx,int slack)

{
  int filteredIdx;
  byte op;
  byte choice;
  byte operand;
  uint remaining;
  uint left;
  undefined3 regHigh;
  byte *after;
  byte *pc;
  undefined4 *sehChainHead;
  bool negated;
  int extra;
  uint n;
  undefined4 sehPrevFrame;
  uint innerSaved [4];
  uint saved [4];
  
  __InitExceptBlockLDTC(0x4fa748);
  saved[0] = (*(uint *)&g_varsActive);
  if ((*(uint *)&g_varsActive) == 1) {
    VariableValues::Save((int)saved);
  }
  do {
    while( true ) {
      while( true ) {
        op = *bc;
        pc = bc + 1;
        if (op == 0xfc) {
          saved[0] = saved[0] | 2;
          if (saved[0] == 0) {
            (*(uint *)&g_varsActive) = 0;
          }
          else if (saved[0] == 1) {
            VariableValues::Restore((int)saved);
          }
          *sehChainHead = sehPrevFrame;
          return pc;
        }
        if (op != 0xf0) break;
        op = *pc;
        bc = MatchEngine::MatchFixedTemplate(self,(int)bc,(int)wordBuf);
        if (bc == (byte *)0x0) {
          pc = (byte *)0x0;
          if (saved[0] == 0) {
            (*(uint *)&g_varsActive) = 0;
          }
          else if (saved[0] == 1) {
            VariableValues::Restore((int)saved);
          }
          *sehChainHead = sehPrevFrame;
          return pc;
        }
        wordBuf = wordBuf + op;
      }
      if (op == 0xf1) break;
      if (op == 0xf3) {
        pc = bc + 2;
        op = wordBuf[slack + 0x80];
        while (bc = MatchEngine::RunTemplateVM(self,pc,wordBuf + slack,punctIdx,0),
              bc == (byte *)0x0) {
          if ((int)(uint)op <= punctIdx) {
            pc = (byte *)0x0;
            if (saved[0] == 0) {
              (*(uint *)&g_varsActive) = 0;
            }
            else if (saved[0] == 1) {
              VariableValues::Restore((int)saved);
            }
            *sehChainHead = sehPrevFrame;
            return pc;
          }
          punctIdx = punctIdx + 1;
        }
      }
      else if (op == 0xf2) {
        pc = bc + 2;
        while( true ) {
          op = wordBuf[0x80];
          for (; (bc = MatchEngine::RunTemplateVM(self,pc,wordBuf,punctIdx,slack),
                 bc == (byte *)0x0 && (punctIdx < (int)(uint)op)); punctIdx = punctIdx + 1) {
          }
          if (bc != (byte *)0x0) break;
          if (slack == 0) {
            pc = (byte *)0x0;
            if (saved[0] == 0) {
              (*(uint *)&g_varsActive) = 0;
            }
            else if (saved[0] == 1) {
              VariableValues::Restore((int)saved);
            }
            *sehChainHead = sehPrevFrame;
            return pc;
          }
          wordBuf = wordBuf + 1;
          slack = slack + -1;
        }
      }
      else if (op == 0xf9) {
        op = *pc;
        bc = MatchEngine::MatchGeneral(self,(char *)(bc + 3),wordBuf,punctIdx,0,(uint)op);
        if (bc == (byte *)0x0) {
          pc = (byte *)0x0;
          if (saved[0] == 0) {
            (*(uint *)&g_varsActive) = 0;
          }
          else if (saved[0] == 1) {
            VariableValues::Restore((int)saved);
          }
          *sehChainHead = sehPrevFrame;
          return pc;
        }
        wordBuf = wordBuf + op;
      }
      else if (op == 0xfb) {
        op = *pc;
        if ((int)(uint)bc[2] < slack) {
          pc = (byte *)0x0;
          if (saved[0] == 0) {
            (*(uint *)&g_varsActive) = 0;
          }
          else if (saved[0] == 1) {
            VariableValues::Restore((int)saved);
          }
          *sehChainHead = sehPrevFrame;
          return pc;
        }
        pc = MatchEngine::MatchGeneral(self,(char *)(bc + 3),wordBuf,punctIdx,slack,
                              (uint)op + slack);
        if ((pc == (byte *)0x0) ||
           (bc = MatchEngine::RunTemplateVM(self,pc,wordBuf + (uint)op + slack,punctIdx,0),
           bc == (byte *)0x0)) {
          pc = (byte *)0x0;
          if (saved[0] == 0) {
            (*(uint *)&g_varsActive) = 0;
          }
          else if (saved[0] == 1) {
            VariableValues::Restore((int)saved);
          }
          *sehChainHead = sehPrevFrame;
          return pc;
        }
      }
      else if (op == 0xfa) {
        n = (uint)*pc;
        op = bc[2];
        pc = bc + 3;
        extra = 0;
        while( true ) {
          innerSaved[0] = (*(uint *)&g_varsActive);
          if ((*(uint *)&g_varsActive) == 1) {
            VariableValues::Save((int)innerSaved);
          }
          after = MatchEngine::MatchGeneral(self,(char *)pc,wordBuf,punctIdx,extra,n);
          if ((after != (byte *)0x0) &&
             (bc = MatchEngine::RunTemplateVM(self,after,wordBuf + n,punctIdx,slack),
             bc != (byte *)0x0)) break;
          n = n + 1;
          slack = slack + -1;
          extra = extra + 1;
          if ((slack < 0) || ((int)(uint)op < extra)) {
            pc = (byte *)0x0;
            if (innerSaved[0] == 0) {
              (*(uint *)&g_varsActive) = 0;
            }
            else if (innerSaved[0] == 1) {
              VariableValues::Restore((int)innerSaved);
            }
            if (saved[0] == 0) {
              (*(uint *)&g_varsActive) = 0;
            }
            else if (saved[0] == 1) {
              VariableValues::Restore((int)saved);
            }
            *sehChainHead = sehPrevFrame;
            return pc;
          }
          if (innerSaved[0] == 0) {
            (*(uint *)&g_varsActive) = 0;
          }
          else if (innerSaved[0] == 1) {
            VariableValues::Restore((int)innerSaved);
          }
        }
        innerSaved[0] = innerSaved[0] | 2;
        if (innerSaved[0] == 0) {
          (*(uint *)&g_varsActive) = 0;
        }
        else if (innerSaved[0] == 1) {
          VariableValues::Restore((int)innerSaved);
        }
      }
      else {
        filteredIdx = punctIdx + 0x100;
        if (op == 0xff) {
          punctIdx = punctIdx + 1;
        }
        bc = bc + 2;
        if (*pc != wordBuf[filteredIdx]) {
          pc = (byte *)0x0;
          if (saved[0] == 0) {
            (*(uint *)&g_varsActive) = 0;
          }
          else if (saved[0] == 1) {
            VariableValues::Restore((int)saved);
          }
          *sehChainHead = sehPrevFrame;
          return pc;
        }
      }
    }
    op = *pc;
    bc = bc + 2;
    while (operand = *bc, operand < 0xf0) {
      pc = bc + 1;
      if ((operand & 0x40) == 0) {
        if ((operand & 0x80) == 0) {
          bc = bc + 2;
          if (wordBuf[operand] != *pc) {
            pc = (byte *)0x0;
            if (saved[0] == 0) {
              (*(uint *)&g_varsActive) = 0;
            }
            else if (saved[0] == 1) {
              VariableValues::Restore((int)saved);
            }
            *sehChainHead = sehPrevFrame;
            return pc;
          }
        }
        else {
          bc = bc + 2;
          negated = VariableValues::Bind((uint)*pc,wordBuf[operand & 0xffffff7f]);
          if (CONCAT31(regHigh,negated) == 0) {
            pc = (byte *)0x0;
            if (saved[0] == 0) {
              (*(uint *)&g_varsActive) = 0;
            }
            else if (saved[0] == 1) {
              VariableValues::Restore((int)saved);
            }
            *sehChainHead = sehPrevFrame;
            return pc;
          }
        }
      }
      else {
        bc = bc + 2;
        negated = (operand & 0x80) != 0;
        remaining = (uint)*pc;
        do {
          left = remaining - 1;
          if ((int)remaining < 1) break;
          choice = *bc;
          bc = bc + 1;
          remaining = left;
        } while (wordBuf[operand & 0x3f] != choice);
        if (-1 < (int)left == negated) {
          pc = (byte *)0x0;
          if (saved[0] == 0) {
            (*(uint *)&g_varsActive) = 0;
          }
          else if (saved[0] == 1) {
            VariableValues::Restore((int)saved);
          }
          *sehChainHead = sehPrevFrame;
          return pc;
        }
        if (!negated) {
          while (0 < (int)left) {
            bc = bc + 1;
            left = left - 1;
          }
        }
      }
    }
    wordBuf = wordBuf + op;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f860  MatchEngine::AnagramSingleLetters   (54 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040e3f8. anagram opcode 0xf5 operand walker: <count> <letter...>
byte * MatchEngine::AnagramSingleLetters(undefined4 self,byte *bc,int hist,int budget)

{
  byte letter;
  uint remaining;
  uint left;
  byte *next;
  byte *pc;
  bool wasNegative;
  
  remaining = (uint)*bc;
  pc = bc + 1;
  do {
    left = remaining - 1;
    if ((int)remaining < 1) {
      return pc;
    }
    next = pc + 1;
    letter = *pc;
    remaining = left;
    pc = next;
  } while ((*(char *)(hist + (uint)letter) != '\0') ||
          (wasNegative = budget < 0, budget = budget + 1, wasNegative));
  return (byte *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f898  MatchEngine::AnagramMultiLetters   (67 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040e430. anagram opcode 0xf6: (multiplicity, letter) pairs checked against the letter histogram with an omission budget
byte * MatchEngine::AnagramMultiLetters(undefined4 self,byte *bc,int hist,int budget)

{
  byte mult;
  
  while( true ) {
    mult = *bc;
    if (0xef < mult) {
      return bc;
    }
    if ((*(byte *)(hist + (uint)bc[1]) < mult) &&
       (budget = budget + ((uint)mult - (uint)*(byte *)(hist + (uint)bc[1])), 0 < budget
       )) break;
    bc = bc + 2;
  }
  return (byte *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f8dc  MatchEngine::AnagramEnd   (10 bytes)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x0040e474 (10 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. anagram stage opcode 0xfc (end): returns the code pointer just before the operand
int MatchEngine::AnagramEnd(undefined4 self,int bc)

{
  return bc + -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f8e8  MatchEngine::AnagramChoiceLists   (239 bytes)   [notes (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040e480. anagram opcode 0xf7 solver. Entry checked; body not read
int MatchEngine::AnagramChoiceLists(undefined4 self,byte *bc,int hist,int idx,int mult,int allowed, int budget,undefined4 numLetters)

{
  char *allowedAt;
  int result;
  char *histAt;
  
  allowedAt = (char *)(allowed + idx);
  histAt = (char *)(hist + idx);
  do {
    if (idx < 0) {
      if (budget < 0) {
        if (mult < 2) {
          result = (*(code *)(&g_anagramStageOps)[*bc])
                            (self,bc + 1,hist,budget + 1,numLetters);
        }
        else {
          result = MatchEngine::AnagramChoiceLists(self,bc,hist,idx,mult + -1,allowed,budget + 1,
                               numLetters);
        }
      }
      else {
        result = 0;
      }
      return result;
    }
    if ((*histAt != '\0') && (*allowedAt != '\0')) {
      *histAt = *histAt + -1;
      if (mult < 2) {
        result = (*(code *)(&g_anagramStageOps)[*bc])
                          (self,bc + 1,hist,budget,numLetters);
      }
      else {
        result = MatchEngine::AnagramChoiceLists(self,bc,hist,idx,mult + -1,allowed,budget,numLetters);
      }
      *histAt = *histAt + '\x01';
      if (result != 0) {
        return result;
      }
    }
    idx = idx + -1;
    allowedAt = allowedAt + -1;
    histAt = histAt + -1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f9d8  MatchEngine::AnagramChoiceListsOp   (67 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040e570. fetches the Pattern pool slot and calls AnagramChoiceLists
void MatchEngine::AnagramChoiceListsOp(int self,byte *bc,int hist,int budget,int numLetters)

{
  int choiceSet;
  
  choiceSet = Pattern::At(self,bc[1]);
  MatchEngine::AnagramChoiceLists(self,bc + 2,hist,numLetters + -1,(uint)*bc,*(int *)(choiceSet + 8),budget,
               numLetters);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045fa1c  MatchEngine::AnagramVariables   (332 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040e5b4. anagram opcode 0xf8: tries each unclaimed letter (not bound to another variable) for each free variable in turn, recursing; then runs the next stage
int MatchEngine::AnagramVariables(undefined4 self,int varCounts,byte *hist,int var,int budget,int numLetters)

{
  char *value;
  int result;
  int found;
  undefined1 *valueSlot;
  byte *letterAt;
  byte count;
  
  letterAt = (byte *)(varCounts + var);
  while ((var < 10 &&
         ((count = *letterAt, count == 0 || (value = VariableValues::Get(var), *value != -2)))))
  {
    var = var + 1;
    letterAt = letterAt + 1;
  }
  if (var < 10) {
    for (letterAt = hist; letterAt < hist + numLetters; letterAt = letterAt + 1) {
      if (*letterAt != 0) {
        result = VariableValues::IsLetterBound((char)letterAt - (char)hist);
        if (result == 0) {
          result = (uint)count - (uint)*letterAt;
          if (result < 1) {
            *letterAt = *letterAt - count;
          }
          else {
            if (0 < budget + result) goto LAB_0045fb2a;
            budget = budget + result;
            *letterAt = 0;
          }
          value = VariableValues::Get(var);
          *value = (char)letterAt - (char)hist;
          found = MatchEngine::AnagramVariables(self,varCounts,hist,var + 1,budget,numLetters);
          valueSlot = VariableValues::Get(var);
          *valueSlot = 0xfe;
          *letterAt = count - (char)result;
          if (0 < result) {
            budget = budget - result;
          }
          if (found != 0) {
            return found;
          }
        }
      }
LAB_0045fb2a:
    }
    if ((int)(budget + (uint)count) < 1) {
      result = MatchEngine::AnagramVariables(self,varCounts,hist,var + 1,budget + (uint)count,numLetters);
    }
    else {
      result = 0;
    }
  }
  else {
    result = (*(code *)(&g_anagramStageOps)[*(byte *)(varCounts + 10)])
                      (self,varCounts + 0xb,hist,budget,numLetters);
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045fb68  MatchEngine::AnagramBoundVariables   (155 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040e700. anagram stage for letter variables: removes the letters of already-bound variables, then binds the free ones (AnagramVariables)
int MatchEngine::AnagramBoundVariables(undefined4 self,byte *varCounts,byte *hist,int budget,int numLetters)

{
  byte count;
  byte letter;
  byte *value;
  int var;
  byte *countAt;
  
  var = 0;
  countAt = varCounts;
  do {
    count = *countAt;
    if (count != 0) {
      value = VariableValues::Get(var);
      letter = *value;
      if (letter != 0xfe) {
        if (hist[letter] < count) {
          budget = budget + ((uint)count - (uint)hist[letter]);
          if (0 < budget) {
            return 0;
          }
          hist[letter] = 0;
        }
        else {
          hist[letter] = hist[letter] - count;
        }
      }
    }
    var = var + 1;
    countAt = countAt + 1;
  } while (var < 10);
  var = MatchEngine::AnagramVariables(self,(int)varCounts,hist,0,budget,numLetters);
  return var;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045fc04  MatchEngine::AnagramSubPattern   (696 bytes)   [notes+analysis (position-matched TEACON.exe)]
//   paired with TEACON.exe 0x0040e79c by position between identical neighbours; the bodies differ (698 vs 696 bytes), so treat the name as probable. anagram opcodes 0xfa/0xfb: places a sub-pattern over each run of unclaimed letters (claimed letters carry bit 7), longest first, and continues with the rest of the anagram
int MatchEngine::AnagramSubPattern(int self,byte *bc,int letters,char op,int mult,int sub, int punctIdx,uint budget,int n,undefined4 numLetters)

{
  byte *p;
  byte *runEnd;
  int i;
  undefined4 *sehChainHead;
  byte *result;
  int triesLeft;
  uint subExtra;
  uint subMin;
  undefined4 sehPrevFrame;
  uint saved [4];
  
  __InitExceptBlockLDTC(0x4fa854);
  subMin = (uint)*(byte *)(sub + 1);
  subExtra = (uint)*(byte *)(sub + 2);
  triesLeft = 0x7fffffff;
  if ((op == -5) && (mult == 1)) {
    if ((int)budget < 0) {
      subMin = subMin + subExtra;
      triesLeft = 0;
    }
    else if ((int)subExtra < (int)budget) {
      subMin = subMin + subExtra;
      triesLeft = 0;
    }
    else {
      subExtra = budget;
      triesLeft = 1;
    }
  }
  else if ((int)(n - subMin) < (int)subExtra) {
    subExtra = n - subMin;
  }
  do {
    if (((int)subExtra < 0) || (triesLeft == 0)) {
      subMin = budget + subMin;
      if ((int)subMin < 1) {
        if (mult < 2) {
          p = MatchEngine::RunAnagramVM(self,bc,(byte *)letters,punctIdx,subMin,n,numLetters);
          *sehChainHead = sehPrevFrame;
        }
        else {
          p = (byte *)MatchEngine::AnagramSubPattern(self,bc,letters,op,mult + -1,sub,punctIdx
                                        ,subMin,n,numLetters);
          *sehChainHead = sehPrevFrame;
        }
      }
      else {
        p = (byte *)0x0;
        *sehChainHead = sehPrevFrame;
      }
      return (int)p;
    }
    for (i = n - (subMin + subExtra); -1 < i; i = i + -1) {
      saved[0] = (*(uint *)&g_varsActive);
      if ((*(uint *)&g_varsActive) == 1) {
        VariableValues::Save((int)saved);
      }
      p = (byte *)(letters + i);
      runEnd = p + subExtra + subMin;
      for (; (p < runEnd && ((*p & 0x80) == 0)); p = p + 1) {
      }
      if ((runEnd == p) &&
         (p = MatchEngine::MatchGeneral(self,(char *)(sub + 3),(byte *)(letters + i),punctIdx,
                                subExtra,subMin + subExtra), p != (byte *)0x0)) {
        for (p = (byte *)(letters + i); p < runEnd; p = p + 1) {
          *p = *p ^ 0x80;
        }
        if (mult < 2) {
          result = MatchEngine::RunAnagramVM(self,bc,(byte *)letters,punctIdx,budget - subExtra,n
                                  ,numLetters);
        }
        else {
          result = (byte *)MatchEngine::AnagramSubPattern(self,bc,letters,op,mult + -1,sub,
                                          punctIdx,budget - subExtra,n,numLetters);
        }
        for (p = (byte *)(letters + i); p < runEnd; p = p + 1) {
          *p = *p ^ 0x80;
        }
        if (result != (byte *)0x0) {
          saved[0] = saved[0] | 2;
          if (saved[0] == 0) {
            (*(uint *)&g_varsActive) = 0;
          }
          else if (saved[0] == 1) {
            VariableValues::Restore((int)saved);
          }
          *sehChainHead = sehPrevFrame;
          return (int)result;
        }
      }
      if (saved[0] == 0) {
        (*(uint *)&g_varsActive) = 0;
      }
      else if (saved[0] == 1) {
        VariableValues::Restore((int)saved);
      }
    }
    triesLeft = triesLeft + -1;
    subExtra = subExtra - 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0045febc  MatchEngine::RunAnagramVM   (200 bytes)   [notes (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040ea58. anagram bytecode interpreter. Entry checked; body not read
byte * MatchEngine::RunAnagramVM(int self,byte *bc,byte *letters,undefined4 punctIdx,uint budget, int n,undefined4 numLetters)

{
  int sub;
  char hist [259];
  byte op;
  int engine;
  
  op = *bc;
  if (op != 0xfc) {
    engine = self;
    if ((op == 0xfa) || (op == 0xfb)) {
      sub = Pattern::At(self,bc[2]);
      bc = (byte *)MatchEngine::AnagramSubPattern(engine,bc + 3,(int)letters,op,(uint)bc[1],
                                     *(int *)(sub + 8),punctIdx,budget,n,numLetters);
    }
    else {
      memset((undefined4 *)hist,0,0x100);
      while (0 < n) {
        hist[*letters] = hist[*letters] + '\x01';
        letters = letters + 1;
        n = n + -1;
      }
      bc = (byte *)(*(code *)(&g_anagramStageOps)[op])
                                  (engine,bc + 1,hist,budget,numLetters);
    }
  }
  return bc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ff84  MatchEngine::ComputeBalance   (124 bytes, 2 ranges)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040eb20. fills the 256-entry balance table: +1 per candidate letter, minus the letters the anagram consumed
void MatchEngine::ComputeBalance(char *bc,byte *letters,int n)

{
  char op;
  uint count;
  byte *pc;
  byte *named;
  
  g_balanceCount = g_balanceCount + 1;
  memset(&g_balance,0,0x400);
  op = *bc;
  pc = (byte *)(bc + 1);
  if ((op == -0xb) || (op == -10)) {
    while (0 < n) {
      (&g_balance)[*letters] = (&g_balance)[*letters] + 1;
      letters = letters + 1;
      n = n + -1;
    }
    if (op == -0xb) {
      named = (byte *)(bc + 2);
      count = (uint)*pc;
      while (0 < (int)count) {
        (&g_balance)[*named] = (&g_balance)[*named] + -1;
        named = named + 1;
        count = count - 1;
      }
    }
    else {
      for (; *pc < 0xf0; pc = pc + 2) {
        (&g_balance)[pc[1]] = (&g_balance)[pc[1]] - (uint)*pc;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460050  MatchEngine::MatchGeneral   (403 bytes, 2 ranges)   [analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). Default matcher installed by the constructor
byte * MatchEngine::MatchGeneral(int self,char *bc,byte *wordBuf,int punctIdx,int slack,int n)

{
  byte *pc;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  uint saved [4];
  
  __InitExceptBlockLDTC(0x4fa8ac);
  saved[0] = (*(uint *)&g_varsActive);
  if ((*(uint *)&g_varsActive) == 1) {
    VariableValues::Save((int)saved);
  }
  while( true ) {
    pc = (byte *)(bc + 1);
    if (*bc == 0xfc) {
      saved[0] = saved[0] | 2;
      if (saved[0] == 0) {
        (*(uint *)&g_varsActive) = 0;
      }
      else if (saved[0] == 1) {
        VariableValues::Restore((int)saved);
      }
      *sehChainHead = sehPrevFrame;
      return pc;
    }
    if (*bc == 0xf4) break;
    bc = (char *)MatchEngine::RunTemplateVM(self,(byte *)bc,wordBuf,punctIdx,slack);
    if ((byte *)bc == (byte *)0x0) {
      pc = (byte *)0x0;
      if (saved[0] == 0) {
        (*(uint *)&g_varsActive) = 0;
      }
      else if (saved[0] == 1) {
        VariableValues::Restore((int)saved);
      }
      *sehChainHead = sehPrevFrame;
      return pc;
    }
  }
  pc = MatchEngine::RunAnagramVM(self,(byte *)(bc + 6),wordBuf,punctIdx,
                        n - *(int *)(bc + 2),n,(uint)*pc);
  if (pc != (byte *)0x0) {
    MatchEngine::ComputeBalance(bc + 6,wordBuf,n);
    saved[0] = saved[0] | 2;
    pc = pc + 1;
    if (saved[0] == 0) {
      (*(uint *)&g_varsActive) = 0;
    }
    else if (saved[0] == 1) {
      VariableValues::Restore((int)saved);
    }
    *sehChainHead = sehPrevFrame;
    return pc;
  }
  pc = (byte *)0x0;
  if (saved[0] == 0) {
    (*(uint *)&g_varsActive) = 0;
  }
  else if (saved[0] == 1) {
    VariableValues::Restore((int)saved);
  }
  *sehChainHead = sehPrevFrame;
  return pc;
}

} // namespace tea
