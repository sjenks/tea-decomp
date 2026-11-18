// TEA.exe — application module "MatchEngineSet"
// 27 functions, 0x00477d64..0x0047ab30. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00477d64  MatchEngineSet::~MatchEngineSet   (243 bytes)   [rtti:dtor destructor]
//   written in code as MatchEngineSet::_dtor
void __cdecl MatchEngineSet::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5008c0);
  if (self == 0) goto LAB_00477e46;
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
      if (prevRefs != 0) goto LAB_00477e0c;
    }
    operator_delete();
    *(undefined4 *)(self + m_opsData) = 0;
  }
LAB_00477e0c:
  std::_Destroy_range_ptr_45f0c4(self,*(int *)(self + m_enginesBegin),*(int *)(self + m_enginesEnd));
  operator_delete();
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00477e46:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477e58  MatchEngineSet::Compile   (5016 bytes)   [notes+analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). Splits the query on & | ! ( ) and compiles one MatchEngine per leaf
/* WARNING: Removing unreachable block (ram,0x00477ea7) */
/* WARNING: Removing unreachable block (ram,0x00477f84) */
/* WARNING: Removing unreachable block (ram,0x00477f30) */
/* WARNING: Removing unreachable block (ram,0x00477f77) */
/* WARNING: Removing unreachable block (ram,0x0047801b) */
/* WARNING: Removing unreachable block (ram,0x00478034) */
/* WARNING: Removing unreachable block (ram,0x0047803f) */
/* WARNING: Removing unreachable block (ram,0x00478063) */
/* WARNING: Removing unreachable block (ram,0x0047804d) */
/* WARNING: Removing unreachable block (ram,0x0047805c) */
/* WARNING: Removing unreachable block (ram,0x00478055) */
/* WARNING: Removing unreachable block (ram,0x00478068) */
/* WARNING: Removing unreachable block (ram,0x0047806c) */
/* WARNING: Removing unreachable block (ram,0x004780ba) */
/* WARNING: Removing unreachable block (ram,0x00478b0d) */
/* WARNING: Removing unreachable block (ram,0x00478c0e) */
/* WARNING: Removing unreachable block (ram,0x00478bae) */
/* WARNING: Removing unreachable block (ram,0x00478c01) */
/* WARNING: Removing unreachable block (ram,0x00478cb7) */
/* WARNING: Removing unreachable block (ram,0x00478ce1) */
/* WARNING: Removing unreachable block (ram,0x00478cef) */
/* WARNING: Removing unreachable block (ram,0x00478d16) */
/* WARNING: Removing unreachable block (ram,0x00478d00) */
/* WARNING: Removing unreachable block (ram,0x00478d0f) */
/* WARNING: Removing unreachable block (ram,0x00478d08) */
/* WARNING: Removing unreachable block (ram,0x00478d1b) */
/* WARNING: Removing unreachable block (ram,0x00478d1f) */
/* WARNING: Removing unreachable block (ram,0x00478d79) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl MatchEngineSet::Compile(int self,int dictList,int dictIndex,int query,int shortest,int longest,int ignoreUnusedPunctuation)

{
  char ch;
  int iVar2;
  undefined4 uVar3;
  uint opPos;
  uint pos;
  undefined4 *sehChainHead;
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
  
  __InitExceptBlockLDTC(0x5009c8);
  MatchEngineSet::Clear(self);
  depth = 0;
  start = 0;
  opPos = start;
  do {
    while( true ) {
      pos = g_stringNpos;
      searchPos = opPos;
      if (opPos <= *(uint *)(*(int *)(query + 8) + -4)) {
        rest = (char *)(*(int *)(query + 8) + opPos);
        iVar2 = strcspn(rest,&DAT_005007e4);
        opPos2 = iVar2 + searchPos;
        pos = opPos2;
        if (*(uint *)(*(int *)(query + 8) + -4) <= opPos2) {
          pos = g_stringNpos;
        }
      }
      if (((pos == 0xffffffff) || (pos == 0)) ||
         (prevPos = pos - 1, *(char *)(*(int *)(query + 8) + prevPos) != '\\')) break;
      opPos = pos + 1;
    }
    ehContext = 0x50;
    if (pos == 0xffffffff) {
      opPos = 0xffffffff;
    }
    else {
      opPos = pos - start;
    }
    std::string::substr((int)leaf,query,start,opPos);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x44;
    logicOp = 3;
    if (pos != 0xffffffff) {
      if (*(char *)(*(int *)(query + 8) + pos) == '&') {
        logicOp = 2;
      }
      else {
        logicOp = 1;
      }
      start = pos + 1;
      unused38 = pos;
    }
    notDepth = 0;
    opens = 0;
    closes = 0;
    for (opPos = 0; opPos < leafData[-1]; opPos = opPos + 1) {
      if (opPos == 0) {
LAB_0047825b:
        idx = opPos;
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
        prevIdx = opPos - 1;
        if (1 < (int)(leafData[-3] + 1)) {
          std::string::__unshare((int)leaf);
        }
        strRep9 = leafData + -3;
        if (strRep9 != &g_nullStringRep) {
          *strRep9 = 0xffffffff;
        }
        if (*(char *)((int)leafData + prevIdx) != '\\') goto LAB_0047825b;
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
    while (opPos = leafData[-1], opPos != 0) {
      lastPos = opPos - 1;
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
LAB_00478435:
        if (lastCh != ' ') break;
      }
      else {
        if (opPos != 1) {
          beforeLast = opPos - 2;
          if (1 < (int)(leafData[-3] + 1)) {
            std::string::__unshare((int)leaf);
          }
          strRep6 = leafData + -3;
          if (strRep6 != &g_nullStringRep) {
            *strRep6 = 0xffffffff;
          }
          if (*(char *)((int)leafData + beforeLast) == '\\') goto LAB_00478435;
        }
        trailingCloses = trailingCloses + 1;
        closes = closes + -1;
      }
      opPos = opPos - 1;
      if (g_stringNpos - 0xe < opPos) {
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_00408370;
        uVar3 = 0;
        ehContext = 0x68;
        msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00516d20);
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
              iVar2 = 1;
            }
            else if (strRep4 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *strRep4 = *strRep4 + -1;
              iVar2 = *strRep4 + 1;
            }
            if (iVar2 != 0) goto LAB_0047869c;
          }
          unused29 = str4 + -3;
          unused28 = str4 + -3;
          operator_delete();
          unused27 = 0;
          unused26 = str2;
          str4 = (int *)0x0;
          unused = 0;
        }
LAB_0047869c:
        ehContext = 0x5c;
        _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,uVar3,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if (opPos < leafData[-1]) {
        tailLen = leafData[-1] - opPos;
        if (leafData[-1] < opPos) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_004084c8;
          uVar3 = 0;
          ehContext = 0x98;
          msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00516d2c
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
                iVar2 = 1;
              }
              else if (strRep2 == &g_nullStringRep) {
                iVar2 = 1;
              }
              else {
                *strRep2 = *strRep2 + -1;
                iVar2 = *strRep2 + 1;
              }
              if (iVar2 != 0) goto LAB_00478921;
            }
            unused18 = str3 + -3;
            unused17 = str3 + -3;
            operator_delete();
            unused16 = 0;
            unused15 = str;
            str3 = (int *)0x0;
          }
LAB_00478921:
          ehContext = 0x5c;
          _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,uVar3,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        available = leafData[-1] - opPos;
        nul = 0;
        eraseLen = available;
        if (tailLen < available) {
          eraseLen = tailLen;
        }
        std::string::replace((int)leaf,opPos,eraseLen,(uint)&nul,0,0,0);
      }
      else {
        std::string::replace_fill((int)leaf,leafData[-1],0,opPos - leafData[-1],0);
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
          std::vector_MatchEngine_ptr::insert_aux_4791f0(self,*(undefined4 **)(self + m_enginesEnd),&nullEngine2);
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
      std::vector_MatchEngine_ptr::insert_aux_4791f0(self,*(undefined4 **)(self + m_enginesEnd),(undefined4*)&engine);
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
        std::vector_MatchEngine_ptr::insert_aux_4791f0(self,*(undefined4 **)(self + m_enginesEnd),&nullEngine);
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
          iVar2 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar2 = 1;
        }
        else {
          *strRep = *strRep - 1;
          iVar2 = *strRep + 1;
        }
        if (iVar2 != 0) goto LAB_004790c1;
      }
      unused9 = leafData + -3;
      unused8 = leafData + -3;
      operator_delete();
      unused7 = 0;
      unused6 = leaf;
      leafData = (uint *)0x0;
    }
LAB_004790c1:
    ehContext = 0;
    opPos = start;
    if (pos == 0xffffffff) {
      if (depth < 1) {
        if (-1 < depth) {
          i = 0;
          while( true ) {
            iVar2 = *(int *)(self + m_enginesEnd) - *(int *)(self + m_enginesBegin);
            if (iVar2 < 0) {
              iVar2 = iVar2 + 3;
            }
            if ((uint)(iVar2 >> 2) <= i) break;
            unused5 = i;
            if (*(int *)(*(int *)(self + m_enginesBegin) + i * 4) != 0) {
              unused4 = i;
              iVar2 = MatchEngine::IsValid(*(int *)(*(int *)(self + m_enginesBegin) + i * 4));
              if (iVar2 == 0) {
                unused3 = i;
                uVar3 = MatchEngine::GetStatus(*(int *)(*(int *)(self + m_enginesBegin) + i * 4));
                *(undefined4 *)(self + m_status) = uVar3;
                *sehChainHead = sehPrevFrame;
                return uVar3;
              }
            }
            i = i + 1;
          }
          *(undefined4 *)(self + m_status) = 0;
          *sehChainHead = sehPrevFrame;
          return 0;
        }
        *(undefined4 *)(self + m_status) = 8;
        uVar3 = 8;
        *sehChainHead = sehPrevFrame;
      }
      else {
        *(undefined4 *)(self + m_status) = 7;
        uVar3 = 7;
        *sehChainHead = sehPrevFrame;
      }
      return uVar3;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004791f0  std::vector_MatchEngine_ptr::insert_aux_4791f0   (437 bytes, 2 ranges)   [analysis]
//   std::vector<MatchEngine *> insert at a position, growing the storage when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchEngine_ptr::insert_aux_4791f0(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x500b20);
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
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    std::copy_ptr_4793ec(*(undefined4 **)(vec + 4),pos,storage);
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    storage[index >> 2] = *value;
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::copy_ptr_4793ec(pos,*(undefined4 **)(vec + 8),storage + (index >> 2) + 1);
    index = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::_Destroy_range_ptr_45f0c4(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity;
    *(undefined4 **)(vec + 8) = storage + (index >> 2) + 1;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    *storage = storage[-1];
    std::copy_backward_ptr_4793c8(pos,*(undefined4 **)(vec + 8) + -1,*(undefined4 **)(vec + 8));
    *pos = *value;
    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004793c8  std::copy_backward_ptr_4793c8   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063a8 (36 bytes; the code occurs several times, e.g. one template instance per type). copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr_4793c8(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004793ec  std::copy_ptr_4793ec   (89 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063cc (89 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_4793ec(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x500b60);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047946c  std::_Destroy_range_ptr_47946c   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040644c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_47946c(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479484  MatchEngineSet::SetWordLength   (146 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00413770. tells every leaf whose length range admits `length` the current word length; 0 when the query is a single leaf that cannot match that length
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
            goto LAB_00479506;
          }
        }
        if (count == 1) {
          possible = 0;
        }
      }
LAB_00479506:
      i = i + 1;
    } while (i < count);
  }
  return possible;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479518  MatchEngineSet::GetBalanceText   (1439 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00413804. for a single-leaf query, the anagram balance (" -XY+Z") with `prefix` inserted in front; empty otherwise
/* WARNING: Removing unreachable block (ram,0x00479548) */
/* WARNING: Removing unreachable block (ram,0x00479628) */
/* WARNING: Removing unreachable block (ram,0x004795d4) */
/* WARNING: Removing unreachable block (ram,0x0047961b) */
/* WARNING: Removing unreachable block (ram,0x004796bf) */
/* WARNING: Removing unreachable block (ram,0x004796e3) */
/* WARNING: Removing unreachable block (ram,0x004796ee) */
/* WARNING: Removing unreachable block (ram,0x00479712) */
/* WARNING: Removing unreachable block (ram,0x004796fc) */
/* WARNING: Removing unreachable block (ram,0x0047970b) */
/* WARNING: Removing unreachable block (ram,0x00479704) */
/* WARNING: Removing unreachable block (ram,0x00479717) */
/* WARNING: Removing unreachable block (ram,0x0047971b) */
/* WARNING: Removing unreachable block (ram,0x00479769) */
/* WARNING: Removing unreachable block (ram,0x004797a6) */
/* WARNING: Removing unreachable block (ram,0x0047988e) */
/* WARNING: Removing unreachable block (ram,0x0047983a) */
/* WARNING: Removing unreachable block (ram,0x00479881) */
/* WARNING: Removing unreachable block (ram,0x00479925) */
/* WARNING: Removing unreachable block (ram,0x00479949) */
/* WARNING: Removing unreachable block (ram,0x00479954) */
/* WARNING: Removing unreachable block (ram,0x00479978) */
/* WARNING: Removing unreachable block (ram,0x00479962) */
/* WARNING: Removing unreachable block (ram,0x00479971) */
/* WARNING: Removing unreachable block (ram,0x0047996a) */
/* WARNING: Removing unreachable block (ram,0x0047997d) */
/* WARNING: Removing unreachable block (ram,0x00479981) */
/* WARNING: Removing unreachable block (ram,0x004799cf) */
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
  
  __InitExceptBlockLDTC(0x500bc8);
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
// 0x00479ab8  MatchEngineSet::SetLengthLimits   (80 bytes)   [analysis]
//   passes the shortest/longest settings to every leaf
void __cdecl MatchEngineSet::SetLengthLimits(int self,int shortest,int longest)

{
  int matchEngine;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    matchEngine = *(int *)(self + m_enginesEnd) - *(int *)(self + m_enginesBegin);
    if (matchEngine < 0) {
      matchEngine = matchEngine + 3;
    }
    if ((uint)(matchEngine >> 2) <= uVar2) break;
    matchEngine = *(int *)(uVar2 * 4 + *(int *)(self + m_enginesBegin));
    if (matchEngine != 0) {
      MatchEngine::SetShortest(matchEngine,shortest);
      MatchEngine::SetLongest(matchEngine,longest);
    }
    uVar2 = uVar2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479b08  MatchEngineSet::GetLengthRange   (115 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00413da4. shortest and longest word length (1..100) the logic can accept, by evaluating it in length-check mode for each length; first = 101 when none
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
    possible = MatchEngineSet::EvalLogic(1,0,length,ops,engines);
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
// 0x00479b7c  MatchEngineSet::GetLengthKindSum   (87 bytes)   [analysis]
//   sum of the leaves' length kinds (negative: list longest first)
undefined4 __cdecl MatchEngineSet::GetLengthKindSum(int self)

{
  int matchEngine;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  uVar3 = 0;
  while( true ) {
    matchEngine = *(int *)(self + m_enginesEnd) - *(int *)(self + m_enginesBegin);
    if (matchEngine < 0) {
      matchEngine = matchEngine + 3;
    }
    if ((uint)(matchEngine >> 2) <= uVar3) break;
    matchEngine = *(int *)(uVar3 * 4 + *(int *)(self + m_enginesBegin));
    if (matchEngine != 0) {
      matchEngine = MatchEngine::GetLengthKind(matchEngine);
      local_8 = local_8 + matchEngine;
    }
    uVar3 = uVar3 + 1;
  }
  if (local_8 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479bd4  MatchEngineSet::CopyEngines   (61 bytes)   [analysis]
//   copies the leaf engine pointers into a vector
void __cdecl MatchEngineSet::CopyEngines(int self,int vec)

{
  int iVar1;
  
  iVar1 = *(int *)(self + m_enginesEnd) - *(int *)(self + m_enginesBegin);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  std::vector_MatchEngine_ptr::resize_479c14(vec,iVar1 >> 2);
  std::copy_ptr_47a0d8(*(undefined4 **)(self + m_enginesBegin),*(undefined4 **)(self + m_enginesEnd),
               *(undefined4 **)(vec + 4));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479c14  std::vector_MatchEngine_ptr::resize_479c14   (157 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00414468 (157 bytes; the code occurs several times, e.g. one template instance per type). resize(n) with null pointers
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchEngine_ptr::resize_479c14(int vec,uint n)

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
    std::vector_MatchEngine_ptr::insert_fill_479cb4(vec,*(undefined4 **)(vec + 8),n - (size >> 2),&nullValue);
  }
  else {
    end = *(undefined4 **)(vec + 8);
    size = (int)end - *(int *)(vec + 4);
    if (size < 0) {
      size = size + 3;
    }
    if (n < (uint)(size >> 2)) {
      cut = (undefined4 *)(n * 4 + *(int *)(vec + 4));
      newEnd = std::copy_ptr_47a0b4(end,end,cut);
      size = *(int *)(vec + 8);
      removed = (int)end - (int)cut;
      if (removed < 0) {
        removed = removed + 3;
      }
      *(int *)(vec + 8) = *(int *)(vec + 8) + (removed >> 2) * -4;
      std::_Destroy_range_ptr_410d88(vec,(int)newEnd,size);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479cb4  std::vector_MatchEngine_ptr::insert_fill_479cb4   (646 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00414508 (646 bytes; the code occurs several times, e.g. one template instance per type). inserts n copies of a value at a position, growing the storage when needed
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::vector_MatchEngine_ptr::insert_fill_479cb4(int vec,undefined4 *first,uint n,undefined4 *value)

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
  
  __InitExceptBlockLDTC(0x500c6c);
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
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
      }
      ehContext = 0x14;
      std::copy_ptr_479f5c(*(undefined4 **)(vec + 4),first,storage);
      count = (int)first - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::fill_n_ptr_47a038(storage + (count >> 2),n,value);
      count = (int)first - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::copy_ptr_479f5c(first,*(undefined4 **)(vec + 8),storage + (count >> 2) + n);
      ehContext = 0;
      count = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::_Destroy_range_ptr_410d88(vec,*(int *)(vec + 4),*(int *)(vec + 8));
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
        std::copy_ptr_479f5c(storage + -n,storage,storage);
        *(int *)(vec + 8) = *(int *)(vec + 8) + n * 4;
        std::copy_backward_ptr_479ff4(first,storage + -n,storage);
        std::fill_ptr_47a018(first,first + n,value);
      }
      else {
        count = (int)storage - (int)first;
        if (count < 0) {
          count = count + 3;
        }
        count = n - (count >> 2);
        std::fill_n_ptr_47a038(storage,count,value);
        *(int *)(vec + 8) = *(int *)(vec + 8) + count * 4;
        std::copy_ptr_479f5c(first,storage,first + n);
        *(int *)(vec + 8) = *(int *)(vec + 8) + (n - count) * 4;
        std::fill_ptr_47a018(first,storage,value);
      }
    }
    *sehChainHead = sehPrevFrame;
  }
  return sehPrevFrame;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479f5c  std::copy_ptr_479f5c   (89 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063cc (89 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_479f5c(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x500cac);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479fdc  std::_Destroy_range_ptr_479fdc   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040644c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_479fdc(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479ff4  std::copy_backward_ptr_479ff4   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063a8 (36 bytes; the code occurs several times, e.g. one template instance per type). copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr_479ff4(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a018  std::fill_ptr_47a018   (31 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004147b0 (31 bytes; the code occurs several times, e.g. one template instance per type). fill a range of pointers with a value
//   file placement: inferred (address adjacency)
void __cdecl std::fill_ptr_47a018(undefined4 *first,undefined4 *last,undefined4 *value)

{
  for (; last != first; first = first + 1) {
    *first = *value;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a038  std::fill_n_ptr_47a038   (85 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004147d0 (85 bytes; the code occurs several times, e.g. one template instance per type). fill n pointers with a value
//   file placement: inferred (address adjacency)
void __cdecl std::fill_n_ptr_47a038(undefined4 *first,int n,undefined4 *value)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x500ce0);
  while (n != 0) {
    *first = *value;
    n = n + -1;
    first = first + 1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a0b4  std::copy_ptr_47a0b4   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00406584 (36 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers (vector erase)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_47a0b4(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a0d8  std::copy_ptr_47a0d8   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00406584 (36 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers (vector erase)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_47a0d8(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a0fc  MatchEngineSet::Clear   (1613 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00413e18. deletes every leaf engine and empties the logic opcodes
/* WARNING: Removing unreachable block (ram,0x0047a23c) */
/* WARNING: Removing unreachable block (ram,0x0047a321) */
/* WARNING: Removing unreachable block (ram,0x0047a2d0) */
/* WARNING: Removing unreachable block (ram,0x0047a317) */
/* WARNING: Removing unreachable block (ram,0x0047a3a0) */
/* WARNING: Removing unreachable block (ram,0x0047a3c4) */
/* WARNING: Removing unreachable block (ram,0x0047a3cf) */
/* WARNING: Removing unreachable block (ram,0x0047a3f3) */
/* WARNING: Removing unreachable block (ram,0x0047a3dd) */
/* WARNING: Removing unreachable block (ram,0x0047a3ec) */
/* WARNING: Removing unreachable block (ram,0x0047a3e5) */
/* WARNING: Removing unreachable block (ram,0x0047a3f8) */
/* WARNING: Removing unreachable block (ram,0x0047a3fc) */
/* WARNING: Removing unreachable block (ram,0x0047a44a) */
/* WARNING: Removing unreachable block (ram,0x0047a47d) */
/* WARNING: Removing unreachable block (ram,0x0047a566) */
/* WARNING: Removing unreachable block (ram,0x0047a512) */
/* WARNING: Removing unreachable block (ram,0x0047a559) */
/* WARNING: Removing unreachable block (ram,0x0047a5fd) */
/* WARNING: Removing unreachable block (ram,0x0047a621) */
/* WARNING: Removing unreachable block (ram,0x0047a62c) */
/* WARNING: Removing unreachable block (ram,0x0047a650) */
/* WARNING: Removing unreachable block (ram,0x0047a63a) */
/* WARNING: Removing unreachable block (ram,0x0047a649) */
/* WARNING: Removing unreachable block (ram,0x0047a642) */
/* WARNING: Removing unreachable block (ram,0x0047a655) */
/* WARNING: Removing unreachable block (ram,0x0047a659) */
/* WARNING: Removing unreachable block (ram,0x0047a6a7) */
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
  
  __InitExceptBlockLDTC(0x500d58);
  i = 0;
  do {
    engine = *(int *)(self + m_enginesEnd) - *(int *)(self + m_enginesBegin);
    if (engine < 0) {
      engine = engine + 3;
    }
    if ((uint)(engine >> 2) <= i) {
      std::vector_MatchEngine_ptr::resize_47a74c(self,0);
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
          if (prevRefs != 0) goto LAB_0047a1db;
        }
        unused4 = *(int *)(engine + 0x1010) + -0xc;
        unused3 = *(int *)(engine + 0x1010) + -0xc;
        operator_delete();
        unused2 = 0;
        *(undefined4 *)(engine + 0x1010) = 0;
        unused = engine + 0x1008;
      }
LAB_0047a1db:
      ehDtorCount = ehDtorCount + -0x101;
      Pattern::_dtor(engineObj,2);
      operator_delete();
      ehContext = 8;
    }
    i = i + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a74c  std::vector_MatchEngine_ptr::resize_47a74c   (157 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00414468 (157 bytes; the code occurs several times, e.g. one template instance per type). resize(n) with null pointers
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchEngine_ptr::resize_47a74c(int vec,uint n)

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
    std::vector_MatchEngine_ptr::insert_fill_47a7ec(vec,*(undefined4 **)(vec + 8),n - (size >> 2),&nullValue);
  }
  else {
    end = *(undefined4 **)(vec + 8);
    size = (int)end - *(int *)(vec + 4);
    if (size < 0) {
      size = size + 3;
    }
    if (n < (uint)(size >> 2)) {
      cut = (undefined4 *)(n * 4 + *(int *)(vec + 4));
      newEnd = std::copy_ptr_47ab30(end,end,cut);
      size = *(int *)(vec + 8);
      removed = (int)end - (int)cut;
      if (removed < 0) {
        removed = removed + 3;
      }
      *(int *)(vec + 8) = *(int *)(vec + 8) + (removed >> 2) * -4;
      std::_Destroy_range_ptr_45f0c4(vec,(int)newEnd,size);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a7ec  std::vector_MatchEngine_ptr::insert_fill_47a7ec   (646 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00414508 (646 bytes; the code occurs several times, e.g. one template instance per type). inserts n copies of a value at a position, growing the storage when needed
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::vector_MatchEngine_ptr::insert_fill_47a7ec(int vec,undefined4 *first,uint n,undefined4 *value)

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
  
  __InitExceptBlockLDTC(0x500e20);
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
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
      }
      ehContext = 0x14;
      std::copy_ptr_4793ec(*(undefined4 **)(vec + 4),first,storage);
      count = (int)first - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::fill_n_ptr_47aab4(storage + (count >> 2),n,value);
      count = (int)first - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::copy_ptr_4793ec(first,*(undefined4 **)(vec + 8),storage + (count >> 2) + n);
      ehContext = 0;
      count = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::_Destroy_range_ptr_45f0c4(vec,*(int *)(vec + 4),*(int *)(vec + 8));
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
        std::copy_ptr_4793ec(storage + -n,storage,storage);
        *(int *)(vec + 8) = *(int *)(vec + 8) + n * 4;
        std::copy_backward_ptr_4793c8(first,storage + -n,storage);
        std::fill_ptr_47aa94(first,first + n,value);
      }
      else {
        count = (int)storage - (int)first;
        if (count < 0) {
          count = count + 3;
        }
        count = n - (count >> 2);
        std::fill_n_ptr_47aab4(storage,count,value);
        *(int *)(vec + 8) = *(int *)(vec + 8) + count * 4;
        std::copy_ptr_4793ec(first,storage,first + n);
        *(int *)(vec + 8) = *(int *)(vec + 8) + (n - count) * 4;
        std::fill_ptr_47aa94(first,storage,value);
      }
    }
    *sehChainHead = sehPrevFrame;
  }
  return sehPrevFrame;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047aa94  std::fill_ptr_47aa94   (31 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004147b0 (31 bytes; the code occurs several times, e.g. one template instance per type). fill a range of pointers with a value
//   file placement: inferred (address adjacency)
void __cdecl std::fill_ptr_47aa94(undefined4 *first,undefined4 *last,undefined4 *value)

{
  for (; last != first; first = first + 1) {
    *first = *value;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047aab4  std::fill_n_ptr_47aab4   (85 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004147d0 (85 bytes; the code occurs several times, e.g. one template instance per type). fill n pointers with a value
//   file placement: inferred (address adjacency)
void __cdecl std::fill_n_ptr_47aab4(undefined4 *first,int n,undefined4 *value)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x500e60);
  while (n != 0) {
    *first = *value;
    n = n + -1;
    first = first + 1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047ab30  std::copy_ptr_47ab30   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00406584 (36 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers (vector erase)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_47ab30(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  return dest;
}

} // namespace tea
