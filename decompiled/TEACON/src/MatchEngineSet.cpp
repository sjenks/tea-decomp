// TEACON.exe — application module "MatchEngineSet"
// 23 functions, 0x00411e94..0x00414ab4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00411e94  MatchEngineSet::MatchEngineSet   (162 bytes)   [analysis]
//   constructor: empty engine vector (256 reserved), empty logic opcode string
/* WARNING: Removing unreachable block (ram,0x00411f15) */
/* WARNING: Removing unreachable block (ram,0x00411edb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00411ee6 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl MatchEngineSet::MatchEngineSet(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42e1b4);
  self[m_enginesBegin / 4] = 0;
  self[m_enginesEnd / 4] = 0;
  self[m_enginesCapacityEnd / 4] = 0;
  *self = 0x100;
  self[m_opsData / 4] = 0;
  self[m_opsData / 4] = &g_emptyStringData;
  *(undefined1 *)(self + m_status / 4) = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411f58  MatchEngineSet::~MatchEngineSet   (243 bytes)   [rtti:dtor destructor]
//   written in code as MatchEngineSet::_dtor
void __cdecl MatchEngineSet::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42e1f0);
  if (self == 0) goto LAB_0041203a;
  MatchEngineSet::Clear(self);
  if (*(int *)(self + m_opsData) != 0) {
    if (*(int *)(*(int *)(self + m_opsData) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + m_opsData) + -0xc);
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
      if (prevRefs != 0) goto LAB_00412000;
    }
    operator_delete();
    *(undefined4 *)(self + m_opsData) = 0;
  }
LAB_00412000:
  std::_Destroy_range_ptr(self,*(int *)(self + m_enginesBegin),*(int *)(self + m_enginesEnd));
  operator_delete();
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0041203a:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041204c  MatchEngineSet::Compile   (5025 bytes)   [notes+analysis]
//   splits the expanded query on & | ! ( ), creates one MatchEngine per leaf and calls MatchEngine::Compile; returns the first leaf's error status
/* WARNING: Removing unreachable block (ram,0x0041209b) */
/* WARNING: Removing unreachable block (ram,0x00412178) */
/* WARNING: Removing unreachable block (ram,0x00412124) */
/* WARNING: Removing unreachable block (ram,0x0041216b) */
/* WARNING: Removing unreachable block (ram,0x0041220f) */
/* WARNING: Removing unreachable block (ram,0x00412228) */
/* WARNING: Removing unreachable block (ram,0x00412233) */
/* WARNING: Removing unreachable block (ram,0x00412257) */
/* WARNING: Removing unreachable block (ram,0x00412241) */
/* WARNING: Removing unreachable block (ram,0x00412250) */
/* WARNING: Removing unreachable block (ram,0x00412249) */
/* WARNING: Removing unreachable block (ram,0x0041225c) */
/* WARNING: Removing unreachable block (ram,0x00412260) */
/* WARNING: Removing unreachable block (ram,0x004122ae) */
/* WARNING: Removing unreachable block (ram,0x00412d0d) */
/* WARNING: Removing unreachable block (ram,0x00412e0e) */
/* WARNING: Removing unreachable block (ram,0x00412dae) */
/* WARNING: Removing unreachable block (ram,0x00412e01) */
/* WARNING: Removing unreachable block (ram,0x00412eb7) */
/* WARNING: Removing unreachable block (ram,0x00412ee1) */
/* WARNING: Removing unreachable block (ram,0x00412eef) */
/* WARNING: Removing unreachable block (ram,0x00412f16) */
/* WARNING: Removing unreachable block (ram,0x00412f00) */
/* WARNING: Removing unreachable block (ram,0x00412f0f) */
/* WARNING: Removing unreachable block (ram,0x00412f08) */
/* WARNING: Removing unreachable block (ram,0x00412f1b) */
/* WARNING: Removing unreachable block (ram,0x00412f1f) */
/* WARNING: Removing unreachable block (ram,0x00412f79) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined1 __cdecl MatchEngineSet::Compile(int self,int dictList,int dictIndex,int query,int shortest,int longest,int ignoreUnusedPunctuation)

{
  char ch;
  undefined1 status;
  int n;
  uint opPos;
  uint pos;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  int *unused2;
  undefined1 exceptMsg2 [544];
  uint unused3;
  uint unused4;
  uint unused5;
  uint i;
  undefined1 *unused6;
  undefined4 unused7;
  uint *unused8;
  uint *unused9;
  uint *strRep;
  int opsRef3;
  byte opByte;
  int opsRef2;
  byte unused10;
  undefined4 *slot3;
  undefined4 *unused11;
  undefined4 nullEngine;
  undefined4 *slot2;
  undefined4 *unused12;
  int *engine;
  uint eraseLen2;
  undefined1 nul2 [73];
  int opsRef;
  byte unused13;
  undefined4 *slot;
  undefined4 *unused14;
  undefined4 nullEngine2;
  byte negate;
  uint eraseLen;
  undefined1 nul;
  uint available;
  undefined1 *unused15;
  undefined4 unused16;
  int *unused17;
  int *unused18;
  int *strRep2;
  int *newData2;
  int *unused19;
  uint unused20;
  undefined1 *unused21;
  int *newRep;
  int *unused22;
  uint len;
  int *strRep3;
  undefined1 *unused23;
  int *unused24;
  undefined4 unused25;
  uint *msgText;
  uint tailLen;
  undefined1 *unused26;
  undefined4 unused27;
  int *unused28;
  int *unused29;
  int *strRep4;
  int *unused30;
  int *unused31;
  uint unused32;
  undefined1 *unused33;
  int *newRep2;
  int *unused34;
  uint len2;
  int *strRep5;
  undefined1 *unused35;
  int *unused36;
  undefined4 unused37;
  uint *msgText2;
  uint *strRep6;
  int beforeLast;
  uint *strRep7;
  int lastPos;
  char lastCh;
  int trailingCloses;
  uint balanced;
  uint *strRep8;
  uint idx;
  uint *strRep9;
  int prevIdx;
  uint closes;
  uint opens;
  uint notDepth;
  uint unused38;
  byte logicOp;
  int prevPos;
  char *rest;
  uint opPos2;
  uint searchPos;
  uint start;
  int depth;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int *newEngine;
  undefined1 str [8];
  int *str3;
  undefined1 str2 [8];
  int *str4;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused39;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused40;
  undefined1 leaf [8];
  uint *leafData;
  
  __InitExceptBlockLDTC(0x42e2f8);
  MatchEngineSet::Clear(self);
  depth = 0;
  start = 0;
  pos = start;
  do {
    while( true ) {
      opPos = (*(uint *)&g_stringNpos);
      searchPos = pos;
      if (pos <= *(uint *)(*(int *)(query + 8) + -4)) {
        rest = (char *)(*(int *)(query + 8) + pos);
        n = strcspn(rest,&g_logicOperators);
        opPos2 = n + searchPos;
        opPos = opPos2;
        if (*(uint *)(*(int *)(query + 8) + -4) <= opPos2) {
          opPos = (*(uint *)&g_stringNpos);
        }
      }
      if (((opPos == (*(uint *)&g_stringNpos)) || (opPos == 0)) ||
         (prevPos = opPos - 1, *(char *)(*(int *)(query + 8) + prevPos) != '\\')) break;
      pos = opPos + 1;
    }
    ehContext = 0x50;
    pos = (*(uint *)&g_stringNpos);
    if (opPos != (*(uint *)&g_stringNpos)) {
      pos = opPos - start;
    }
    std::string::substr((int)leaf,query,start,pos);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x44;
    logicOp = 3;
    if (opPos != (*(uint *)&g_stringNpos)) {
      if (*(char *)(*(int *)(query + 8) + opPos) == '&') {
        logicOp = 2;
      }
      else {
        logicOp = 1;
      }
      start = opPos + 1;
      unused38 = opPos;
    }
    notDepth = 0;
    opens = 0;
    closes = 0;
    for (pos = 0; pos < leafData[-1]; pos = pos + 1) {
      if (pos == 0) {
LAB_0041245b:
        idx = pos;
        if (1 < (int)(leafData[-3] + 1)) {
          std::string::__unshare((int)leaf);
        }
        strRep8 = leafData + -3;
        if (strRep8 != &g_nullStringRep) {
          *strRep8 = 0xffffffff;
        }
        ch = *(char *)((int)leafData + idx);
        ehContext = 0x44;
        if (ch == '(') {
          opens = opens + 1;
        }
        else if (ch == ')') {
          closes = closes + 1;
        }
        else if (ch == '!') {
          notDepth = opens;
        }
      }
      else {
        prevIdx = pos - 1;
        if (1 < (int)(leafData[-3] + 1)) {
          std::string::__unshare((int)leaf);
        }
        strRep9 = leafData + -3;
        if (strRep9 != &g_nullStringRep) {
          *strRep9 = 0xffffffff;
        }
        if (*(char *)((int)leafData + prevIdx) != '\\') goto LAB_0041245b;
      }
    }
    balanced = closes;
    if (opens < closes) {
      balanced = opens;
    }
    ehContext = 0x44;
    if (opens - balanced < notDepth) {
      balanced = opens - notDepth;
    }
    opens = opens - balanced;
    closes = closes - balanced;
    trailingCloses = 0;
    while (pos = leafData[-1], pos != 0) {
      lastPos = pos - 1;
      if (1 < (int)(leafData[-3] + 1)) {
        std::string::__unshare((int)leaf);
      }
      strRep7 = leafData + -3;
      if (strRep7 != &g_nullStringRep) {
        *strRep7 = 0xffffffff;
      }
      lastCh = *(char *)((int)leafData + lastPos);
      ehContext = 0x44;
      if ((closes == 0) || (lastCh != ')')) {
LAB_00412635:
        if (lastCh != ' ') break;
      }
      else {
        if (pos != 1) {
          beforeLast = pos - 2;
          if (1 < (int)(leafData[-3] + 1)) {
            std::string::__unshare((int)leaf);
          }
          strRep6 = leafData + -3;
          if (strRep6 != &g_nullStringRep) {
            *strRep6 = 0xffffffff;
          }
          if (*(char *)((int)leafData + beforeLast) == '\\') goto LAB_00412635;
        }
        trailingCloses = trailingCloses + 1;
        closes = closes + -1;
      }
      pos = pos - 1;
      if ((*(uint *)&g_stringNpos) - 0xe < pos) {
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_00405f50;
        objectDtor = 0;
        ehContext = 0x68;
        msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00431a78);
        std::string::string_from_cstr((int)str2,msgText2);
        ehDtorCount = ehDtorCount + 2;
        lengthError[0] = &std::logic_error::vftable;
        unused37 = 0;
        unused40 = (int *)0x0;
        ehContext = 0x74;
        if (str4[-3] == -1 || str4[-3] + 1 < 0) {
          len2 = str4[-1];
          newRep2 = std::string::__getRep(newStr2,len2,len2);
          unused33 = newStr2;
          newData = newRep2 + 3;
          unused32 = len2;
          unused31 = str4;
          unused30 = newData;
          unused34 = newData;
          unused40 = newData;
          memcpy(newData,str4,len2);
        }
        else {
          unused35 = newStr2;
          unused36 = str4;
          unused40 = str4;
          unused2 = str4;
          strRep5 = str4 + -3;
          if (strRep5 != &g_nullStringRep) {
            *strRep5 = *strRep5 + 1;
          }
        }
        ehContext = 0x68;
        lengthError[0] = &std::length_error::vftable;
        ehDtorCount = ehDtorCount + 2;
        if (str4 != (int *)0x0) {
          if (str4[-3] != -1) {
            strRep4 = str4 + -3;
            if (strRep4 == &g_nullStringRep) {
              n = 1;
            }
            else if (strRep4 == &g_nullStringRep) {
              n = 1;
            }
            else {
              *strRep4 = *strRep4 + -1;
              n = *strRep4 + 1;
            }
            if (n != 0) goto LAB_0041289c;
          }
          unused29 = str4 + -3;
          unused28 = str4 + -3;
          operator_delete();
          unused27 = 0;
          unused26 = str2;
          str4 = (int *)0x0;
          unused = 0;
        }
LAB_0041289c:
        ehContext = 0x5c;
        _ThrowExceptionLDTC((uint *)&DAT_00405ef4,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if (pos < leafData[-1]) {
        tailLen = leafData[-1] - pos;
        if (leafData[-1] < pos) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_004060a8;
          objectDtor = 0;
          ehContext = 0x98;
          msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00431a84
                                          );
          std::string::string_from_cstr((int)str,msgText);
          ehDtorCount = ehDtorCount + 2;
          outOfRange[0] = &std::logic_error::vftable;
          unused25 = 0;
          unused39 = (int *)0x0;
          ehContext = 0xa4;
          if (str3[-3] == -1 || str3[-3] + 1 < 0) {
            len = str3[-1];
            newRep = std::string::__getRep(newStr,len,len);
            unused21 = newStr;
            newData2 = newRep + 3;
            unused20 = len;
            unused19 = str3;
            unused22 = newData2;
            unused39 = newData2;
            memcpy(newData2,str3,len);
          }
          else {
            unused23 = newStr;
            unused24 = str3;
            unused39 = str3;
            strRep3 = str3 + -3;
            if (strRep3 != &g_nullStringRep) {
              *strRep3 = *strRep3 + 1;
            }
          }
          ehContext = 0x98;
          outOfRange[0] = &std::out_of_range::vftable;
          ehDtorCount = ehDtorCount + 2;
          if (str3 != (int *)0x0) {
            if (str3[-3] != -1) {
              strRep2 = str3 + -3;
              if (strRep2 == &g_nullStringRep) {
                n = 1;
              }
              else if (strRep2 == &g_nullStringRep) {
                n = 1;
              }
              else {
                *strRep2 = *strRep2 + -1;
                n = *strRep2 + 1;
              }
              if (n != 0) goto LAB_00412b21;
            }
            unused18 = str3 + -3;
            unused17 = str3 + -3;
            operator_delete();
            unused16 = 0;
            unused15 = str;
            str3 = (int *)0x0;
          }
LAB_00412b21:
          ehContext = 0x5c;
          _ThrowExceptionLDTC((uint *)&DAT_0040604c,(undefined4*)outOfRange,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        available = leafData[-1] - pos;
        nul = 0;
        eraseLen = available;
        if (tailLen < available) {
          eraseLen = tailLen;
        }
        std::string::replace((int)leaf,pos,eraseLen,(uint)&nul,0,0,0);
      }
      else {
        std::string::replace_fill((int)leaf,leafData[-1],0,pos - leafData[-1],0);
      }
      if (leafData + -3 != &g_nullStringRep) {
        leafData[-3] = 0;
      }
    }
    negate = 0;
    ehContext = 0x44;
    while (leafData[-1] != 0) {
      if (1 < (int)(leafData[-3] + 1)) {
        std::string::__unshare((int)leaf);
      }
      if (leafData + -3 != &g_nullStringRep) {
        leafData[-3] = 0xffffffff;
      }
      ch = (char)*leafData;
      ehContext = 0x44;
      if ((opens == 0) || (ch != '(')) {
        if (ch == '!') {
          negate = negate ^ 8;
        }
        else if (ch != ' ') break;
      }
      else {
        nullEngine2 = 0;
        if (*(int *)(self + m_enginesEnd) == *(int *)(self + m_enginesCapacityEnd)) {
          std::vector_MatchEngine_ptr::insert_aux(self,*(undefined4 **)(self + m_enginesEnd),&nullEngine2);
        }
        else {
          slot = *(undefined4 **)(self + m_enginesEnd);
          *slot = 0;
          *(int *)(self + m_enginesEnd) = *(int *)(self + m_enginesEnd) + 4;
          unused14 = slot;
        }
        unused13 = negate | 4;
        opsRef = self + m_ops;
        std::string::replace_fill(opsRef,*(uint *)(*(int *)(self + m_opsData) + -4),0,1,negate | 4);
        depth = depth + 1;
        negate = 0;
        opens = opens + -1;
      }
      eraseLen2 = leafData[-1];
      nul2[0] = 0;
      if (1 < eraseLen2) {
        eraseLen2 = 1;
      }
      std::string::replace((int)leaf,0,eraseLen2,(uint)nul2,0,0,0);
    }
    newEngine = (int *)operator_new();
    if (newEngine != (int *)0x0) {
      ehContext = 0x110;
      MatchEngine::MatchEngine(newEngine);
    }
    ehContext = 0x44;
    engine = newEngine;
    MatchEngine::SetShortest((int)newEngine,shortest);
    MatchEngine::SetLongest((int)engine,longest);
    MatchEngine::Compile(engine,dictList,dictIndex,leafData,ignoreUnusedPunctuation);
    if (*(int *)(self + m_enginesEnd) == *(int *)(self + m_enginesCapacityEnd)) {
      std::vector_MatchEngine_ptr::insert_aux(self,*(undefined4 **)(self + m_enginesEnd),(undefined4*)&engine);
    }
    else {
      slot2 = *(undefined4 **)(self + m_enginesEnd);
      *slot2 = engine;
      *(int *)(self + m_enginesEnd) = *(int *)(self + m_enginesEnd) + 4;
      unused12 = slot2;
    }
    if (0x1f < depth) {
      depth = 0x10000;
    }
    depth = depth - trailingCloses;
    if (depth < 0) {
      depth = -0x10000;
    }
    for (; trailingCloses != 0; trailingCloses = trailingCloses + -1) {
      nullEngine = 0;
      if (*(int *)(self + m_enginesEnd) == *(int *)(self + m_enginesCapacityEnd)) {
        std::vector_MatchEngine_ptr::insert_aux(self,*(undefined4 **)(self + m_enginesEnd),&nullEngine);
      }
      else {
        slot3 = *(undefined4 **)(self + m_enginesEnd);
        *slot3 = 0;
        *(int *)(self + m_enginesEnd) = *(int *)(self + m_enginesEnd) + 4;
        unused11 = slot3;
      }
      unused10 = negate | 5;
      opsRef2 = self + m_ops;
      std::string::replace_fill(opsRef2,*(uint *)(*(int *)(self + m_opsData) + -4),0,1,negate | 5);
      negate = 0;
    }
    opByte = logicOp | negate;
    opsRef3 = self + m_ops;
    logicOp = opByte;
    std::string::replace_fill(opsRef3,*(uint *)(*(int *)(self + m_opsData) + -4),0,1,opByte);
    ehDtorCount = ehDtorCount + -1;
    if (leafData != (uint *)0x0) {
      if (leafData[-3] != 0xffffffff) {
        strRep = leafData + -3;
        if (strRep == &g_nullStringRep) {
          n = 1;
        }
        else if (strRep == &g_nullStringRep) {
          n = 1;
        }
        else {
          *strRep = *strRep - 1;
          n = *strRep + 1;
        }
        if (n != 0) goto LAB_004132c1;
      }
      unused9 = leafData + -3;
      unused8 = leafData + -3;
      operator_delete();
      unused7 = 0;
      unused6 = leaf;
      leafData = (uint *)0x0;
    }
LAB_004132c1:
    ehContext = 0;
    pos = start;
    if (opPos == (*(uint *)&g_stringNpos)) {
      if (depth < 1) {
        if (-1 < depth) {
          i = 0;
          while( true ) {
            n = *(int *)(self + m_enginesEnd) - *(int *)(self + m_enginesBegin);
            if (n < 0) {
              n = n + 3;
            }
            if ((uint)(n >> 2) <= i) break;
            unused5 = i;
            if (*(int *)(*(int *)(self + m_enginesBegin) + i * 4) != 0) {
              unused4 = i;
              n = MatchEngine::IsValid(*(int *)(*(int *)(self + m_enginesBegin) + i * 4));
              if (n == 0) {
                unused3 = i;
                status = MatchEngine::GetStatus(*(int *)(*(int *)(self + m_enginesBegin) + i * 4));
                *(undefined1 *)(self + m_status) = status;
                *sehChainHead = sehPrevFrame;
                return status;
              }
            }
            i = i + 1;
          }
          *(undefined1 *)(self + m_status) = 0;
          *sehChainHead = sehPrevFrame;
          return 0;
        }
        *(undefined1 *)(self + m_status) = 8;
        status = 8;
        *sehChainHead = sehPrevFrame;
      }
      else {
        *(undefined1 *)(self + m_status) = 7;
        status = 7;
        *sehChainHead = sehPrevFrame;
      }
      return status;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004133f0  std::logic_error::logic_error_copy   (236 bytes)   [analysis]
//   copy constructor of std::logic_error (copies the message string)
//   also: std::logic_error::logic_error [rtti:vtable-store]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::logic_error::logic_error_copy(undefined4 *self,int other)

{
  int refs;
  uint len;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42e6ec);
  *self = &std::exception::vftable;
  self[4] = 0;
  refs = *(int *)(*(int *)(other + 0x10) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(other + 0x10) + -4);
    rep = std::string::__getRep(self + 2,len,len);
    self[4] = rep + 3;
    memcpy((undefined4 *)self[4],*(undefined4 **)(other + 0x10),len);
  }
  else {
    self[4] = *(undefined4 *)(other + 0x10);
    rep = (int *)(self[4] + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  *self = &std::logic_error::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004134dc  std::vector_MatchEngine_ptr::insert_aux   (437 bytes, 2 ranges)   [analysis]
//   std::vector<MatchEngine *> insert at a position, growing the storage when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchEngine_ptr::insert_aux(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x42e450);
  storage = *(undefined4 **)(vec + 8);
  if (storage == *(undefined4 **)(vec + 0x18)) {
    newCapacity = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (newCapacity < 0) {
      newCapacity = newCapacity + 3;
    }
    if (newCapacity >> 2 == 0) {
      newCapacity = 0x100;
    }
    else {
      newCapacity = (newCapacity >> 2) * 2;
    }
    storage = (undefined4 *)operator_new();
    if (storage == (undefined4 *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_00404c94,(undefined4*)&badAlloc,0,&LAB_00404cec,1,0,0,0);
    }
    std::copy_ptr_4136d8(*(undefined4 **)(vec + 4),pos,storage);
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    storage[index >> 2] = *value;
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::copy_ptr_4136d8(pos,*(undefined4 **)(vec + 8),storage + (index >> 2) + 1);
    index = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::_Destroy_range_ptr(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity;
    *(undefined4 **)(vec + 8) = storage + (index >> 2) + 1;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    *storage = storage[-1];
    std::copy_backward_ptr_4136b4(pos,*(undefined4 **)(vec + 8) + -1,*(undefined4 **)(vec + 8));
    *pos = *value;
    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004136b4  std::copy_backward_ptr_4136b4   (36 bytes)   [analysis]
//   copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr_4136b4(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004136d8  std::copy_ptr_4136d8   (89 bytes, 2 ranges)   [analysis]
//   copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_4136d8(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42e490);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413758  std::_Destroy_range_ptr_413758   (22 bytes)   [analysis]
//   destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_413758(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413770  MatchEngineSet::SetWordLength   (146 bytes)   [analysis]
//   tells every leaf whose length range admits `length` the current word length; 0 when the query is a single leaf that cannot match that length
undefined4 __cdecl MatchEngineSet::SetWordLength(int self,int length)

{
  int minLength;
  int engine;
  uint count;
  uint i;
  undefined4 possible;
  
  possible = 1;
  engine = *(int *)(self + m_enginesEnd) - *(int *)(self + m_enginesBegin);
  if (engine < 0) {
    engine = engine + 3;
  }
  count = engine >> 2;
  i = 0;
  if (count != 0) {
    do {
      engine = *(int *)(*(int *)(self + m_enginesBegin) + i * 4);
      if (engine != 0) {
        minLength = MatchEngine::GetMinLength(engine);
        if (minLength <= length) {
          engine = MatchEngine::GetMaxLength(engine);
          if (length <= engine) {
            MatchEngine::SetWordLength(*(int *)(*(int *)(self + m_enginesBegin) + i * 4),length);
            goto LAB_004137f2;
          }
        }
        if (count == 1) {
          possible = 0;
        }
      }
LAB_004137f2:
      i = i + 1;
    } while (i < count);
  }
  return possible;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413804  MatchEngineSet::GetBalanceText   (1439 bytes)   [analysis]
//   for a single-leaf query, the anagram balance (" -XY+Z") with `prefix` inserted in front; empty otherwise
/* WARNING: Removing unreachable block (ram,0x00413834) */
/* WARNING: Removing unreachable block (ram,0x00413914) */
/* WARNING: Removing unreachable block (ram,0x004138c0) */
/* WARNING: Removing unreachable block (ram,0x00413907) */
/* WARNING: Removing unreachable block (ram,0x004139ab) */
/* WARNING: Removing unreachable block (ram,0x004139cf) */
/* WARNING: Removing unreachable block (ram,0x004139da) */
/* WARNING: Removing unreachable block (ram,0x004139fe) */
/* WARNING: Removing unreachable block (ram,0x004139e8) */
/* WARNING: Removing unreachable block (ram,0x004139f7) */
/* WARNING: Removing unreachable block (ram,0x004139f0) */
/* WARNING: Removing unreachable block (ram,0x00413a03) */
/* WARNING: Removing unreachable block (ram,0x00413a07) */
/* WARNING: Removing unreachable block (ram,0x00413a55) */
/* WARNING: Removing unreachable block (ram,0x00413a92) */
/* WARNING: Removing unreachable block (ram,0x00413b7a) */
/* WARNING: Removing unreachable block (ram,0x00413b26) */
/* WARNING: Removing unreachable block (ram,0x00413b6d) */
/* WARNING: Removing unreachable block (ram,0x00413c11) */
/* WARNING: Removing unreachable block (ram,0x00413c35) */
/* WARNING: Removing unreachable block (ram,0x00413c40) */
/* WARNING: Removing unreachable block (ram,0x00413c64) */
/* WARNING: Removing unreachable block (ram,0x00413c4e) */
/* WARNING: Removing unreachable block (ram,0x00413c5d) */
/* WARNING: Removing unreachable block (ram,0x00413c56) */
/* WARNING: Removing unreachable block (ram,0x00413c69) */
/* WARNING: Removing unreachable block (ram,0x00413c6d) */
/* WARNING: Removing unreachable block (ram,0x00413cbb) */
void __cdecl MatchEngineSet::GetBalanceText(int self,int prefix,int out)

{
  undefined4 *rep;
  int byteSize;
  uint len;
  undefined4 *sehChainHead;
  undefined1 nul;
  uint len2;
  uint len1;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42e4f8);
  if (*(int *)(*(int *)(out + 8) + -4) == 0) {
    std::string::replace_fill(out,*(uint *)(*(int *)(out + 8) + -4),0,
                 -*(int *)(*(int *)(out + 8) + -4),0);
  }
  else {
    len1 = *(uint *)(*(int *)(out + 8) + -4);
    len2 = *(uint *)(*(int *)(out + 8) + -4);
    nul = 0;
    len = len2;
    if (len1 < len2) {
      len = len1;
    }
    std::string::replace(out,0,len,(uint)&nul,0,0,0);
  }
  rep = (undefined4 *)(*(int *)(out + 8) + -0xc);
  if (rep != &g_nullStringRep) {
    *rep = 0;
  }
  byteSize = *(int *)(self + m_enginesEnd) - *(int *)(self + m_enginesBegin);
  if (byteSize < 0) {
    byteSize = byteSize + 3;
  }
  if ((byteSize >> 2 == 1) &&
     (MatchEngine::FormatBalance(**(int **)(self + m_enginesBegin),out), *(int *)(*(int *)(out + 8) + -4) != 0)) {
    std::string::insert(out,0,prefix);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413da4  MatchEngineSet::GetLengthRange   (115 bytes)   [analysis]
//   shortest and longest word length (1..100) the logic can accept, by evaluating it in length-check mode for each length; first = 101 when none
void __cdecl MatchEngineSet::GetLengthRange(int self,int *first,int *last)

{
  int byteSize;
  uint possible;
  byte *ops;
  int *engines;
  int length;
  
  *first = 0x65;
  *last = 0;
  length = 1;
  do {
    byteSize = *(int *)(self + m_enginesEnd) - *(int *)(self + m_enginesBegin);
    if (byteSize < 0) {
      byteSize = byteSize + 3;
    }
    if (byteSize >> 2 == 0) {
      engines = (int *)0x0;
    }
    else {
      engines = *(int **)(self + m_enginesBegin);
    }
    if (*(int *)(*(int *)(self + m_opsData) + -4) == 0) {
      ops = (byte *)0x0;
    }
    else {
      ops = *(byte **)(self + m_opsData);
    }
    possible = MatchEngineSet::EvalLogic('\x01',0,length,ops,engines);
    if (possible != 0) {
      if (*first == 0x65) {
        *first = length;
      }
      *last = length;
    }
    length = length + 1;
  } while (length < 0x65);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413e18  MatchEngineSet::Clear   (1613 bytes)   [analysis]
//   deletes every leaf engine and empties the logic opcodes
/* WARNING: Removing unreachable block (ram,0x00413f58) */
/* WARNING: Removing unreachable block (ram,0x0041403d) */
/* WARNING: Removing unreachable block (ram,0x00413fec) */
/* WARNING: Removing unreachable block (ram,0x00414033) */
/* WARNING: Removing unreachable block (ram,0x004140bc) */
/* WARNING: Removing unreachable block (ram,0x004140e0) */
/* WARNING: Removing unreachable block (ram,0x004140eb) */
/* WARNING: Removing unreachable block (ram,0x0041410f) */
/* WARNING: Removing unreachable block (ram,0x004140f9) */
/* WARNING: Removing unreachable block (ram,0x00414108) */
/* WARNING: Removing unreachable block (ram,0x00414101) */
/* WARNING: Removing unreachable block (ram,0x00414114) */
/* WARNING: Removing unreachable block (ram,0x00414118) */
/* WARNING: Removing unreachable block (ram,0x00414166) */
/* WARNING: Removing unreachable block (ram,0x00414199) */
/* WARNING: Removing unreachable block (ram,0x00414282) */
/* WARNING: Removing unreachable block (ram,0x0041422e) */
/* WARNING: Removing unreachable block (ram,0x00414275) */
/* WARNING: Removing unreachable block (ram,0x00414319) */
/* WARNING: Removing unreachable block (ram,0x0041433d) */
/* WARNING: Removing unreachable block (ram,0x00414348) */
/* WARNING: Removing unreachable block (ram,0x0041436c) */
/* WARNING: Removing unreachable block (ram,0x00414356) */
/* WARNING: Removing unreachable block (ram,0x00414365) */
/* WARNING: Removing unreachable block (ram,0x0041435e) */
/* WARNING: Removing unreachable block (ram,0x00414371) */
/* WARNING: Removing unreachable block (ram,0x00414375) */
/* WARNING: Removing unreachable block (ram,0x004143c3) */
void __cdecl MatchEngineSet::Clear(int self)

{
  undefined4 *rep;
  int engine;
  int prevRefs;
  uint i;
  undefined4 *sehChainHead;
  undefined1 nul;
  uint len2;
  uint len1;
  int unused;
  undefined4 unused2;
  int unused3;
  int unused4;
  int *strRep;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int engineObj;
  
  __InitExceptBlockLDTC(0x42e5d0);
  i = 0;
  do {
    engine = *(int *)(self + m_enginesEnd) - *(int *)(self + m_enginesBegin);
    if (engine < 0) {
      engine = engine + 3;
    }
    if ((uint)(engine >> 2) <= i) {
      std::vector_MatchEngine_ptr::resize(self,0);
      len1 = *(uint *)(*(int *)(self + m_opsData) + -4);
      if (len1 == 0) {
        std::string::replace_fill(self + m_ops,0,0,0,0);
      }
      else {
        len2 = *(uint *)(*(int *)(self + m_opsData) + -4);
        nul = 0;
        i = len2;
        if (len1 < len2) {
          i = len1;
        }
        std::string::replace(self + m_ops,0,i,(uint)&nul,0,0,0);
      }
      rep = (undefined4 *)(*(int *)(self + m_opsData) + -0xc);
      if (rep != &g_nullStringRep) {
        *rep = 0;
      }
      *sehChainHead = sehPrevFrame;
      return;
    }
    engine = *(int *)(i * 4 + *(int *)(self + m_enginesBegin));
    engineObj = engine;
    if (engine != 0) {
      ehContext = 0x14;
      ehDtorCount = ehDtorCount + -1;
      if (*(int *)(engine + 0x1010) != 0) {
        if (*(int *)(*(int *)(engine + 0x1010) + -0xc) != -1) {
          strRep = (int *)(*(int *)(engine + 0x1010) + -0xc);
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
          if (prevRefs != 0) goto LAB_00413ef7;
        }
        unused4 = *(int *)(engine + 0x1010) + -0xc;
        unused3 = *(int *)(engine + 0x1010) + -0xc;
        operator_delete();
        unused2 = 0;
        *(undefined4 *)(engine + 0x1010) = 0;
        unused = engine + 0x1008;
      }
LAB_00413ef7:
      ehDtorCount = ehDtorCount + -0x101;
      Pattern::_dtor(engineObj,2);
      operator_delete();
      ehContext = 8;
    }
    i = i + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00414468  std::vector_MatchEngine_ptr::resize   (157 bytes)   [analysis]
//   resize(n) with null pointers
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchEngine_ptr::resize(int vec,uint n)

{
  undefined4 *end;
  undefined4 *newEnd;
  int size;
  undefined4 *cut;
  int removed;
  undefined4 nullValue;
  
  size = *(int *)(vec + 8) - *(int *)(vec + 4);
  if (size < 0) {
    size = size + 3;
  }
  if ((uint)(size >> 2) < n) {
    nullValue = 0;
    size = (int)*(undefined4 **)(vec + 8) - *(int *)(vec + 4);
    if (size < 0) {
      size = size + 3;
    }
    std::vector_MatchEngine_ptr::insert_fill(vec,*(undefined4 **)(vec + 8),n - (size >> 2),&nullValue);
  }
  else {
    end = *(undefined4 **)(vec + 8);
    size = (int)end - *(int *)(vec + 4);
    if (size < 0) {
      size = size + 3;
    }
    if (n < (uint)(size >> 2)) {
      cut = (undefined4 *)(n * 4 + *(int *)(vec + 4));
      newEnd = std::copy_ptr_41484c(end,end,cut);
      size = *(int *)(vec + 8);
      removed = (int)end - (int)cut;
      if (removed < 0) {
        removed = removed + 3;
      }
      *(int *)(vec + 8) = *(int *)(vec + 8) + (removed >> 2) * -4;
      std::_Destroy_range_ptr(vec,(int)newEnd,size);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414508  std::vector_MatchEngine_ptr::insert_fill   (646 bytes, 2 ranges)   [analysis]
//   inserts n copies of a value at a position, growing the storage when needed
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::vector_MatchEngine_ptr::insert_fill(int vec,undefined4 *first,uint n,undefined4 *value)

{
  undefined4 *storage;
  int count;
  uint *growBy;
  undefined4 *sehChainHead;
  uint size;
  int newCapacity;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x42e698);
  if (n == 0) {
    *sehChainHead = sehPrevFrame;
  }
  else {
    storage = *(undefined4 **)(vec + 8);
    count = *(int *)(vec + 0x18) - (int)storage;
    if (count < 0) {
      count = count + 3;
    }
    if ((uint)(count >> 2) < n) {
      count = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      size = count >> 2;
      if (n < size) {
        growBy = &size;
      }
      else {
        growBy = &n;
      }
      newCapacity = size + *growBy;
      storage = (undefined4 *)operator_new();
      if (storage == (undefined4 *)0x0) {
        ehContext = 8;
        badAlloc = &std::bad_alloc::vftable;
        ehDtorCount = ehDtorCount + 2;
        _ThrowExceptionLDTC((uint *)&DAT_00404c94,(undefined4*)&badAlloc,0,&LAB_00404cec,1,0,0,0);
      }
      ehContext = 0x14;
      std::copy_ptr_4136d8(*(undefined4 **)(vec + 4),first,storage);
      count = (int)first - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::fill_n_ptr(storage + (count >> 2),n,value);
      count = (int)first - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::copy_ptr_4136d8(first,*(undefined4 **)(vec + 8),storage + (count >> 2) + n);
      ehContext = 0;
      count = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::_Destroy_range_ptr(vec,*(int *)(vec + 4),*(int *)(vec + 8));
      operator_delete();
      *(undefined4 **)(vec + 0x18) = storage + newCapacity;
      *(undefined4 **)(vec + 8) = storage + (count >> 2) + n;
      *(undefined4 **)(vec + 4) = storage;
    }
    else {
      count = (int)storage - (int)first;
      if (count < 0) {
        count = count + 3;
      }
      if (n < (uint)(count >> 2)) {
        std::copy_ptr_4136d8(storage + -n,storage,storage);
        *(int *)(vec + 8) = *(int *)(vec + 8) + n * 4;
        std::copy_backward_ptr_4136b4(first,storage + -n,storage);
        std::fill_ptr(first,first + n,value);
      }
      else {
        count = (int)storage - (int)first;
        if (count < 0) {
          count = count + 3;
        }
        count = n - (count >> 2);
        std::fill_n_ptr(storage,count,value);
        *(int *)(vec + 8) = *(int *)(vec + 8) + count * 4;
        std::copy_ptr_4136d8(first,storage,first + n);
        *(int *)(vec + 8) = *(int *)(vec + 8) + (n - count) * 4;
        std::fill_ptr(first,storage,value);
      }
    }
    *sehChainHead = sehPrevFrame;
  }
  return sehPrevFrame;
}

// ----------------------------------------------------------------------------------------------------
// 0x004147b0  std::fill_ptr   (31 bytes)   [analysis]
//   fill a range of pointers with a value
//   file placement: inferred (address adjacency)
void __cdecl std::fill_ptr(undefined4 *first,undefined4 *last,undefined4 *value)

{
  for (; last != first; first = first + 1) {
    *first = *value;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004147d0  std::fill_n_ptr   (85 bytes, 2 ranges)   [analysis]
//   fill n pointers with a value
//   file placement: inferred (address adjacency)
void __cdecl std::fill_n_ptr(undefined4 *first,int n,undefined4 *value)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42e6d8);
  while (n != 0) {
    *first = *value;
    n = n + -1;
    first = first + 1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041484c  std::copy_ptr_41484c   (36 bytes)   [analysis]
//   copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_41484c(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414870  CheckLicenseKey   (21 bytes)   [analysis]
//   CheckLicenseKeyImpl
//   file placement: inferred (address adjacency)
undefined4 __cdecl CheckLicenseKey(byte *owner,char *key)

{
  bool ok;
  undefined3 regHigh;
  
  ok = CheckLicenseKeyImpl(owner,key);
  return CONCAT31(regHigh,ok);
}

// ----------------------------------------------------------------------------------------------------
// 0x00414888  CheckLicenseKeyImpl   (374 bytes)   [analysis]
//   licence check: hashes "TEAWIN" and the letters of the owner name (upper-cased, last to first) with LicenseHashByte, then compares each derived letter with the 10-letter key
//   file placement: inferred (address adjacency)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
bool __cdecl CheckLicenseKeyImpl(byte *owner,char *key)

{
  int isLetter;
  uint ch;
  byte keyChar;
  byte *p;
  byte *q;
  char *keyAt;
  int letterCount;
  
  g_licenseHashHigh = 0;
  _DAT_00434694 = 0;
  for (p = PTR_s_TEAWIN_0042e708; *p != 0; p = p + 1) {
    LicenseHashByte(*p,&g_licenseHash,&g_licensePolynomial);
  }
  letterCount = 0;
  for (p = owner; *p != 0; p = p + 1) {
  }
  while (owner < p) {
    p = p + -1;
    keyChar = *p;
    ch = (uint)keyChar;
    isLetter = islower((uint)keyChar);
    if (isLetter != 0) {
      ch = toupper((uint)keyChar);
    }
    isLetter = isalnum(ch & 0xff);
    if (isLetter != 0) {
      letterCount = letterCount + 1;
      LicenseHashByte((byte)ch,&g_licenseHash,&g_licensePolynomial);
    }
  }
  p = owner;
  keyAt = key;
  if (0 < letterCount) {
    do {
      do {
        while (q = p, *q != 0) {
          p = q + 1;
        }
        p = owner;
      } while (q <= owner);
      do {
        q = q + -1;
        keyChar = *q;
        ch = (uint)keyChar;
        isLetter = islower((uint)keyChar);
        if (isLetter != 0) {
          ch = toupper((uint)keyChar);
        }
        isLetter = isalnum(ch & 0xff);
        if (isLetter != 0) {
          keyChar = (byte)((char)ch + -0x41 + (char)((ulonglong)g_licenseHashHigh % 0x1a)) % 0x1a + 0x41
          ;
          if (((uint)keyChar != (int)*keyAt) &&
             (ch = tolower((uint)keyChar), ch != (int)*keyAt)) {
            return false;
          }
          keyAt = keyAt + 1;
          LicenseHashByte(keyChar,&g_licenseHash,&g_licensePolynomial);
          if (keyAt == key + 10) {
            return *keyAt == '\0';
          }
        }
      } while (owner < q);
    } while( true );
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414a00  LicenseHashByte   (129 bytes)   [analysis]
//   feeds one byte into the 64-bit licence hash: shift left, XOR the polynomial when the outgoing bit differs from the input bit
//   file placement: inferred (address adjacency)
void __cdecl LicenseHashByte(byte input,byte *state,byte *polynomial)

{
  byte topByte;
  int k;
  byte *p;
  byte *q;
  uint carry;
  int bit;
  
  bit = 0;
  do {
    topByte = *state;
    carry = 0;
    k = 7;
    p = state + 7;
    do {
      carry = (uint)*p * 2 + (uint)(carry != 0);
      k = k + -1;
      *p = (byte)carry;
      p = p + -1;
      carry = carry & 0x100;
    } while (-1 < k);
    if (((topByte ^ input) & 0x80) != 0) {
      k = 0;
      p = polynomial;
      q = state;
      do {
        *q = *q ^ *p;
        k = k + 1;
        q = q + 1;
        p = p + 1;
      } while (k < 8);
    }
    input = input << 1;
    bit = bit + 1;
  } while (bit < 8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414a84  CheckLicenseKey2   (21 bytes)   [analysis]
//   CheckLicenseKeyImpl (second entry point)
//   file placement: inferred (address adjacency)
undefined4 __cdecl CheckLicenseKey2(byte *owner,char *key)

{
  bool ok;
  undefined3 regHigh;
  
  ok = CheckLicenseKeyImpl(owner,key);
  return CONCAT31(regHigh,ok);
}

// ----------------------------------------------------------------------------------------------------
// 0x00414a9c  CheckLicenseKey3   (21 bytes)   [analysis]
//   CheckLicenseKeyImpl (third entry point)
//   file placement: inferred (address adjacency)
undefined4 __cdecl CheckLicenseKey3(byte *owner,char *key)

{
  bool ok;
  undefined3 regHigh;
  
  ok = CheckLicenseKeyImpl(owner,key);
  return CONCAT31(regHigh,ok);
}

// ----------------------------------------------------------------------------------------------------
// 0x00414ab4  GetCommonIniPath   (784 bytes)   [analysis]
//   SHGetFolderPathA folder + subdirectory + "\common.ini" when that folder exists; empty otherwise
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00414afb) */
/* WARNING: Removing unreachable block (ram,0x00414b9f) */
/* WARNING: Removing unreachable block (ram,0x00414c60) */
/* WARNING: Removing unreachable block (ram,0x00414c28) */
/* WARNING: Removing unreachable block (ram,0x00414c59) */
/* WARNING: Removing unreachable block (ram,0x00414cbb) */
/* WARNING: Removing unreachable block (ram,0x00414cdf) */
/* WARNING: Removing unreachable block (ram,0x00414cea) */
/* WARNING: Removing unreachable block (ram,0x00414d0e) */
/* WARNING: Removing unreachable block (ram,0x00414cf8) */
/* WARNING: Removing unreachable block (ram,0x00414d07) */
/* WARNING: Removing unreachable block (ram,0x00414d00) */
/* WARNING: Removing unreachable block (ram,0x00414d13) */
/* WARNING: Removing unreachable block (ram,0x00414d17) */
/* WARNING: Removing unreachable block (ram,0x00414d65) */
int __cdecl GetCommonIniPath(int result,int subdir)

{
  uint len;
  int status;
  char *len2;
  uint clearLen;
  undefined4 *sehChainHead;
  uint folder [67];
  undefined4 unused;
  undefined1 nul [101];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x42e7a4);
  ehContext = 8;
  *(undefined4 *)(result + 8) = 0;
  *(undefined1 **)(result + 8) = &g_emptyStringData;
  unused = *(undefined4 *)(result + 8);
  ehDtorCount = ehDtorCount + 1;
  status = import_SHGetFolderPathA();
  if (status == 0) {
    std::string::assign_cstr(result,folder);
    std::string::append(result,subdir);
    status = thunk_access(*(LPCSTR *)(result + 8),0);
    if (status == 0) {
      len = *(uint *)(*(int *)(result + 8) + -4);
      len2 = strlen((uint *)"\\common.ini");
      std::string::replace(result,len,0,0x42e734,(uint)len2,0,(uint)len2);
    }
    else {
      len = *(uint *)(*(int *)(result + 8) + -4);
      nul[0] = 0;
      clearLen = (*(uint *)&g_stringNpos);
      if (len <= (*(uint *)&g_stringNpos)) {
        clearLen = len;
      }
      std::string::replace(result,0,clearLen,(uint)nul,0,0,0);
    }
  }
  *sehChainHead = sehPrevFrame;
  return result;
}

} // namespace tea
