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
  LONG LVar1;
  LPCSTR pCVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ec950);
  *param_1 = *(int *)(*(int *)(param_2 + 0xc) + param_3 * 4);
  param_1[3] = param_4;
  param_1[0x44] = 0;
  param_1[2] = *(int *)(*param_1 + 0x2408);
  pCVar2 = (LPCSTR)(**(code **)(*(int *)*param_1 + 0x18))();
  piVar3 = fopen(pCVar2,&DAT_004eb416);
  param_1[1] = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    setvbuf(piVar3,0,0,0x40000);
    LVar1 = *(LONG *)(*param_1 + 0x2404);
    param_1[0x44] = LVar1;
    iVar4 = fseek((int *)param_1[1],LVar1,0);
    if (iVar4 != 0) {
      FUN_004de7cc((int *)param_1[1]);
      param_1[1] = 0;
    }
  }
  iVar4 = *param_1;
  *param_5 = *(undefined4 *)(iVar4 + 0x2008);
  param_5[1] = *(undefined4 *)(iVar4 + 0x200c);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004108b8  TSDictionaryDefinitionSearchSequential::~TSDictionaryDefinitionSearchSequential   (41 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryDefinitionSearchSequential::_dtor
void __cdecl TSDictionaryDefinitionSearchSequential::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      FUN_004de7cc(*(int **)(param_1 + 4));
    }
    if ((param_2 & 1) != 0) {
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
  undefined3 extraout_var;
  uint *puVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 local_83c [1000];
  byte local_454 [1000];
  byte *local_6c;
  uint *local_68;
  int local_64;
  byte *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24;
  uint *local_20;
  uint *local_1c;
  undefined4 local_c;
  
  __InitExceptBlockLDTC(0x4ec990);
  if (param_1[1] == 0) {
LAB_00410cd8:
    if (param_2 < 0) {
      piVar5 = (int *)0x0;
      *in_FS_OFFSET = local_48;
    }
    else {
      *(undefined1 *)(param_1 + 4) = 0;
      piVar5 = param_1 + 4;
      *in_FS_OFFSET = local_48;
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
        pbVar6 = (byte *)*piVar5;
        *piVar5 = *piVar5 + 1;
        local_4c = (uint)*pbVar6;
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
                uVar8 = FUN_004df398((int *)param_1[1]);
              }
              else {
                piVar5 = (int *)param_1[1];
                pbVar6 = (byte *)*piVar5;
                *piVar5 = *piVar5 + 1;
                uVar8 = (uint)*pbVar6;
              }
              if ((uVar8 == 0xffffffff) || (uVar8 == 0xbd)) break;
              if (uVar7 < 0x7f) {
                uVar7 = uVar7 + 1;
                *local_6c = (byte)uVar8 ^ 0xbd;
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
      local_20 = (uint *)0x0;
      local_1c = (uint *)0x0;
      local_c = 0;
      local_58 = 0x100;
      local_5c = 1;
      local_24 = 0x100;
      local_2c = local_2c + 1;
      local_38 = 0x20;
      FUN_00479bd4(param_1[3],(int)&local_24);
      do {
        piVar5 = (int *)(param_1[1] + 8);
        *piVar5 = *piVar5 + -1;
        if (*piVar5 < 0) {
          uVar7 = FUN_004df398((int *)param_1[1]);
        }
        else {
          piVar5 = (int *)param_1[1];
          pbVar6 = (byte *)*piVar5;
          *piVar5 = *piVar5 + 1;
          uVar7 = (uint)*pbVar6;
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
            pbVar6 = (byte *)*piVar5;
            *piVar5 = *piVar5 + 1;
            uVar7 = (uint)*pbVar6;
          }
        }
        local_60 = local_454;
        local_454[0] = (byte)uVar7 ^ 0xbd;
        local_38 = 0x20;
        local_64 = 0;
        do {
          local_60 = local_60 + 1;
          local_83c[local_64] = (char)iVar3;
          local_64 = local_64 + 1;
          piVar5 = (int *)(param_1[1] + 8);
          *piVar5 = *piVar5 + -1;
          if (*piVar5 < 0) {
            uVar7 = FUN_004df398((int *)param_1[1]);
          }
          else {
            piVar5 = (int *)param_1[1];
            pbVar6 = (byte *)*piVar5;
            *piVar5 = *piVar5 + 1;
            uVar7 = (uint)*pbVar6;
          }
          if (uVar7 == 0xffffffff) goto LAB_00410c2a;
          *local_60 = (byte)uVar7 ^ 0xbd;
          iVar3 = *(int *)(*param_1 + 8 + (uVar7 ^ 0xbd) * 8);
        } while (((uVar7 != 0xbd) && (iVar3 < 0xff)) && (local_64 < 0x65));
        *local_60 = 0;
        local_83c[local_64] = 0xff;
        local_38 = 0x20;
        for (local_68 = local_20; local_68 < local_1c; local_68 = local_68 + 1) {
          uVar8 = *local_68;
          if (((1 < uVar8) && (iVar3 = MatchEngine::GetMinLength(uVar8), iVar3 <= local_64)) &&
             (iVar3 = MatchEngine::GetMaxLength(uVar8), local_64 <= iVar3)) {
            MatchEngine::SetWordLength(uVar8,local_64);
            bVar1 = MatchEngine::MatchWord(uVar8,(int)local_83c);
            if (CONCAT31(extraout_var,bVar1) != 0) {
              *local_68 = 1;
              for (puVar4 = local_20; (puVar4 < local_1c && (*puVar4 < 2)); puVar4 = puVar4 + 1) {
              }
              if (puVar4 == local_1c) {
                do {
                  if (uVar7 == 0xbd) break;
                  piVar5 = (int *)(param_1[1] + 8);
                  *piVar5 = *piVar5 + -1;
                  if (*piVar5 < 0) {
                    uVar7 = FUN_004df398((int *)param_1[1]);
                  }
                  else {
                    piVar5 = (int *)param_1[1];
                    pbVar6 = (byte *)*piVar5;
                    *piVar5 = *piVar5 + 1;
                    uVar7 = (uint)*pbVar6;
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
      pbVar6 = (byte *)0x0;
    }
    else {
      pbVar6 = *(byte **)(param_1[3] + 0x28);
    }
    uVar8 = MatchEngineSet::EvalLogic(0,0,0,pbVar6,(int *)local_20);
    if (uVar8 != 0) {
      piVar5 = param_1 + 4;
      local_2c = local_2c + -1;
      FUN_00410d88(&local_24,(int)local_20,(int)local_1c);
      operator_delete();
      *in_FS_OFFSET = local_48;
      return piVar5;
    }
  }
  local_2c = local_2c + -1;
  FUN_00410d88(&local_24,(int)local_20,(int)local_1c);
  operator_delete();
  local_38 = 0;
  goto LAB_00410cc1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410d88  FUN_00410d88   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00410d88(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410da0  FUN_00410da0   (60 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00410da0(int *param_1,int *param_2,int *param_3)

{
  *param_3 = 0;
  *param_2 = 0;
  if (*param_1 != 0) {
    *param_2 = param_1[0x44] - *(int *)(*param_1 + 0x2404);
    *param_3 = *(int *)(*param_1 + 0x2408) - *(int *)(*param_1 + 0x2404);
  }
  return;
}

} // namespace tea
