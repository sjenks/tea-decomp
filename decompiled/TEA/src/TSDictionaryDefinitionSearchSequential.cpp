// TEA.exe — application module "TSDictionaryDefinitionSearchSequential"
// 5 functions, 0x00410788..0x00410da0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00410788  TSDictionaryDefinitionSearchSequential::TSDictionaryDefinitionSearchSequential   (247 bytes)   [notes+analysis]
//   constructor: opens the file, sets a 0x40000-byte stream buffer and seeks to the start of the definition section
int * __cdecl TSDictionaryDefinitionSearchSequential::TSDictionaryDefinitionSearchSequential(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  LONG lDistanceToMove;
  LPCSTR fileName;
  int *piVar3;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ec950);
  *param_1 = *(int *)(*(int *)(param_2 + 0xc) + param_3 * 4);
  param_1[3] = param_4;
  param_1[0x44] = 0;
  param_1[2] = *(int *)(*param_1 + 0x2408);
  fileName = (LPCSTR)(**(code **)(*(int *)*param_1 + 0x18))();
  piVar3 = fopen(fileName,&DAT_004eb416);
  param_1[1] = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    setvbuf(piVar3,0,0,0x40000);
    lDistanceToMove = *(LONG *)(*param_1 + 0x2404);
    param_1[0x44] = lDistanceToMove;
    iVar4 = fseek((int *)param_1[1],lDistanceToMove,0);
    if (iVar4 != 0) {
      FUN_004de7cc((int *)param_1[1]);
      param_1[1] = 0;
    }
  }
  iVar4 = *param_1;
  *param_5 = *(undefined4 *)(iVar4 + 0x2008);
  param_5[1] = *(undefined4 *)(iVar4 + 0x200c);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004108b8  TSDictionaryDefinitionSearchSequential::~TSDictionaryDefinitionSearchSequential   (41 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryDefinitionSearchSequential::_dtor
void __cdecl TSDictionaryDefinitionSearchSequential::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    if (*(int **)(self + 4) != (int *)0x0) {
      FUN_004de7cc(*(int **)(self + 4));
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004108e4  TSDictionaryDefinitionSearchSequential::Next   (1054 bytes, 2 ranges)   [notes]
//   sequential record scan with on-the-fly tokenising per your notes. Entry checked; body not read
/* WARNING: Removing unreachable block (ram,0x00410a2d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffa8 : 0x00410a35 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl TSDictionaryDefinitionSearchSequential::Next(int *param_1,int param_2)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  undefined3 regHigh;
  uint *i;
  int *piVar5;
  byte *ops;
  uint uVar7;
  uint matchEngine;
  undefined4 *sehChainHead;
  undefined1 wordBuf [1000];
  byte local_454 [1000];
  byte *local_6c;
  uint *j;
  int length;
  byte *local_60;
  undefined4 unused;
  undefined4 unused2;
  int *local_54;
  int local_50;
  uint local_4c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 vec;
  uint *first;
  uint *last;
  undefined4 unused3;
  
  __InitExceptBlockLDTC(0x4ec990);
  if (param_1[1] == 0) {
LAB_00410cd8:
    if (param_2 < 0) {
      piVar5 = (int *)0x0;
      *sehChainHead = sehPrevFrame;
    }
    else {
      *(undefined1 *)(param_1 + 4) = 0;
      piVar5 = param_1 + 4;
      *sehChainHead = sehPrevFrame;
    }
    return piVar5;
  }
  uVar7 = 0xbd;
LAB_00410cc1:
  if ((uVar7 == 0xbd) && (iVar3 = param_2 + -1, bVar1 = 0 < param_2, param_2 = iVar3, bVar1)) {
    DVar2 = FUN_004dee3c((undefined4 *)param_1[1]);
    param_1[0x44] = DVar2;
    if ((int)DVar2 < param_1[2]) {
      piVar5 = (int *)(param_1[1] + 8);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 < 0) {
        local_4c = FUN_004df398((int *)param_1[1]);
      }
      else {
        piVar5 = (int *)param_1[1];
        ops = (byte *)*piVar5;
        *piVar5 = *piVar5 + 1;
        local_4c = (uint)*ops;
      }
      if (local_4c != 0xffffffff) {
        local_4c = local_4c * 2;
        local_50 = 0;
        if (0 < (int)local_4c) {
          do {
            if (local_50 == 0) {
              local_54 = param_1 + 4;
            }
            else if (local_50 == 1) {
              local_54 = param_1 + 0x24;
            }
            else {
              local_54 = (int *)0x0;
            }
            if (local_54 == (int *)0x0) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = 0;
            }
            local_6c = (byte *)((int)local_54 + uVar7);
            while( true ) {
              piVar5 = (int *)(param_1[1] + 8);
              *piVar5 = *piVar5 + -1;
              if (*piVar5 < 0) {
                matchEngine = FUN_004df398((int *)param_1[1]);
              }
              else {
                piVar5 = (int *)param_1[1];
                ops = (byte *)*piVar5;
                *piVar5 = *piVar5 + 1;
                matchEngine = (uint)*ops;
              }
              if ((matchEngine == 0xffffffff) || (matchEngine == 0xbd)) break;
              if (uVar7 < 0x7f) {
                uVar7 = uVar7 + 1;
                *local_6c = (byte)matchEngine ^ 0xbd;
                local_6c = local_6c + 1;
              }
            }
            if (uVar7 < 0x80) {
              *(undefined1 *)((int)local_54 + uVar7) = 0;
            }
            local_50 = local_50 + 1;
          } while (local_50 < (int)local_4c);
        }
      }
      first = (uint *)0x0;
      last = (uint *)0x0;
      unused3 = 0;
      unused2 = 0x100;
      unused = 1;
      vec = 0x100;
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0x20;
      MatchEngineSet::CopyEngines(param_1[3],(int)&vec);
      do {
        piVar5 = (int *)(param_1[1] + 8);
        *piVar5 = *piVar5 + -1;
        if (*piVar5 < 0) {
          uVar7 = FUN_004df398((int *)param_1[1]);
        }
        else {
          piVar5 = (int *)param_1[1];
          ops = (byte *)*piVar5;
          *piVar5 = *piVar5 + 1;
          uVar7 = (uint)*ops;
        }
        while( true ) {
          if ((uVar7 == 0xffffffff) || (uVar7 == 0xbd)) goto LAB_00410c2a;
          iVar3 = *(int *)(*param_1 + 8 + (uVar7 ^ 0xbd) * 8);
          if (iVar3 < 0xff) break;
          piVar5 = (int *)(param_1[1] + 8);
          *piVar5 = *piVar5 + -1;
          if (*piVar5 < 0) {
            uVar7 = FUN_004df398((int *)param_1[1]);
          }
          else {
            piVar5 = (int *)param_1[1];
            ops = (byte *)*piVar5;
            *piVar5 = *piVar5 + 1;
            uVar7 = (uint)*ops;
          }
        }
        local_60 = local_454;
        local_454[0] = (byte)uVar7 ^ 0xbd;
        ehContext = 0x20;
        length = 0;
        do {
          local_60 = local_60 + 1;
          wordBuf[length] = (char)iVar3;
          length = length + 1;
          piVar5 = (int *)(param_1[1] + 8);
          *piVar5 = *piVar5 + -1;
          if (*piVar5 < 0) {
            uVar7 = FUN_004df398((int *)param_1[1]);
          }
          else {
            piVar5 = (int *)param_1[1];
            ops = (byte *)*piVar5;
            *piVar5 = *piVar5 + 1;
            uVar7 = (uint)*ops;
          }
          if (uVar7 == 0xffffffff) goto LAB_00410c2a;
          *local_60 = (byte)uVar7 ^ 0xbd;
          iVar3 = *(int *)(*param_1 + 8 + (uVar7 ^ 0xbd) * 8);
        } while (((uVar7 != 0xbd) && (iVar3 < 0xff)) && (length < 0x65));
        *local_60 = 0;
        wordBuf[length] = 0xff;
        ehContext = 0x20;
        for (j = first; j < last; j = j + 1) {
          matchEngine = *j;
          if (((1 < matchEngine) && (iVar3 = MatchEngine::GetMinLength(matchEngine), iVar3 <= length)) &&
             (iVar3 = MatchEngine::GetMaxLength(matchEngine), length <= iVar3)) {
            MatchEngine::SetWordLength(matchEngine,length);
            bVar1 = MatchEngine::MatchWord(matchEngine,(int)wordBuf);
            if (CONCAT31(regHigh,bVar1) != 0) {
              *j = 1;
              for (i = first; (i < last && (*i < 2)); i = i + 1) {
              }
              if (i == last) {
                do {
                  if (uVar7 == 0xbd) break;
                  piVar5 = (int *)(param_1[1] + 8);
                  *piVar5 = *piVar5 + -1;
                  if (*piVar5 < 0) {
                    uVar7 = FUN_004df398((int *)param_1[1]);
                  }
                  else {
                    piVar5 = (int *)param_1[1];
                    ops = (byte *)*piVar5;
                    *piVar5 = *piVar5 + 1;
                    uVar7 = (uint)*ops;
                  }
                } while (uVar7 != 0xffffffff);
              }
            }
          }
        }
        FUN_004e0538(uVar7,(uint *)param_1[1]);
      } while( true );
    }
  }
  goto LAB_00410cd8;
LAB_00410c2a:
  if (uVar7 == 0xbd) {
    if (*(int *)(*(int *)(param_1[3] + 0x28) + -4) == 0) {
      ops = (byte *)0x0;
    }
    else {
      ops = *(byte **)(param_1[3] + 0x28);
    }
    matchEngine = MatchEngineSet::EvalLogic(0,0,0,ops,(int *)first);
    if (matchEngine != 0) {
      piVar5 = param_1 + 4;
      ehDtorCount = ehDtorCount + -1;
      std::_Destroy_range_ptr_410d88(&vec,(int)first,(int)last);
      operator_delete();
      *sehChainHead = sehPrevFrame;
      return piVar5;
    }
  }
  ehDtorCount = ehDtorCount + -1;
  std::_Destroy_range_ptr_410d88(&vec,(int)first,(int)last);
  operator_delete();
  ehContext = 0;
  goto LAB_00410cc1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410d88  std::_Destroy_range_ptr_410d88   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004050b4 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_410d88(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410da0  TSDictionaryDefinitionSearchSequential::GetRange   (60 bytes)   [analysis]
//   the definition offsets found (begin and end)
void __cdecl TSDictionaryDefinitionSearchSequential::GetRange(int *self,int *first,int *last)

{
  *last = 0;
  *first = 0;
  if (*self != 0) {
    *first = self[0x44] - *(int *)(*self + 0x2404);
    *last = *(int *)(*self + 0x2408) - *(int *)(*self + 0x2404);
  }
  return;
}

} // namespace tea
