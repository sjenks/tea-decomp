// TSBuild.exe — application module "OccurrenceListCache"
// 88 functions, 0x00405ff4..0x00414a7c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00405ff4  OccurrenceListCache::~OccurrenceListCache   (316 bytes)   [rtti:dtor destructor]
//   written in code as OccurrenceListCache::_dtor
void __cdecl OccurrenceListCache::_dtor(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [8];
  int local_38;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x475418);
  local_c = 1;
  if (param_1 != 0) {
    local_18 = 8;
    for (local_2c = 0; local_2c < (uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38);
        local_2c = local_2c + 1) {
      local_30 = *(int *)(param_1 + 4) + local_2c * 0x38;
      local_18 = 8;
      local_38 = *(int *)(*(int *)(local_30 + 0x24) + 8);
      while( true ) {
        if (*(int *)(local_30 + 0x24) == local_38) break;
        iVar1 = *(int *)(local_38 + 0x20);
        if (iVar1 != 0) {
          FUN_004061b8(iVar1,*(int *)(iVar1 + 4),*(int *)(iVar1 + 8));
          operator_delete();
          local_18 = 8;
          operator_delete();
        }
        FUN_00406154((int)local_40);
      }
    }
    local_c = local_c + -1;
    FUN_004061d0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406154  FUN_00406154   (99 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00406154(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0xc) == 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 8) + 4); *(int *)(param_1 + 8) == *(int *)(iVar1 + 0xc)
        ; iVar1 = *(int *)(iVar1 + 4)) {
      *(int *)(param_1 + 8) = iVar1;
    }
    if (iVar1 != *(int *)(*(int *)(param_1 + 8) + 0xc)) {
      *(int *)(param_1 + 8) = iVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
    while (*(int *)(*(int *)(param_1 + 8) + 8) != 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004061b8  FUN_004061b8   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004061b8(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004061d0  FUN_004061d0   (176 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004061d0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff94;
  undefined4 in_stack_ffffff98;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  __InitExceptBlockLDTC(0x475454);
  iVar2 = param_2;
  while (local_8 = iVar2, local_8 != param_3) {
    iVar2 = local_8 + 0x38;
    if (local_8 != 0) {
      local_1c = 0x14;
      local_10 = local_10 + -2;
      if (*(int *)(local_8 + 0x24) != 0) {
        local_30 = *(undefined4 *)(local_8 + 0x24);
        FUN_004062a0(local_40,local_8,in_stack_ffffff94,in_stack_ffffff98,
                     *(int *)(*(int *)(local_8 + 0x24) + 8));
        iVar1 = *(int *)(local_8 + 0x24);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(local_8 + 0x18);
        *(int *)(local_8 + 0x18) = iVar1;
        FUN_00406ec8(local_8);
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004062a0  FUN_004062a0   (258 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004062a0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000024;
  undefined4 local_54 [4];
  undefined4 local_44 [6];
  int local_2c;
  int local_1c;
  undefined4 local_14 [4];
  
  local_14[2] = *(undefined4 *)(param_2 + 0x24);
  iVar3 = *(int *)(param_2 + 0x24);
  local_1c = *(int *)(iVar3 + 8);
  if (((local_1c == param_5) && (local_2c = iVar3, iVar3 == in_stack_00000024)) &&
     (*(int *)(param_2 + 0x28) != 0)) {
    FUN_004063a4(param_2,*(int *)(iVar3 + 4));
    iVar3 = *(int *)(param_2 + 0x24);
    *(int *)(iVar3 + 8) = iVar3;
    *(undefined4 *)(iVar3 + 4) = 0;
    *(int *)(iVar3 + 0xc) = iVar3;
    *(undefined4 *)(param_2 + 0x28) = 0;
    local_44[2] = *(undefined4 *)(param_2 + 0x24);
    puVar4 = local_44;
    puVar5 = local_14;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    while (iVar3 = param_5, uVar2 = param_4, uVar1 = param_3, param_5 != in_stack_00000024) {
      FUN_00406154((int)&param_3);
      FUN_004064dc(local_54,param_2,uVar1,uVar2,iVar3);
      puVar4 = local_54;
      puVar5 = local_14;
      for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004063a4  FUN_004063a4   (262 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004063a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x475490);
  do {
    if (param_2 == 0) {
      *in_FS_OFFSET = local_2c;
      return;
    }
    FUN_004063a4(param_1,*(int *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    if ((param_2 != -0x10) && (*(int *)(param_2 + 0x18) != 0)) {
      if (*(int *)(*(int *)(param_2 + 0x18) + -0xc) != -1) {
        piVar3 = (int *)(*(int *)(param_2 + 0x18) + -0xc);
        if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_00406483;
      }
      operator_delete();
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
LAB_00406483:
    *(int *)(param_1 + 0x18) = param_2;
    param_2 = iVar1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004064dc  FUN_004064dc   (2455 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004064dc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_9c;
  int local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int local_88;
  int *local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  char local_35;
  int *local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int *local_8;
  
  __InitExceptBlockLDTC(0x4754cc);
  local_b4 = param_3;
  local_b0 = param_4;
  local_ac = param_5;
  local_30 = *(int *)(param_2 + 0x24);
  if (local_30 != param_5) {
    FUN_00406154((int)&local_b4);
  }
  FUN_00406e78((undefined4*)&local_34,param_5);
  local_35 = '\0';
  local_3c = local_34 + 2;
  piVar2 = local_34;
  if (*local_3c == 0) {
    local_40 = local_34 + 3;
    if (*local_40 == 0) {
      piVar4 = (int *)local_34[1];
      local_44 = local_34;
      local_48 = local_34[1];
      if (*(int *)(param_2 + 0x24) == local_48) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_48;
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_48;
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_48 + 8) == local_34) {
        *(undefined4 *)(local_48 + 8) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_34) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_48;
        }
      }
      else {
        *(undefined4 *)(local_48 + 0xc) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_34) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_48;
        }
      }
      local_35 = '\x01';
    }
    else {
      piVar4 = (int *)local_34[3];
    }
  }
  else {
    local_4c = local_34 + 3;
    if (*local_4c == 0) {
      piVar4 = (int *)local_34[2];
    }
    else {
      for (piVar2 = (int *)local_34[3]; piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      }
      piVar4 = (int *)piVar2[3];
    }
  }
  if ((local_35 == '\0') && (piVar2 != local_34)) {
    *(int **)(local_34[2] + 4) = piVar2;
    piVar2[2] = local_34[2];
    if (piVar2 == (int *)local_34[3]) {
      if (piVar4 != (int *)0x0) {
        piVar4[1] = (int)piVar2;
      }
    }
    else {
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar2[1];
      }
      *(int **)(piVar2[1] + 8) = piVar4;
      piVar2[3] = local_34[3];
      *(int **)(local_34[3] + 4) = piVar2;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_34) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar2;
    }
    else if (*(int **)(local_34[1] + 8) == local_34) {
      *(int **)(local_34[1] + 8) = piVar2;
    }
    else {
      *(int **)(local_34[1] + 0xc) = piVar2;
    }
    piVar2[1] = local_34[1];
    if (piVar4 == (int *)0x0) {
      piVar4 = piVar2;
    }
    local_50 = local_34;
    local_58 = *piVar2;
    *piVar2 = *local_34;
    *local_34 = local_58;
    local_8c = local_34;
    local_54 = piVar2;
  }
  else {
    local_8c = piVar2;
    if (local_35 == '\0') {
      piVar4[1] = piVar2[1];
      if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_34) {
        *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar4;
      }
      else if (*(int **)(local_34[1] + 8) == local_34) {
        *(int **)(local_34[1] + 8) = piVar4;
      }
      else {
        *(int **)(local_34[1] + 0xc) = piVar4;
      }
      if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_34) {
        local_5c = local_34 + 3;
        if (*local_5c == 0) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_34[1];
        }
        else {
          uVar1 = FUN_00406e88((int)piVar4);
          *(undefined4 *)(*(int *)(param_2 + 0x24) + 8) = uVar1;
        }
      }
      if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_34) {
        local_60 = local_34 + 2;
        if (*local_60 == 0) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_34[1];
        }
        else {
          uVar1 = FUN_00406ea8((int)piVar4);
          *(undefined4 *)(*(int *)(param_2 + 0x24) + 0xc) = uVar1;
        }
      }
    }
  }
  if ((piVar4 != *(int **)(param_2 + 0x24)) && (*local_8c != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) || (*piVar4 != 1))
            goto LAB_00406d2e;
            if (piVar4 != *(int **)(piVar4[1] + 8)) break;
            piVar2 = *(int **)(piVar4[1] + 0xc);
            if (piVar2 == (int *)0x0) {
              *piVar4 = 0;
              piVar4 = (int *)piVar4[1];
            }
            else {
              if (*piVar2 == 0) {
                *piVar2 = 1;
                *(undefined4 *)piVar4[1] = 0;
                iVar3 = piVar4[1];
                local_64 = *(int *)(iVar3 + 0xc);
                *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_64 + 8);
                if (*(int *)(local_64 + 8) != 0) {
                  *(int *)(*(int *)(local_64 + 8) + 4) = iVar3;
                }
                *(undefined4 *)(local_64 + 4) = *(undefined4 *)(iVar3 + 4);
                if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                  *(int *)(*(int *)(param_2 + 0x24) + 4) = local_64;
                }
                else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                  *(int *)(*(int *)(iVar3 + 4) + 8) = local_64;
                }
                else {
                  *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_64;
                }
                *(int *)(local_64 + 8) = iVar3;
                *(int *)(iVar3 + 4) = local_64;
                piVar2 = *(int **)(piVar4[1] + 0xc);
              }
              if (piVar2 == (int *)0x0) {
                *piVar4 = 0;
                piVar4 = (int *)piVar4[1];
              }
              else {
                if (((piVar2[2] != 0) && (*(int *)piVar2[2] != 1)) ||
                   ((piVar2[3] != 0 && (*(int *)piVar2[3] != 1)))) {
                  if ((piVar2[3] == 0) || (*(int *)piVar2[3] == 1)) {
                    if (piVar2[2] != 0) {
                      *(undefined4 *)piVar2[2] = 1;
                    }
                    *piVar2 = 0;
                    local_68 = piVar2[2];
                    piVar2[2] = *(int *)(local_68 + 0xc);
                    local_6c = (int *)(local_68 + 0xc);
                    if (*local_6c != 0) {
                      *(int **)(*(int *)(local_68 + 0xc) + 4) = piVar2;
                    }
                    *(int *)(local_68 + 4) = piVar2[1];
                    if (piVar2 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = local_68;
                    }
                    else if (piVar2 == *(int **)(piVar2[1] + 0xc)) {
                      *(int *)(piVar2[1] + 0xc) = local_68;
                    }
                    else {
                      *(int *)(piVar2[1] + 8) = local_68;
                    }
                    *(int **)(local_68 + 0xc) = piVar2;
                    piVar2[1] = local_68;
                    piVar2 = *(int **)(piVar4[1] + 0xc);
                  }
                  if (piVar2 != (int *)0x0) {
                    *piVar2 = *(int *)piVar4[1];
                    *(undefined4 *)piVar4[1] = 1;
                    if (piVar2[3] != 0) {
                      *(undefined4 *)piVar2[3] = 1;
                    }
                    iVar3 = piVar4[1];
                    local_70 = *(int *)(iVar3 + 0xc);
                    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_70 + 8);
                    if (*(int *)(local_70 + 8) != 0) {
                      *(int *)(*(int *)(local_70 + 8) + 4) = iVar3;
                    }
                    *(undefined4 *)(local_70 + 4) = *(undefined4 *)(iVar3 + 4);
                    if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = local_70;
                    }
                    else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                      *(int *)(*(int *)(iVar3 + 4) + 8) = local_70;
                    }
                    else {
                      *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_70;
                    }
                    *(int *)(local_70 + 8) = iVar3;
                    *(int *)(iVar3 + 4) = local_70;
                  }
                  goto LAB_00406d2e;
                }
                *piVar2 = 0;
                piVar4 = (int *)piVar4[1];
              }
            }
          }
          piVar2 = *(int **)(piVar4[1] + 8);
          if (piVar2 != (int *)0x0) break;
          *piVar4 = 0;
          piVar4 = (int *)piVar4[1];
        }
        if (*piVar2 == 0) {
          *piVar2 = 1;
          *(undefined4 *)piVar4[1] = 0;
          iVar3 = piVar4[1];
          local_74 = *(int *)(iVar3 + 8);
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_74 + 0xc);
          local_78 = (int *)(local_74 + 0xc);
          if (*local_78 != 0) {
            *(int *)(*(int *)(local_74 + 0xc) + 4) = iVar3;
          }
          *(undefined4 *)(local_74 + 4) = *(undefined4 *)(iVar3 + 4);
          if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
            *(int *)(*(int *)(param_2 + 0x24) + 4) = local_74;
          }
          else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_74;
          }
          else {
            *(int *)(*(int *)(iVar3 + 4) + 8) = local_74;
          }
          *(int *)(local_74 + 0xc) = iVar3;
          *(int *)(iVar3 + 4) = local_74;
          piVar2 = *(int **)(piVar4[1] + 8);
        }
        if (piVar2 != (int *)0x0) break;
        *piVar4 = 0;
        piVar4 = (int *)piVar4[1];
      }
      if (((piVar2[3] != 0) && (*(int *)piVar2[3] != 1)) ||
         ((piVar2[2] != 0 && (*(int *)piVar2[2] != 1)))) break;
      *piVar2 = 0;
      piVar4 = (int *)piVar4[1];
    }
    if ((piVar2[2] == 0) || (*(int *)piVar2[2] == 1)) {
      local_7c = piVar2 + 3;
      if (*local_7c != 0) {
        *(undefined4 *)piVar2[3] = 1;
      }
      *piVar2 = 0;
      local_80 = piVar2[3];
      piVar2[3] = *(int *)(local_80 + 8);
      local_84 = (int *)(local_80 + 8);
      if (*local_84 != 0) {
        *(int **)(*(int *)(local_80 + 8) + 4) = piVar2;
      }
      *(int *)(local_80 + 4) = piVar2[1];
      if (piVar2 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = local_80;
      }
      else if (piVar2 == *(int **)(piVar2[1] + 8)) {
        *(int *)(piVar2[1] + 8) = local_80;
      }
      else {
        *(int *)(piVar2[1] + 0xc) = local_80;
      }
      *(int **)(local_80 + 8) = piVar2;
      piVar2[1] = local_80;
      piVar2 = *(int **)(piVar4[1] + 8);
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = *(int *)piVar4[1];
      *(undefined4 *)piVar4[1] = 1;
      if (piVar2[2] != 0) {
        *(undefined4 *)piVar2[2] = 1;
      }
      iVar3 = piVar4[1];
      local_88 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_88 + 0xc);
      if (*(int *)(local_88 + 0xc) != 0) {
        *(int *)(*(int *)(local_88 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(local_88 + 4) = *(undefined4 *)(iVar3 + 4);
      if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = local_88;
      }
      else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_88;
      }
      else {
        *(int *)(*(int *)(iVar3 + 4) + 8) = local_88;
      }
      *(int *)(local_88 + 0xc) = iVar3;
      *(int *)(iVar3 + 4) = local_88;
    }
LAB_00406d2e:
    *piVar4 = 1;
  }
  local_8c[3] = *(int *)(param_2 + 0x18);
  local_90 = local_8c + 4;
  if (local_90 != (int *)0x0) {
    local_1c = 0x14;
    local_10 = local_10 + -2;
    if (local_8c[6] != 0) {
      if (*(int *)(local_8c[6] + -0xc) != -1) {
        local_94 = (int *)(local_8c[6] + -0xc);
        if (local_94 == &DAT_00485bcc) {
          iVar3 = 1;
        }
        else if (local_94 == &DAT_00485bcc) {
          iVar3 = 1;
        }
        else {
          *local_94 = *local_94 + -1;
          iVar3 = *local_94 + 1;
        }
        if (iVar3 != 0) goto LAB_00406e38;
      }
      local_98 = local_8c[6] + -0xc;
      local_9c = local_8c[6] + -0xc;
      local_8 = local_90;
      operator_delete();
      local_8[2] = 0;
    }
  }
LAB_00406e38:
  *(int **)(param_2 + 0x18) = local_8c;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = local_b4;
  param_1[1] = local_b0;
  param_1[2] = local_ac;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406e78  FUN_00406e78   (13 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00406e78(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406e88  FUN_00406e88   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00406e88(int param_1)

{
  for (; *(int *)(param_1 + 8) != 0; param_1 = *(int *)(param_1 + 8)) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406ea8  FUN_00406ea8   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00406ea8(int param_1)

{
  for (; *(int *)(param_1 + 0xc) != 0; param_1 = *(int *)(param_1 + 0xc)) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406ec8  FUN_00406ec8   (63 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00406ec8(int param_1)

{
  while (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x10);
    operator_delete();
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406f08  FUN_00406f08   (27608 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040a86d) */
/* WARNING: Removing unreachable block (ram,0x004082db) */
/* WARNING: Removing unreachable block (ram,0x004075e2) */
/* WARNING: Removing unreachable block (ram,0x0040960c) */
/* WARNING: Removing unreachable block (ram,0x0040c495) */
/* WARNING: Removing unreachable block (ram,0x0040c0ae) */
/* WARNING: Removing unreachable block (ram,0x0040a707) */
/* WARNING: Removing unreachable block (ram,0x00408b42) */
/* WARNING: Removing unreachable block (ram,0x00408c46) */
/* WARNING: Removing unreachable block (ram,0x00408be6) */
/* WARNING: Removing unreachable block (ram,0x00408c39) */
/* WARNING: Removing unreachable block (ram,0x00408cef) */
/* WARNING: Removing unreachable block (ram,0x00408d19) */
/* WARNING: Removing unreachable block (ram,0x00408d27) */
/* WARNING: Removing unreachable block (ram,0x00408d6a) */
/* WARNING: Removing unreachable block (ram,0x00408d43) */
/* WARNING: Removing unreachable block (ram,0x00408d63) */
/* WARNING: Removing unreachable block (ram,0x00408d50) */
/* WARNING: Removing unreachable block (ram,0x00408d6f) */
/* WARNING: Removing unreachable block (ram,0x00408d73) */
/* WARNING: Removing unreachable block (ram,0x00408dcd) */
/* WARNING: Removing unreachable block (ram,0x0040729d) */
/* WARNING: Removing unreachable block (ram,0x00407077) */
/* WARNING: Removing unreachable block (ram,0x00407036) */
/* WARNING: Removing unreachable block (ram,0x0040725c) */
/* WARNING: Removing unreachable block (ram,0x0040a0d6) */
/* WARNING: Removing unreachable block (ram,0x0040a117) */
/* WARNING: Removing unreachable block (ram,0x0040c8c7) */
/* WARNING: Removing unreachable block (ram,0x0040a766) */
/* WARNING: Removing unreachable block (ram,0x0040cccf) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffff514 : 0x0040c8d5 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __stdcall FUN_00406f08(int *param_1,int param_2,LPCSTR param_3,uint *param_4,int param_5,int param_6, int param_7,int param_8)

{
  byte *pbVar1;
  DWORD DVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *in_FS_OFFSET;
  bool bVar13;
  byte bVar14;
  longdouble in_ST0;
  undefined1 auStackY_5da60 [1032];
  undefined4 uStackY_5d658;
  byte *pbStackY_5d648;
  byte *pbStackY_5d638;
  undefined4 uStackY_5d630;
  undefined4 uStackY_5d62c;
  int iStackY_5d628;
  undefined4 uStackY_5d620;
  undefined4 uStackY_5d61c;
  int iStackY_5d618;
  int iStackY_5d608;
  undefined4 uStackY_5d600;
  undefined4 uStackY_5d5fc;
  int iStackY_5d5f8;
  int iStackY_5d5e8;
  int iStackY_5d5d8;
  undefined4 uStackY_5d5d0;
  undefined4 uStackY_5d5cc;
  int iStackY_5d5c8;
  undefined4 auStackY_5d5c0 [3];
  undefined4 uStackY_5d5b4;
  undefined4 uStackY_5d5b0;
  int iStackY_5d5ac;
  undefined4 uStackY_5d5a4;
  undefined4 uStackY_5d5a0;
  int iStackY_5d59c;
  int iStackY_5d58c;
  undefined4 uStackY_5d584;
  undefined4 uStackY_5d580;
  int iStackY_5d57c;
  undefined4 uStackY_5d56c;
  undefined4 auStackY_5d564 [4];
  undefined4 uStackY_5d554;
  undefined4 uStackY_5d550;
  int iStackY_5d54c;
  undefined4 auStackY_5d544 [6];
  int iStackY_5d52c;
  undefined4 uStackY_5d524;
  undefined4 uStackY_5d520;
  int iStackY_5d51c;
  undefined *puStackY_5d50c;
  int iStackY_5d4fc;
  int iStackY_5d4ec;
  undefined4 uStackY_5d4e4;
  undefined4 uStackY_5d4e0;
  int iStackY_5d4dc;
  undefined4 uStackY_5d4d4;
  undefined4 uStackY_5d4d0;
  int iStackY_5d4cc;
  int iStackY_5d4bc;
  int iStackY_5d4ac;
  int iStackY_5d49c;
  undefined4 uStackY_5d494;
  undefined4 uStackY_5d490;
  int iStackY_5d48c;
  undefined4 auStackY_5d484 [6];
  undefined4 uStackY_5d46c;
  undefined4 uStackY_5d45c;
  undefined4 uStackY_5d44c;
  undefined4 auStackY_5d444 [2];
  int iStackY_5d43c;
  int *piStackY_5d424;
  int *piStackY_5d414;
  undefined4 auStackY_5d40c [4];
  undefined4 uStackY_5d3fc;
  undefined4 uStackY_5d3f8;
  int iStackY_5d3f4;
  undefined4 uStackY_5d3ec;
  undefined4 uStackY_5d3e8;
  undefined4 *puStackY_5d3e4;
  undefined4 uStackY_5d3dc;
  undefined4 uStackY_5d3d8;
  undefined4 *puStackY_5d3d4;
  undefined4 *puStackY_5d3c4;
  undefined4 uStackY_5d3bc;
  undefined4 uStackY_5d3b8;
  undefined4 *puStackY_5d3b4;
  undefined4 uStackY_5d3ac;
  undefined4 uStackY_5d3a8;
  int iStackY_5d3a4;
  undefined4 *puStackY_5d394;
  undefined4 auStackY_5d38c [2];
  undefined4 *puStackY_5d384;
  undefined4 uStackY_5d374;
  int *piStackY_5d364;
  int *piStackY_5d354;
  undefined1 auStackY_5d34c [248];
  undefined4 uStackY_5d254;
  int *piStackY_5d244;
  int *piStackY_5d234;
  undefined1 auStackY_5d22c [248];
  undefined4 uStackY_5d134;
  undefined4 uStackY_5d124;
  undefined4 uStackY_5d114;
  undefined4 uStackY_5d104;
  undefined4 uStackY_5d0f4;
  undefined4 uStackY_5d0e4;
  undefined4 uStackY_5d0d4;
  undefined *puStackY_5d0c4;
  undefined4 uStackY_5d0b4;
  undefined4 uStackY_5d0a4;
  undefined4 uStackY_5d094;
  undefined4 auStackY_5d08c [6];
  undefined4 uStackY_5d074;
  undefined4 uStackY_5d064;
  undefined4 uStackY_5d054;
  int aiStackY_5d04c [65548];
  undefined1 auStackY_1d01c [8];
  int iStackY_1d014;
  int iStackY_1d004;
  int iStackY_1cff4;
  undefined *puStackY_1cfe4;
  int aiStackY_1cfdc [258];
  undefined4 uStackY_1cbd4;
  undefined4 uStackY_1cbc4;
  undefined4 uStackY_1cbb4;
  undefined4 uStackY_1ca84;
  undefined4 auStackY_1ca7c [2];
  int iStackY_1ca74;
  int *piStackY_1ca5c;
  int *piStackY_1ca4c;
  undefined4 uStackY_1ca3c;
  undefined4 auStackY_1ca34 [2];
  int iStackY_1ca2c;
  int *piStackY_1ca14;
  int *piStackY_1ca04;
  undefined4 auStackY_1c9fc [6];
  int iStackY_1c9e4;
  undefined4 auStackY_1c9dc [2];
  int iStackY_1c9d4;
  undefined *puStackY_1c9c4;
  undefined4 uStackY_1c9a4;
  undefined4 uStackY_1c994;
  undefined4 uStackY_1c984;
  undefined4 auStackY_1c97c [4];
  undefined4 uStackY_1c96c;
  undefined4 uStackY_1c968;
  int iStackY_1c964;
  uint *puStackY_1c954;
  uint *puStackY_1c944;
  uint *puStackY_1c934;
  uint *puStackY_1c924;
  char acStackY_1c91c [2048];
  uint auStackY_1c11c [514];
  undefined4 uStackY_1b914;
  undefined4 uStackY_1b904;
  undefined4 uStackY_1b8f4;
  byte abStackY_1b8ec [65552];
  byte local_b8dc [404];
  DWORD local_b748 [101];
  DWORD local_b5b4 [101];
  uint local_b420 [100];
  DWORD aDStackY_b290 [101];
  DWORD DStackY_b0fc;
  byte local_b0f8 [8];
  DWORD local_b0f0;
  byte local_b0ec [999];
  undefined1 local_ad05;
  undefined4 local_ad04 [6];
  undefined4 local_acec;
  undefined4 local_ace4 [6];
  undefined4 local_accc;
  uint local_acc4 [101];
  uint local_ab30 [9245];
  undefined4 uStackY_1abc;
  int *in_stack_ffffe558;
  undefined ***in_stack_ffffe55c;
  undefined4 in_stack_ffffe560;
  undefined4 uVar15;
  undefined *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  byte local_d60 [256];
  uint *local_c60;
  uint *local_c5c;
  uint *local_c58;
  int *local_c54;
  uint *local_c50;
  uint *local_c4c;
  uint *local_c48;
  byte *local_c44;
  int *local_c40;
  uint *local_c3c;
  DWORD *local_c38;
  DWORD *local_c34;
  int local_c30;
  int local_c2c;
  undefined1 *local_c28;
  undefined4 local_c24;
  undefined *local_c20;
  undefined *local_c1c;
  int *local_c18;
  undefined4 *local_c14;
  int *local_c10;
  DWORD *local_c0c;
  int *local_c08;
  undefined4 *local_c04;
  int *local_c00;
  DWORD *local_bfc;
  int *local_bf8;
  int local_bf4;
  int *local_bf0;
  undefined1 *local_bec;
  undefined4 local_be8;
  byte *local_be4;
  byte *local_be0;
  byte *local_bdc;
  undefined4 local_bd8;
  int local_bd4;
  byte local_bcd;
  byte *local_bcc;
  byte *local_bc8;
  byte *local_bc4;
  byte *local_bc0;
  undefined4 *local_bbc;
  uint local_bb8;
  undefined1 *local_bb4;
  int *local_bb0;
  byte *local_bac;
  uint local_ba8;
  byte *local_ba4;
  undefined1 *local_ba0;
  byte *local_b9c;
  undefined4 local_b98;
  int local_b94;
  int local_b90;
  int local_b8c;
  int local_b88;
  uint local_b84;
  int *local_b80;
  int *local_b7c;
  int local_b78;
  int local_b74;
  int local_b70;
  int local_b6c;
  int local_b68;
  int *local_b64;
  int *local_b60;
  uint local_b5c;
  int local_b58;
  uint local_b54;
  int local_b50;
  undefined4 *local_b4c;
  uint local_b48;
  uint local_b44;
  uint local_b40;
  undefined4 local_b3c;
  undefined4 local_b38;
  int *local_b34;
  int local_b30;
  DWORD local_b2c;
  DWORD *local_b28;
  DWORD *local_b24;
  DWORD *local_b20;
  undefined4 local_b1c;
  uint local_b18;
  uint local_b14;
  uint *local_b10;
  DWORD *local_b0c;
  DWORD *local_b08;
  DWORD local_b04;
  int local_b00;
  int local_afc;
  int local_af8;
  int local_af4;
  undefined4 local_af0;
  undefined4 local_aec;
  int local_ae8;
  int local_ae4;
  uint local_ae0;
  undefined1 *local_adc;
  undefined4 local_ad8;
  undefined *local_ad4;
  undefined *local_ad0;
  int *local_acc;
  undefined4 local_ac8;
  uint local_ac4;
  uint local_ac0;
  uint *local_abc;
  int local_ab8;
  int local_ab4;
  char local_aae;
  char local_aad;
  byte *local_aac;
  undefined1 *local_aa8;
  undefined *local_aa4;
  undefined4 local_aa0;
  uint local_a9c;
  int local_a98;
  int local_a94;
  int local_a90;
  DWORD local_a8c;
  uint local_a88;
  undefined4 local_a84;
  int local_a80;
  undefined4 *local_a7c;
  undefined4 *local_a78;
  int local_a74;
  int local_a70;
  int local_a6c;
  undefined4 *local_a68;
  int local_a64;
  int local_a60;
  int local_a5c;
  undefined4 local_a58;
  undefined4 local_a54;
  int local_a50;
  int local_a4c;
  int local_a48;
  undefined4 *local_a44;
  undefined4 *local_a40;
  int local_a3c;
  int local_a38;
  int local_a34;
  undefined1 *local_a30;
  undefined4 local_a2c;
  int *local_a28;
  int *local_a24;
  int *local_a20;
  undefined1 *local_a1c;
  undefined4 local_a18;
  int *local_a14;
  int *local_a10;
  int *local_a0c;
  uint local_a08;
  uint local_a04;
  uint local_a00;
  byte local_9f9;
  uint local_9f8;
  int local_9f4;
  uint local_9f0;
  undefined1 *local_9ec;
  undefined4 local_9e8;
  int *local_9e4;
  int *local_9e0;
  int *local_9dc;
  int *local_9d8;
  int *local_9d4;
  uint local_9d0;
  undefined1 *local_9cc;
  int *local_9c8;
  int *local_9c4;
  uint local_9c0;
  int *local_9bc;
  undefined1 *local_9b8;
  int *local_9b4;
  undefined4 local_9b0;
  undefined4 local_9ac;
  undefined4 *local_9a8;
  undefined4 *local_9a4;
  int local_9a0;
  undefined4 *local_99c;
  int *local_998;
  uint local_994;
  undefined1 local_98d;
  uint local_98c;
  undefined1 *local_988;
  undefined4 local_984;
  int *local_980;
  int *local_97c;
  int *local_978;
  int *local_974;
  int *local_970;
  uint local_96c;
  undefined1 *local_968;
  int *local_964;
  int *local_960;
  uint local_95c;
  int *local_958;
  undefined1 *local_954;
  int *local_950;
  undefined4 local_94c;
  uint *local_940;
  uint local_93c;
  undefined1 *local_938;
  undefined4 local_934;
  int *local_930;
  int *local_92c;
  int *local_928;
  int *local_924;
  int *local_920;
  uint local_91c;
  undefined1 *local_918;
  int *local_914;
  int *local_910;
  uint local_90c;
  int *local_908;
  undefined1 *local_904;
  int *local_900;
  undefined4 local_8fc;
  uint *local_8f0;
  uint local_8ec;
  int *local_8e8;
  int local_8e4;
  uint local_8e0;
  undefined1 *local_8d4;
  undefined4 local_8d0;
  undefined *local_8cc;
  undefined *local_8c8;
  int *local_8c4;
  undefined1 *local_8c0;
  undefined4 local_8bc;
  int local_8b8;
  int local_8b4;
  int *local_8b0;
  undefined4 *local_8ac;
  undefined4 *local_8a8;
  uint local_8a4;
  int local_8a0;
  int *local_89c;
  int *local_898;
  uint local_894;
  int *local_890;
  int local_88c;
  int local_888;
  undefined4 local_884;
  int local_880;
  undefined1 *local_87c;
  undefined1 *local_878;
  undefined4 local_874;
  int local_870;
  int local_86c;
  int *local_868;
  undefined4 *local_864;
  undefined4 *local_860;
  uint local_85c;
  int local_858;
  int *local_854;
  int *local_850;
  uint local_84c;
  int *local_848;
  int local_844;
  int local_840;
  undefined4 local_83c;
  int local_838;
  undefined1 *local_834;
  byte local_82e;
  byte local_82d;
  uint local_82c;
  int local_828;
  undefined1 *local_824;
  undefined *local_820;
  undefined4 local_81c;
  byte *local_818;
  byte *local_814;
  byte *local_810;
  undefined4 local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined4 local_800;
  uint local_7fc;
  uint local_7f8;
  undefined1 *local_7f4;
  undefined4 local_7f0;
  int local_7ec;
  int local_7e8;
  int *local_7e4;
  undefined1 *local_7e0;
  undefined4 local_7dc;
  int local_7d8;
  int local_7d4;
  int *local_7d0;
  undefined1 *local_7cc;
  char *local_7c8;
  uint local_7c4;
  char local_7bd;
  DWORD local_7b4;
  int local_7b0;
  int local_7ac;
  undefined1 *local_7a8;
  undefined4 local_7a4;
  undefined *local_7a0;
  undefined *local_79c;
  int *local_798;
  undefined4 *local_794;
  undefined4 *local_790;
  int local_78c;
  undefined4 *local_788;
  undefined4 local_784;
  undefined4 local_780;
  undefined4 local_77c;
  int local_778;
  byte local_773;
  ushort local_772;
  undefined1 *local_770;
  undefined4 local_76c;
  byte *local_768;
  byte *local_764;
  byte *local_760;
  undefined1 *local_75c;
  undefined4 local_758;
  byte *local_754;
  byte *local_750;
  byte *local_74c;
  int local_748;
  byte *local_744;
  int *local_740;
  int local_73c;
  int local_738;
  int local_734;
  int local_730;
  undefined1 *local_72c;
  undefined *local_728;
  undefined4 local_724;
  uint local_720;
  uint *local_71c;
  int local_718;
  int local_714;
  int local_710;
  int local_70c;
  int local_708;
  int local_704;
  int local_700;
  bool local_6f9;
  undefined1 *local_6f8;
  undefined4 local_6f4;
  byte *local_6f0;
  byte *local_6ec;
  byte *local_6e8;
  undefined1 *local_6e4;
  undefined4 local_6e0;
  int *local_6dc;
  int *local_6d8;
  int *local_6d4;
  undefined1 *local_6d0;
  undefined4 local_6cc;
  byte *local_6c8;
  byte *local_6c4;
  byte *local_6c0;
  uint local_6bc;
  undefined1 local_6b5;
  uint local_6b4;
  uint local_664;
  uint *local_660;
  uint *local_65c;
  int local_658;
  undefined4 local_654;
  uint local_650;
  int local_64c;
  undefined1 *local_648;
  undefined4 local_644;
  int *local_640;
  int *local_63c;
  int *local_638;
  int *local_634;
  int *local_630;
  uint local_62c;
  undefined1 *local_628;
  int *local_624;
  int *local_620;
  uint local_61c;
  int *local_618;
  undefined1 *local_614;
  int *local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 *local_604;
  undefined4 *local_600;
  undefined1 *local_5fc;
  undefined4 local_5f8;
  int *local_5f4;
  int *local_5f0;
  int *local_5ec;
  int *local_5e8;
  int *local_5e4;
  uint local_5e0;
  undefined1 *local_5dc;
  int *local_5d8;
  int *local_5d4;
  uint local_5d0;
  int *local_5cc;
  undefined1 *local_5c8;
  int *local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  int local_5b8;
  byte local_5a9;
  byte *local_5a8;
  undefined1 *local_5a4;
  undefined *local_5a0;
  undefined4 local_59c;
  uint local_598;
  int local_594;
  uint local_590;
  undefined1 *local_58c;
  undefined4 local_588;
  int local_584;
  int local_580;
  int *local_57c;
  undefined1 *local_578;
  undefined4 local_574;
  uint *local_570;
  uint *local_56c;
  uint *local_568;
  undefined1 *local_564;
  undefined4 local_560;
  uint *local_55c;
  uint *local_558;
  uint *local_554;
  int local_550;
  uint *local_54c;
  uint *local_548;
  uint local_544;
  undefined1 *local_540;
  int *local_53c;
  uint *local_538;
  uint local_534;
  uint *local_530;
  undefined1 *local_52c;
  uint *local_528;
  undefined4 local_524;
  uint *local_520;
  uint *local_51c;
  uint local_518;
  undefined1 *local_514;
  int *local_510;
  uint *local_50c;
  uint local_508;
  uint *local_504;
  undefined1 *local_500;
  uint *local_4fc;
  undefined4 local_4f8;
  undefined1 *local_4ec;
  int local_4e8;
  int *local_4e4;
  int local_4e0;
  uint *local_4dc;
  byte *local_4d8;
  uint local_4d4;
  uint local_4d0;
  undefined1 *local_4cc;
  undefined4 local_4c8;
  int local_4c4;
  int local_4c0;
  int *local_4bc;
  undefined1 *local_4b8;
  undefined4 local_4b4;
  int local_4b0;
  int local_4ac;
  int *local_4a8;
  undefined1 *local_4a4;
  DWORD local_498;
  int local_494;
  int local_490;
  undefined1 *local_48c;
  undefined4 local_488;
  undefined *local_484;
  undefined *local_480;
  int *local_47c;
  undefined1 *local_478;
  undefined *local_474;
  undefined4 local_470;
  DWORD local_46c;
  int local_468;
  uint local_464;
  uint local_460;
  uint local_45c;
  short local_458;
  ushort local_456;
  undefined4 local_454;
  undefined4 *local_450;
  undefined4 *local_44c;
  int local_448;
  undefined4 *local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 *local_434;
  undefined4 *local_430;
  int local_42c;
  undefined4 *local_428;
  undefined4 local_424;
  int local_420;
  double local_41c;
  int *local_414;
  uint local_410;
  uint local_40c;
  double local_408;
  double local_400;
  int local_3f8;
  int local_3f4;
  undefined4 local_3f0;
  undefined2 local_3e0;
  int local_3d4;
  undefined1 local_3cc [8];
  byte *local_3c4;
  undefined1 local_3bc [8];
  undefined *local_3b4;
  undefined4 *local_3ac;
  undefined4 local_3a8;
  int *local_3a4;
  int *local_3a0;
  int *local_390;
  undefined4 local_388;
  DWORD *local_384;
  DWORD *local_380;
  DWORD *local_370;
  undefined4 local_368;
  int *local_364;
  int local_360;
  undefined4 local_350;
  undefined4 local_348;
  undefined4 *local_344;
  undefined4 *local_340;
  undefined4 *local_330;
  undefined1 local_328 [8];
  int *local_320;
  undefined4 local_318;
  undefined1 local_310 [8];
  int *local_308;
  undefined1 local_300 [8];
  int *local_2f8;
  undefined **local_2f0 [2];
  undefined1 local_2e8 [8];
  int *local_2e0;
  undefined **local_2d8 [2];
  undefined1 local_2d0 [8];
  int *local_2c8;
  undefined1 local_2c0 [8];
  int *local_2b8;
  int local_2b0;
  undefined1 local_2ac [8];
  int local_2a4;
  int local_29c;
  undefined1 local_298 [8];
  int local_290;
  undefined1 local_288 [8];
  undefined *local_280;
  undefined4 local_278;
  int local_274;
  int local_270;
  int local_260;
  undefined4 local_258;
  int local_254;
  int local_250;
  int local_240;
  undefined1 local_238 [8];
  int local_230;
  undefined1 local_228 [8];
  int local_220;
  int local_218 [4];
  undefined4 local_208;
  undefined4 *local_200;
  undefined4 *local_1fc;
  undefined4 local_1f8;
  undefined4 *local_1f4;
  uint local_1f0;
  undefined1 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0 [8];
  byte *local_1d8;
  undefined1 local_1a8 [8];
  int *local_1a0;
  undefined4 local_198;
  undefined4 *local_190;
  undefined1 local_18c [8];
  int *local_184;
  undefined4 local_17c;
  undefined1 local_174 [8];
  byte *local_16c;
  undefined1 local_164 [8];
  int *local_15c;
  undefined1 local_154 [8];
  byte *local_14c;
  undefined1 local_144 [8];
  uint *local_13c;
  uint local_134;
  undefined1 local_12c [8];
  uint *local_124;
  uint local_11c;
  undefined1 local_114 [8];
  int local_10c;
  undefined1 local_104 [8];
  int local_fc;
  undefined1 local_f4 [8];
  int local_ec;
  int local_e4 [4];
  undefined4 local_d4;
  undefined4 *local_cc;
  undefined4 *local_c8;
  undefined4 local_c4;
  undefined4 *local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac [4];
  undefined4 local_9c;
  undefined4 *local_94;
  undefined4 *local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_74 [8];
  undefined *local_6c;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined4 local_4c;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_c;
  int local_8;
  
  bVar14 = 0;
  iVar7 = 0x5d;
  do {
    local_8 = iVar7;
    iVar7 = local_8 + -1;
  } while (local_8 + -1 != 0);
  __InitExceptBlockLDTC(0x4758f0);
  local_400 = 1.0;
  local_408 = 1.0;
  local_414 = (int *)0x0;
  if (param_5 < 1) {
    param_5 = 1;
  }
  if (100 < param_6) {
    param_6 = 100;
  }
  if (param_6 < param_5) {
    param_6 = param_5;
  }
  if (param_7 == 0) {
    local_41c = 0.0;
  }
  else {
    local_41c = 100.0 / (double)param_7;
  }
  local_420 = (param_6 - param_5) + 1;
  local_20 = 0;
  local_1c = 0;
  local_c = 0;
  local_3e0 = 0x2c;
  local_88 = (undefined4 *)0x0;
  local_84 = 0;
  local_80 = 1;
  local_ac[0] = 1;
  local_9c = 0;
  local_accc = 0;
  local_8c = 0;
  local_90 = (undefined4 *)0x0;
  local_94 = (undefined4 *)0x0;
  local_424 = 0;
  WordListMap::AllocateNode(local_ac);
  local_428 = local_90;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  *local_90 = 0;
  local_90[1] = 0;
  local_90[2] = local_90;
  local_90[3] = local_90;
  local_ac[0] = 0x2a;
  local_3e0 = 0x20;
  local_3d4 = local_3d4 + 2;
  local_90 = local_90 + 10;
  local_88 = local_428;
  FUN_0040ea08(&local_24,local_420,(int)local_ac);
  local_3d4 = local_3d4 + -2;
  if (local_88 != (undefined4 *)0x0) {
    local_430 = local_88;
    local_42c = local_88[2];
    in_stack_ffffe558 = local_ac;
    FUN_0040f198(local_ace4,(int)in_stack_ffffe558,in_stack_ffffe55c,in_stack_ffffe560,local_42c);
    local_434 = local_88;
    local_88[3] = local_94;
    local_94 = local_88;
    FUN_0040fdb4((int)local_ac);
  }
  local_3d4 = local_3d4 + 1;
  local_40 = 0;
  local_3c = 0;
  local_2c = 0;
  local_3e0 = 0x8c;
  local_c0 = (undefined4 *)0x0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = local_43c;
  local_b0 = local_438;
  local_e4[0] = 1;
  local_d4 = 0;
  local_acec = 0;
  local_c4 = 0;
  local_c8 = (undefined4 *)0x0;
  local_cc = (undefined4 *)0x0;
  local_440 = 0;
  FUN_00410330(local_e4);
  local_444 = local_c8;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  *local_c8 = 0;
  local_c8[1] = 0;
  local_c8[2] = local_c8;
  local_c8[3] = local_c8;
  local_e4[0] = 0x2a;
  local_3e0 = 0x80;
  local_3d4 = local_3d4 + 2;
  local_c8 = local_c8 + 10;
  local_c0 = local_444;
  FUN_0040fdf4(&local_44,100,(int)local_e4);
  local_3d4 = local_3d4 + -2;
  if (local_c0 != (undefined4 *)0x0) {
    local_44c = local_c0;
    local_448 = local_c0[2];
    in_stack_ffffe558 = local_e4;
    FUN_004062a0(local_ad04,(int)in_stack_ffffe558,in_stack_ffffe55c,in_stack_ffffe560,local_448);
    local_450 = local_c0;
    local_c0[3] = local_cc;
    local_cc = local_c0;
    FUN_00406ec8((int)local_e4);
  }
  local_3d4 = local_3d4 + 2;
  local_3e0 = 0xb0;
  local_60 = 0;
  local_5c = 0;
  local_4c = 0;
  local_454 = 0;
  FUN_0041047c(&local_64,100000,&local_454);
  local_3d4 = local_3d4 + 1;
  local_3e0 = 0x50;
  FUN_004679ec((undefined4 *)local_b0ec,param_4,(char *)0x3e7);
  local_ad05 = 0;
  local_c40 = &DAT_0048b950;
  local_c3c = (uint *)&DAT_0048b850;
  local_c38 = &DAT_0048b450;
  iVar7 = 0;
  local_c34 = &DAT_0048bf54;
  do {
    *local_c34 = 0;
    *local_c38 = 0;
    *(undefined1 *)local_c3c = 0;
    *local_c40 = 0;
    iVar7 = iVar7 + 1;
    local_c40 = local_c40 + 1;
    local_c3c = (uint *)((int)local_c3c + 1);
    local_c38 = local_c38 + 1;
    local_c34 = local_c34 + 1;
  } while (iVar7 < 0x100);
  local_456 = 0;
  local_3e0 = 0x50;
  iVar7 = 0;
  local_c44 = local_b8dc;
  local_c34 = local_b748;
  local_c38 = local_b5b4;
  local_c3c = local_b420;
  local_c40 = (int *)(aDStackY_b290 + 1);
  do {
    *local_c40 = 0;
    *local_c3c = 0;
    *local_c38 = 0;
    *local_c34 = 0;
    local_c44[0] = 0;
    local_c44[1] = 0;
    local_c44[2] = 0;
    local_c44[3] = 0;
    iVar7 = iVar7 + 1;
    local_c44 = local_c44 + 4;
    local_c34 = local_c34 + 1;
    local_c38 = local_c38 + 1;
    local_c3c = local_c3c + 1;
    local_c40 = local_c40 + 1;
  } while (iVar7 < 0x65);
  (**(code **)(*param_1 + 8))();
  local_45c = 0;
  local_460 = 0;
  local_464 = 0;
  local_468 = 0;
  local_46c = 0;
  local_470 = 0;
  local_478 = local_74;
  local_474 = &DAT_00485bd8;
  local_6c = &DAT_00485bd8;
  local_3d4 = local_3d4 + 1;
  local_3e0 = 0x50;
LAB_004090cb:
  iVar7 = (**(code **)(*param_1 + 4))();
  if (iVar7 != 1) {
    if (iVar7 == 0) {
      (**(code **)(*param_1 + 0x10))();
      uVar10 = 0;
      local_3d4 = local_3d4 + -1;
      if (local_6c != (undefined *)0x0) {
        if (*(int *)(local_6c + -0xc) != -1) {
          local_47c = (int *)(local_6c + -0xc);
          if (local_47c == &DAT_00485bcc) {
            iVar7 = 1;
          }
          else if (local_47c == &DAT_00485bcc) {
            iVar7 = 1;
          }
          else {
            *local_47c = *local_47c + -1;
            iVar7 = *local_47c + 1;
          }
          if (iVar7 != 0) goto LAB_004076c3;
        }
        local_480 = local_6c + -0xc;
        local_484 = local_6c + -0xc;
        uVar10 = 0;
        operator_delete();
        local_488 = 0;
        local_6c = (undefined *)0x0;
        local_48c = local_74;
        uStackY_1b8f4 = 0;
      }
LAB_004076c3:
      local_3e0 = 0x50;
      local_3d4 = local_3d4 + -1;
      FUN_004061b8(&local_64,local_60,local_5c);
      local_490 = local_60;
      operator_delete();
      local_3d4 = local_3d4 + -2;
      OccurrenceListCache::_dtor((int)&local_44,2);
      local_3d4 = local_3d4 + -1;
      FUN_00410620(&local_24,local_20,local_1c);
      local_494 = local_20;
      operator_delete();
      *in_FS_OFFSET = local_3f0;
      return uVar10;
    }
    uVar10 = local_45c & 0x8000007f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xffffff80) + 1;
    }
    if ((uVar10 != 0) || (local_498 = GetTickCount(), local_498 - local_46c < 0x3e9))
    goto LAB_004079c6;
    local_3e0 = 0x104;
    std::string::string_from_cstr((int)local_f4,(uint *)"Calibrating dictionary - ");
    local_3d4 = local_3d4 + 1;
    local_3e0 = 0x11c;
    FUN_00405ae0((int)local_104,(char *)abStackY_1b8ec);
    local_4a4 = local_104;
    local_3d4 = local_3d4 + 1;
    std::string::append((int)local_f4,(int)local_4a4);
    local_3d4 = local_3d4 + -1;
    if (local_fc != 0) {
      if (*(int *)(local_fc + -0xc) != -1) {
        local_4a8 = (int *)(local_fc + -0xc);
        if (local_4a8 == &DAT_00485bcc) {
          iVar7 = 1;
        }
        else if (local_4a8 == &DAT_00485bcc) {
          iVar7 = 1;
        }
        else {
          *local_4a8 = *local_4a8 + -1;
          iVar7 = *local_4a8 + 1;
        }
        if (iVar7 != 0) goto LAB_004078b6;
      }
      local_4ac = local_fc + -0xc;
      local_4b0 = local_fc + -0xc;
      operator_delete();
      local_4b4 = 0;
      local_4b8 = local_104;
      local_fc = 0;
      uStackY_1b904 = 0;
    }
LAB_004078b6:
    local_3e0 = 0x110;
    std::string::replace_fill((int)local_f4,*(uint *)(local_ec + -4),0,1,10);
    (**(code **)(*param_1 + 0xc))();
    local_46c = local_498;
    local_3d4 = local_3d4 + -1;
    if (local_ec != 0) {
      if (*(int *)(local_ec + -0xc) != -1) {
        local_4bc = (int *)(local_ec + -0xc);
        if (local_4bc == &DAT_00485bcc) {
          iVar7 = 1;
        }
        else if (local_4bc == &DAT_00485bcc) {
          iVar7 = 1;
        }
        else {
          *local_4bc = *local_4bc + -1;
          iVar7 = *local_4bc + 1;
        }
        if (iVar7 != 0) goto LAB_004079c6;
      }
      local_4c0 = local_ec + -0xc;
      local_4c4 = local_ec + -0xc;
      operator_delete();
      local_4c8 = 0;
      local_4cc = local_f4;
      local_ec = 0;
      uStackY_1b914 = 0;
    }
LAB_004079c6:
    local_4d0 = local_464;
    local_3e0 = 0x50;
    local_4d4 = 0xffffffff;
    FUN_00459b6c((int)local_74,(uint *)&DAT_00475208);
    pbVar3 = abStackY_1b8ec;
    do {
      local_3e0 = 0x50;
      pbVar8 = pbVar3;
      while( true ) {
        pbVar1 = (byte *)thunk_FUN_00467a3c((char *)pbVar8,&DAT_00475204);
        local_4d8 = pbVar1;
        if (((pbVar1 == (byte *)0x0) || (*pbVar1 != 0x5c)) ||
           (local_4d8 = pbVar1 + 1, pbVar1[1] == 0)) break;
        pbVar8 = pbVar1 + 2;
      }
      if (((local_4d8 == (byte *)0x0) || (*local_4d8 == 0)) ||
         (0x7f6 < (int)local_4d8 - (int)pbVar8)) goto LAB_004090c5;
      local_4dc = auStackY_1c11c;
      local_3e0 = 0x50;
      local_4e0 = 0;
      for (; pbVar3 < local_4d8; pbVar3 = pbVar3 + 1) {
        bVar5 = *pbVar3;
        if ((bVar5 == 0x5c) && (pbVar3 + 1 < local_4d8)) {
          pbVar3 = pbVar3 + 1;
          bVar5 = *pbVar3;
        }
        else if (bVar5 == 0x2b) {
          pbVar3 = pbVar3 + 1;
          if ((pbVar3 < local_4d8) && (*pbVar3 != 0x2b)) {
            *(byte *)local_4dc = 10;
            local_4dc = (uint *)((int)local_4dc + 1);
          }
          goto joined_r0x00407ad5;
        }
        *(byte *)local_4dc = bVar5;
        local_4dc = (uint *)((int)local_4dc + 1);
        if (*(char *)(param_2 + (uint)bVar5) != '\0') {
          acStackY_1c91c[local_4e0] = *(char *)(param_2 + (uint)bVar5);
          local_4e0 = local_4e0 + 1;
        }
      }
LAB_00407b3d:
      acStackY_1c91c[local_4e0] = '\n';
      if ((param_5 <= local_4e0) && (local_4e0 <= param_6)) {
        local_464 = local_464 + 1;
        for (; (auStackY_1c11c < local_4dc && (*(byte *)((int)local_4dc + -1) == 0x20));
            local_4dc = (uint *)((int)local_4dc + -1)) {
        }
        *(byte *)local_4dc = 0;
        for (local_4dc = auStackY_1c11c; (char)*local_4dc == ' ';
            local_4dc = (uint *)((int)local_4dc + 1)) {
        }
        local_4e8 = local_4e0 - param_5;
        local_4e4 = (int *)(local_4e8 * 0x38 + local_20);
        local_3e0 = 0x140;
        puVar4 = local_4dc;
        iVar9 = std::string::string_from_cstr((int)local_114,local_4dc);
        local_3d4 = local_3d4 + 1;
        local_4f8 = 0;
        local_124 = (uint *)0x0;
        local_3e0 = 0x14c;
        iVar7 = *(int *)(*(int *)(iVar9 + 8) + -0xc);
        if (iVar7 == -1 || iVar7 + 1 < 0) {
          local_508 = *(uint *)(*(int *)(iVar9 + 8) + -4);
          local_510 = std::string::__getRep(local_12c,local_508,local_508);
          local_514 = local_12c;
          puStackY_1c934 = (uint *)(local_510 + 3);
          local_518 = local_508;
          local_51c = *(uint **)(iVar9 + 8);
          local_520 = puStackY_1c934;
          local_50c = puStackY_1c934;
          local_124 = puStackY_1c934;
          puVar4 = local_51c;
          memcpy(puStackY_1c934,local_51c,local_508);
        }
        else {
          local_4fc = *(uint **)(iVar9 + 8);
          local_124 = local_4fc;
          local_500 = local_12c;
          puStackY_1c924 = local_4fc;
          local_504 = local_4fc + -3;
          if (local_504 != &DAT_00485bcc) {
            *local_504 = *local_504 + 1;
          }
        }
        local_11c = local_45c;
        local_3d4 = local_3d4 + 4;
        local_524 = 0;
        local_13c = (uint *)0x0;
        local_3e0 = 0x164;
        if (local_124[-3] == 0xffffffff || (int)(local_124[-3] + 1) < 0) {
          local_534 = local_124[-1];
          local_53c = std::string::__getRep(local_144,local_534,local_534);
          local_540 = local_144;
          puStackY_1c954 = (uint *)(local_53c + 3);
          local_544 = local_534;
          local_548 = local_124;
          local_54c = puStackY_1c954;
          local_538 = puStackY_1c954;
          local_13c = puStackY_1c954;
          puVar4 = local_124;
          memcpy(puStackY_1c954,local_124,local_534);
        }
        else {
          local_528 = local_124;
          local_13c = local_124;
          local_52c = local_144;
          puStackY_1c944 = local_124;
          local_530 = local_124 + -3;
          if (local_530 != &DAT_00485bcc) {
            *local_530 = *local_530 + 1;
          }
        }
        local_4ec = local_144;
        local_3e0 = 0x140;
        local_134 = local_11c;
        local_3d4 = local_3d4 + 2;
        iStackY_1c964 = local_4e4[9];
        local_550 = iStackY_1c964;
        FUN_004106d0(auStackY_1c97c,local_4e4,uStackY_1c96c,uStackY_1c968,iStackY_1c964,puVar4,
                     (int)local_4ec);
        local_3d4 = local_3d4 + -2;
        if (local_13c != (uint *)0x0) {
          if (local_13c[-3] != 0xffffffff) {
            local_554 = local_13c + -3;
            if (local_554 == &DAT_00485bcc) {
              iVar7 = 1;
            }
            else if (local_554 == &DAT_00485bcc) {
              iVar7 = 1;
            }
            else {
              *local_554 = *local_554 - 1;
              iVar7 = *local_554 + 1;
            }
            if (iVar7 != 0) goto LAB_00407fc1;
          }
          local_558 = local_13c + -3;
          local_55c = local_13c + -3;
          operator_delete();
          local_560 = 0;
          local_13c = (uint *)0x0;
          local_564 = local_144;
          uStackY_1c984 = 0;
        }
LAB_00407fc1:
        local_3e0 = 0x50;
        local_3d4 = local_3d4 + -2;
        if (local_124 != (uint *)0x0) {
          if (local_124[-3] != 0xffffffff) {
            local_568 = local_124 + -3;
            if (local_568 == &DAT_00485bcc) {
              iVar7 = 1;
            }
            else if (local_568 == &DAT_00485bcc) {
              iVar7 = 1;
            }
            else {
              *local_568 = *local_568 - 1;
              iVar7 = *local_568 + 1;
            }
            if (iVar7 != 0) goto LAB_0040808e;
          }
          local_56c = local_124 + -3;
          local_570 = local_124 + -3;
          operator_delete();
          local_574 = 0;
          local_124 = (uint *)0x0;
          local_578 = local_12c;
          uStackY_1c994 = 0;
        }
LAB_0040808e:
        local_3d4 = local_3d4 + -1;
        if (local_10c != 0) {
          if (*(int *)(local_10c + -0xc) != -1) {
            local_57c = (int *)(local_10c + -0xc);
            if (local_57c == &DAT_00485bcc) {
              iVar7 = 1;
            }
            else if (local_57c == &DAT_00485bcc) {
              iVar7 = 1;
            }
            else {
              *local_57c = *local_57c + -1;
              iVar7 = *local_57c + 1;
            }
            if (iVar7 != 0) goto LAB_00408152;
          }
          local_580 = local_10c + -0xc;
          local_584 = local_10c + -0xc;
          operator_delete();
          local_588 = 0;
          local_58c = local_114;
          local_10c = 0;
          uStackY_1c9a4 = 0;
        }
LAB_00408152:
        local_590 = local_4e0 + 1;
        in_stack_ffffe55c = (undefined ***)0x408188;
        FUN_0045a224((int)local_74,*(uint *)(local_6c + -4),0,(uint)acStackY_1c91c,local_590,0,
                     local_590);
        for (puVar4 = local_4dc; (byte)*puVar4 != 0; puVar4 = (uint *)((int)puVar4 + 1)) {
          (&DAT_0048b950)[(byte)*puVar4] = (&DAT_0048b950)[(byte)*puVar4] + 1;
        }
        DAT_0048b950 = DAT_0048b950 + 1;
      }
      if (*local_4d8 == 0x3b) {
        local_4d4 = local_464;
      }
      if (*local_4d8 == 0x7c) goto code_r0x004081d0;
      pbVar3 = local_4d8 + 1;
    } while( true );
  }
  FUN_00411168((int)&local_64,local_45c);
  iVar7 = FUN_00405414();
  iVar9 = 0;
  local_6f9 = iVar7 == 1;
  local_c44 = (byte *)aiStackY_1cfdc;
  local_3e0 = 0x50;
  do {
    local_c44[0] = 0;
    local_c44[1] = 0;
    local_c44[2] = 0;
    local_c44[3] = 0;
    iVar9 = iVar9 + 1;
    local_c44 = (byte *)((int)local_c44 + 4);
  } while (iVar9 < 0x100);
  local_c44 = (byte *)&DAT_0048b950;
  iVar7 = 0;
  do {
    if (*(char *)(param_2 + iVar7) != '\0') {
      aiStackY_1cfdc[*(byte *)(param_2 + iVar7)] =
           aiStackY_1cfdc[*(byte *)(param_2 + iVar7)] + *(int *)local_c44;
    }
    iVar7 = iVar7 + 1;
    local_c44 = (byte *)((int)local_c44 + 4);
  } while (iVar7 < 0x100);
  DAT_0048bd50 = 0;
  local_c44 = (byte *)aiStackY_1cfdc;
  local_c34 = (DWORD *)&DAT_0048bd54;
  uVar10 = 0;
  do {
    if (((*(char *)(param_2 + uVar10) == '\0') || (uVar10 != *(byte *)(param_2 + uVar10))) ||
       (*(int *)local_c44 == 0)) {
      *(short *)local_c34 = -1;
    }
    else {
      *(short *)local_c34 = DAT_0048bd50;
      DAT_0048bd50 = DAT_0048bd50 + 1;
    }
    uVar10 = uVar10 + 1;
    local_c34 = (DWORD *)((int)local_c34 + 2);
    local_c44 = (byte *)((int)local_c44 + 4);
  } while ((int)uVar10 < 0x100);
  local_c34 = (DWORD *)aiStackY_1cfdc;
  DAT_0048bd52 = DAT_0048bd50;
  uVar10 = 0;
  local_c44 = (byte *)&DAT_0048bd54;
  do {
    if (((*(char *)(param_2 + uVar10) != '\0') && (uVar10 == *(byte *)(param_2 + uVar10))) &&
       (*local_c34 == 0)) {
      *(short *)local_c44 = DAT_0048bd52;
      DAT_0048bd52 = DAT_0048bd52 + 1;
    }
    uVar10 = uVar10 + 1;
    local_c44 = (byte *)((int)local_c44 + 2);
    local_c34 = local_c34 + 1;
  } while ((int)uVar10 < 0x100);
  local_c44 = (byte *)&DAT_0048bd54;
  uVar10 = 0;
  do {
    if ((*(char *)(param_2 + uVar10) != '\0') && (uVar10 != *(byte *)(param_2 + uVar10))) {
      *(undefined2 *)local_c44 = (&DAT_0048bd54)[*(byte *)(param_2 + uVar10)];
    }
    uVar10 = uVar10 + 1;
    local_c44 = (byte *)((int)local_c44 + 2);
  } while ((int)uVar10 < 0x100);
  local_c34 = (DWORD *)&DAT_0048bd54;
  local_c44 = local_d60;
  iVar7 = 0;
  do {
    *local_c44 = 0;
    local_700 = (int)(short)*local_c34;
    if (-1 < local_700) {
      local_704 = -1;
      local_3e0 = 0x50;
      local_708 = -1;
      local_3f4 = 0;
      do {
        if (((short)(&DAT_0048bd54)[local_3f4] == local_700) &&
           (local_708 < (&DAT_0048b950)[local_3f4])) {
          local_704 = local_3f4;
          local_708 = (&DAT_0048b950)[local_3f4];
        }
        local_3f4 = local_3f4 + 1;
      } while (local_3f4 < 0x100);
      *local_c44 = (byte)local_704;
    }
    local_c34 = (DWORD *)((int)local_c34 + 2);
    local_c44 = local_c44 + 1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x100);
  local_c34 = local_acc4;
  DAT_00474fd8 = 1;
  iVar7 = 0;
  do {
    local_3f4 = 0;
    local_c48 = local_c34;
    do {
      local_c34[local_3f4] = 0;
      local_3f4 = local_3f4 + 1;
    } while (local_3f4 < 0x65);
    iVar7 = iVar7 + 1;
    local_c34 = local_c34 + 0x65;
  } while (iVar7 < 0x65);
  iVar7 = 0;
  local_c34 = local_acc4;
  do {
    local_3f4 = 0;
    local_c4c = local_c34;
    do {
      uVar10 = operator_new_array();
      local_c4c[local_3f4] = uVar10;
      if (local_c4c[local_3f4] == 0) {
        (**(code **)(*param_1 + 0x10))();
        local_3e0 = 0x50;
        goto LAB_0040d937;
      }
      local_3e0 = 0x50;
      local_c50 = local_c4c;
      for (local_70c = 0; local_70c < DAT_0048bd50; local_70c = local_70c + 1) {
        *(undefined4 *)(local_c4c[local_3f4] + local_70c * 4) = 0;
      }
      local_3f4 = local_3f4 + 1;
    } while (local_3f4 < 0x65);
    iVar7 = iVar7 + 1;
    local_c34 = local_c34 + 0x65;
  } while (iVar7 < 0x65);
  if (local_6f9 == false) {
    (**(code **)(*param_1 + 0xc))();
  }
  else {
    (**(code **)(*param_1 + 0xc))();
  }
  for (local_710 = local_20; local_3e0 = 0x50, local_710 != local_1c; local_710 = local_710 + 0x38)
  {
    local_714 = local_710;
    local_718 = ((param_5 * 0x38 + local_710) - local_20) / 0x38;
    iVar7 = local_718;
    if ((*(int *)(local_710 + 0x28) != 0) && ((int)(uint)local_456 < local_718 + 1)) {
      local_456 = (short)local_718 + 1;
    }
    local_71c = local_acc4 + local_718 * 0x65;
    local_720 = 0;
    local_724 = 0;
    local_728 = &DAT_00485bd8;
    local_1d8 = &DAT_00485bd8;
    local_72c = local_1e0;
    puStackY_1cfe4 = &DAT_00485bd8;
    local_3d4 = local_3d4 + 1;
    local_3e0 = 0x308;
    iStackY_1d004 = *(int *)(local_710 + 0x24);
    local_730 = iStackY_1d004;
    iStackY_1d014 = *(int *)(*(int *)(local_710 + 0x24) + 8);
    local_734 = iStackY_1d014;
    iStackY_1cff4 = iStackY_1d004;
    local_718 = iVar7;
    while (iStackY_1d014 != iStackY_1cff4) {
      local_468 = local_468 + 1;
      iVar7 = (**(code **)(*param_1 + 4))();
      if (iVar7 == 0) {
        (**(code **)(*param_1 + 0x10))();
        local_3d4 = local_3d4 + -1;
        if (local_1d8 != (byte *)0x0) {
          if (*(int *)(local_1d8 + -0xc) != -1) {
            local_74c = local_1d8 + -0xc;
            if (local_74c == (byte *)&DAT_00485bcc) {
              iVar7 = 1;
            }
            else if (local_74c == (byte *)&DAT_00485bcc) {
              iVar7 = 1;
            }
            else {
              *(int *)local_74c = *(int *)local_74c + -1;
              iVar7 = *(int *)local_74c + 1;
            }
            if (iVar7 != 0) goto LAB_00409776;
          }
          local_750 = local_1d8 + -0xc;
          local_754 = local_1d8 + -0xc;
          operator_delete();
          local_758 = 0;
          local_75c = local_1e0;
          local_1d8 = (byte *)0x0;
          uStackY_5d054 = 0;
        }
LAB_00409776:
        local_3e0 = 0x50;
        goto LAB_0040d937;
      }
      local_73c = iStackY_1d014 + 0x10;
      local_3e0 = 0x308;
      local_738 = local_73c;
      uVar10 = FUN_0045ea80(local_73c,0,*(uint *)(*(int *)(iStackY_1d014 + 0x18) + -4),local_1d8,
                            *(uint *)(local_1d8 + -4));
      if (uVar10 != 0) {
        FUN_00459ad4((int)local_1e0,local_738);
        local_740 = aiStackY_5d04c;
        for (local_744 = *(byte **)(local_738 + 8); *local_744 != 0; local_744 = local_744 + 1) {
          local_748 = (int)(short)(&DAT_0048bd54)[*local_744];
          local_3e0 = 0x308;
          if (-1 < local_748) {
            *local_740 = local_748;
            local_740 = local_740 + 1;
          }
        }
        iVar7 = 0;
        local_c54 = aiStackY_5d04c;
        if (0 < local_718) {
          do {
            puVar4 = local_71c + iVar7;
            iVar7 = iVar7 + 1;
            piVar11 = (int *)(*puVar4 + *local_c54 * 4);
            *piVar11 = *piVar11 + 1;
            (&DAT_0048bf54)[*local_c54] = (&DAT_0048bf54)[*local_c54] + 1;
            local_c54 = local_c54 + 1;
          } while (iVar7 < local_718);
        }
        local_720 = local_720 + 1;
      }
      FUN_00411e60((int)auStackY_1d01c);
    }
    local_b420[local_718] = local_720;
    local_3d4 = local_3d4 + -1;
    if (local_1d8 != (byte *)0x0) {
      if (*(int *)(local_1d8 + -0xc) != -1) {
        local_760 = local_1d8 + -0xc;
        if (local_760 == (byte *)&DAT_00485bcc) {
          iVar7 = 1;
        }
        else if (local_760 == (byte *)&DAT_00485bcc) {
          iVar7 = 1;
        }
        else {
          *(int *)local_760 = *(int *)local_760 + -1;
          iVar7 = *(int *)local_760 + 1;
        }
        if (iVar7 != 0) goto LAB_004099fe;
      }
      local_764 = local_1d8 + -0xc;
      local_768 = local_1d8 + -0xc;
      operator_delete();
      local_76c = 0;
      local_1d8 = (byte *)0x0;
      local_770 = local_1e0;
      uStackY_5d064 = 0;
    }
LAB_004099fe:
  }
  (**(code **)(*param_1 + 0xc))();
  if (0 < DAT_0048bd50) {
    local_400 = 0.0;
    local_c34 = &DAT_0048bf54;
    for (iVar7 = 0; iVar7 < DAT_0048bd50; iVar7 = iVar7 + 1) {
      local_400 = (double)*local_c34 + local_400;
      local_c34 = local_c34 + 1;
    }
    local_400 = local_400 / (double)(int)DAT_0048bd50;
    local_c34 = &DAT_0048bf54;
    for (iVar7 = 0; iVar7 < DAT_0048bd50; iVar7 = iVar7 + 1) {
      local_408 = ((double)*local_c34 / local_400) * local_408;
      local_c34 = local_c34 + 1;
    }
    FUN_0046e1f4(local_408,SUB84((double)(1.0 / (float)(int)DAT_0048bd50),0),
                 (uint)((ulonglong)(double)(1.0 / (float)(int)DAT_0048bd50) >> 0x20));
    local_408 = local_400 * (double)in_ST0;
    local_400 = local_400 * 1.4142135623730951;
  }
  local_414 = fopen(param_3,&DAT_00475319);
  if (local_414 == (int *)0x0) {
    (**(code **)(*param_1 + 0x10))();
    local_3e0 = 0x50;
  }
  else {
    DAT_00474fd8 = 0;
    uVar10 = FUN_00469c98(&DAT_0047520a /* "    \{}" */,1,4,local_414);
    if ((uVar10 != 4) || (uVar10 = FUN_00469c98((byte *)&local_456,2,1,local_414), uVar10 != 1)) {
      DAT_00474fd8 = 1;
    }
    uVar10 = FUN_00469c98(local_b0f8,4,3,local_414);
    if (uVar10 != 3) {
      DAT_00474fd8 = 1;
    }
    uVar10 = FUN_00469c98((byte *)local_b5b4,4,(uint)local_456,local_414);
    if (((uVar10 != local_456) ||
        (uVar10 = FUN_00469c98((byte *)local_b748,4,(uint)local_456,local_414), uVar10 != local_456)
        ) || (uVar10 = FUN_00469c98(local_b8dc,4,(uint)local_456,local_414), uVar10 != local_456)) {
      DAT_00474fd8 = 1;
    }
    uVar10 = FUN_00469c98((byte *)(aDStackY_b290 + 1),4,(uint)local_456,local_414);
    if ((uVar10 != local_456) ||
       (uVar10 = FUN_00469c98((byte *)local_b420,4,(uint)local_456,local_414), uVar10 != local_456))
    {
      DAT_00474fd8 = 1;
    }
    uVar10 = FUN_00469c98(local_b0ec,1,1000,local_414);
    if (uVar10 != 1000) {
      DAT_00474fd8 = 1;
    }
    uVar10 = FUN_00469c98((byte *)&DAT_0048bd50,2,1,local_414);
    if (uVar10 != 1) {
      DAT_00474fd8 = 1;
    }
    uVar10 = FUN_00469c98((byte *)&DAT_0048bd52,2,1,local_414);
    if (uVar10 != 1) {
      DAT_00474fd8 = 1;
    }
    iVar7 = 0;
    do {
      uVar10 = FUN_00469c98((byte *)(param_2 + iVar7),1,1,local_414);
      if (uVar10 != 1) {
        DAT_00474fd8 = 1;
      }
      uVar10 = FUN_00469c98(&DAT_0048b850 + iVar7,1,1,local_414);
      if (uVar10 != 1) {
        DAT_00474fd8 = 1;
      }
      uVar10 = FUN_00469c98((byte *)(&DAT_0048bd54 + iVar7),2,1,local_414);
      if (uVar10 != 1) {
        DAT_00474fd8 = 1;
      }
      uVar10 = FUN_00469c98((byte *)(&DAT_0048b450 + iVar7),4,1,local_414);
      if (uVar10 != 1) {
        DAT_00474fd8 = 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x100);
    local_458 = 0;
    local_772 = 1;
    local_3e0 = 0x50;
    if (1 < local_456) {
      do {
        local_458 = local_458 + local_772;
        local_772 = local_772 + 1;
      } while (local_772 < local_456);
    }
    uVar10 = FUN_00469c98((byte *)&local_458,2,1,local_414);
    if (uVar10 != 1) {
      DAT_00474fd8 = 1;
    }
    local_c34 = local_ab30;
    for (iVar7 = 1; iVar7 < (int)(uint)local_456; iVar7 = iVar7 + 1) {
      local_3f4 = 0;
      local_c5c = local_c34;
      if (0 < iVar7) {
        do {
          local_40c = 0;
          local_410 = 0;
          for (local_3f8 = 0; local_3f8 < DAT_0048bd50; local_3f8 = local_3f8 + 1) {
            if (*(int *)(local_c5c[local_3f4] + local_3f8 * 4) != 0) {
              local_40c = local_40c + *(int *)(local_c5c[local_3f4] + local_3f8 * 4);
              local_410 = local_410 + 1;
            }
          }
          local_c58 = local_c5c;
          for (local_3f8 = 0; local_3f8 < DAT_0048bd50; local_3f8 = local_3f8 + 1) {
            uVar15 = FUN_00405268(*(uint *)(local_c58[local_3f4] + local_3f8 * 4),local_40c,
                                  local_410);
            local_773 = (byte)uVar15;
            local_3e0 = 0x50;
            uVar10 = FUN_00469c98(&local_773,1,1,local_414);
            if (uVar10 != 1) {
              DAT_00474fd8 = 1;
            }
          }
          local_3f4 = local_3f4 + 1;
        } while (local_3f4 < iVar7);
      }
      local_c34 = local_c34 + 0x65;
    }
    local_778 = 1;
    do {
      DVar2 = FUN_00469b44(local_414);
      (&DStackY_b0fc)[local_778] = DVar2;
      (**(code **)(*param_1 + 8))();
      local_3e0 = 0x338;
      local_1f4 = (undefined4 *)0x0;
      local_1f0 = 0;
      local_1ec = 0;
      local_1e8 = local_780;
      local_1e4 = local_77c;
      local_218[0] = 1;
      local_208 = 0;
      uStackY_5d074 = 0;
      local_1f8 = 0;
      local_1fc = (undefined4 *)0x0;
      local_200 = (undefined4 *)0x0;
      local_784 = 0;
      FUN_00411ec4(local_218);
      local_788 = local_1fc;
      local_1fc = local_1fc + 10;
      local_788[1] = 0;
      local_788[2] = 0;
      local_788[3] = 0;
      *local_788 = 0;
      local_1f4 = local_788;
      local_788[1] = 0;
      local_788[2] = local_788;
      local_788[3] = local_788;
      local_218[0] = 0x2a;
      local_3d4 = local_3d4 + 2;
      local_3e0 = 0x350;
LAB_0040beef:
      uVar15 = 0x40bf14;
      iVar7 = (**(code **)(*param_1 + 4))();
      if ((iVar7 != 1) && (DAT_00474fd8 == 0)) {
        if (iVar7 == 0) {
          (**(code **)(*param_1 + 0x10))();
          uVar10 = 0;
          uVar20 = 0;
          local_3d4 = local_3d4 + -2;
          if (local_1f4 != (undefined4 *)0x0) {
            local_790 = local_1f4;
            local_78c = local_1f4[2];
            FUN_00412010(auStackY_5d08c,(int)local_218,in_stack_ffffe558,in_stack_ffffe55c,local_78c
                        );
            local_794 = local_1f4;
            local_1f4[3] = local_200;
            local_200 = local_1f4;
            uVar10 = uVar20;
            FUN_0041221c((int)local_218);
          }
          local_3e0 = 0x350;
          local_3d4 = local_3d4 + -1;
          if (local_6c != (undefined *)0x0) {
            if (*(int *)(local_6c + -0xc) != -1) {
              local_798 = (int *)(local_6c + -0xc);
              if (local_798 == &DAT_00485bcc) {
                iVar7 = 1;
              }
              else if (local_798 == &DAT_00485bcc) {
                iVar7 = 1;
              }
              else {
                *local_798 = *local_798 + -1;
                iVar7 = *local_798 + 1;
              }
              if (iVar7 != 0) goto LAB_0040a30c;
            }
            local_79c = local_6c + -0xc;
            local_7a0 = local_6c + -0xc;
            operator_delete();
            local_7a4 = 0;
            local_6c = (undefined *)0x0;
            local_7a8 = local_74;
            uStackY_5d094 = 0;
          }
LAB_0040a30c:
          local_3d4 = local_3d4 + -1;
          FUN_004061b8(&local_64,local_60,local_5c);
          local_7ac = local_60;
          operator_delete();
          local_3d4 = local_3d4 + -2;
          OccurrenceListCache::_dtor((int)&local_44,2);
          local_3d4 = local_3d4 + -1;
          FUN_00410620(&local_24,local_20,local_1c);
          local_7b0 = local_20;
          operator_delete();
          *in_FS_OFFSET = local_3f0;
          return uVar10;
        }
        uVar10 = local_460 & 0x8000007f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffff80) + 1;
        }
        if (uVar10 == 0) {
          local_7b4 = GetTickCount();
          local_3e0 = 0x350;
          if (1000 < local_7b4 - local_46c) {
            local_3e0 = 0x38c;
            std::string::string_from_cstr((int)local_228,(uint *)"Definition output pass ");
            local_3d4 = local_3d4 + 1;
            local_3e0 = 0x398;
            local_7bd = (char)local_778 + '0';
            std::string::replace_fill((int)local_228,*(uint *)(local_220 + -4),0,1,local_7bd);
            local_7c4 = *(uint *)(local_220 + -4);
            local_7c8 = strlen((uint *)("Calibrating dictionary - " + 0x16));
            in_stack_ffffe55c = (undefined ***)0x40a470;
            FUN_0045a224((int)local_228,local_7c4,0,0x475247,(uint)local_7c8,0,(uint)local_7c8);
            local_3e0 = 0x3a4;
            FUN_00405ae0((int)local_238,(char *)abStackY_1b8ec);
            local_7cc = local_238;
            local_3d4 = local_3d4 + 1;
            std::string::append((int)local_228,(int)local_7cc);
            local_3d4 = local_3d4 + -1;
            if (local_230 != 0) {
              if (*(int *)(local_230 + -0xc) != -1) {
                local_7d0 = (int *)(local_230 + -0xc);
                if (local_7d0 == &DAT_00485bcc) {
                  iVar7 = 1;
                }
                else if (local_7d0 == &DAT_00485bcc) {
                  iVar7 = 1;
                }
                else {
                  *local_7d0 = *local_7d0 + -1;
                  iVar7 = *local_7d0 + 1;
                }
                if (iVar7 != 0) goto LAB_0040a578;
              }
              local_7d4 = local_230 + -0xc;
              local_7d8 = local_230 + -0xc;
              operator_delete();
              local_7dc = 0;
              local_7e0 = local_238;
              local_230 = 0;
              uStackY_5d0a4 = 0;
            }
LAB_0040a578:
            local_3e0 = 0x398;
            std::string::replace_fill((int)local_228,*(uint *)(local_220 + -4),0,1,10);
            (**(code **)(*param_1 + 0xc))();
            local_46c = local_7b4;
            local_3d4 = local_3d4 + -1;
            if (local_220 != 0) {
              if (*(int *)(local_220 + -0xc) != -1) {
                local_7e4 = (int *)(local_220 + -0xc);
                if (local_7e4 == &DAT_00485bcc) {
                  iVar7 = 1;
                }
                else if (local_7e4 == &DAT_00485bcc) {
                  iVar7 = 1;
                }
                else {
                  *local_7e4 = *local_7e4 + -1;
                  iVar7 = *local_7e4 + 1;
                }
                if (iVar7 != 0) goto LAB_0040a682;
              }
              local_7e8 = local_220 + -0xc;
              local_7ec = local_220 + -0xc;
              operator_delete();
              local_7f0 = 0;
              local_220 = 0;
              local_7f4 = local_228;
              uStackY_5d0b4 = 0;
            }
LAB_0040a682:
            local_3e0 = 0x350;
          }
        }
        local_7f8 = local_460;
        if (*(int *)(local_460 * 4 + local_60) == local_778) {
          local_7fc = (uint)(local_778 == 2);
          local_254 = 0;
          local_250 = 0;
          local_240 = 0;
          local_800 = 0x40;
          local_804 = 1;
          local_258 = 0x40;
          local_274 = 0;
          local_270 = 0;
          local_260 = 0;
          local_808 = 0x40;
          local_80c = 1;
          local_278 = 0x40;
          local_3d4 = local_3d4 + 2;
          local_814 = abStackY_1b8ec;
          do {
            local_818 = local_814;
            local_3e0 = 0x3e0;
            while( true ) {
              pbVar3 = (byte *)thunk_FUN_00467a3c((char *)local_814,&DAT_00475204);
              local_810 = pbVar3;
              if (((pbVar3 == (byte *)0x0) || (*pbVar3 != 0x5c)) ||
                 (local_810 = pbVar3 + 1, pbVar3[1] == 0)) break;
              local_814 = pbVar3 + 2;
            }
            if ((local_810 == (byte *)0x0) || (*local_810 == 0)) goto LAB_0040be6b;
            if (local_7fc != 0) {
              local_81c = 0;
              local_820 = &DAT_00485bd8;
              local_280 = &DAT_00485bd8;
              local_824 = local_288;
              puStackY_5d0c4 = &DAT_00485bd8;
              local_3d4 = local_3d4 + 1;
              local_3e0 = 0x41c;
              local_828 = 0;
              local_82c = 0xffffffff;
              local_814 = local_818;
              if (local_818 < local_810) {
                do {
                  pbVar3 = local_814;
                  local_814 = local_814 + 1;
                  local_82d = *pbVar3;
                  if (local_82d == 0x2b) {
                    if (local_828 == 0) {
                      local_82c = *(uint *)(local_280 + -4);
                    }
                    local_828 = local_828 + 1;
                  }
                  else if (local_828 != 1) {
                    if ((local_82d == 0x5c) && (local_814 < local_810)) {
                      local_82d = *local_814;
                      local_814 = pbVar3 + 2;
                    }
                    local_82e = local_82d;
                    std::string::replace_fill((int)local_288,*(uint *)(local_280 + -4),0,1,local_82d);
                  }
                } while (local_814 < local_810);
              }
              if (local_828 == 0) {
                local_82c = *(uint *)(local_280 + -4);
              }
              if (*(int *)(local_280 + -4) != 0) {
                local_3e0 = 0x428;
                FUN_00460aa0((int)local_298,(int)local_288,0,local_82c);
                local_3d4 = local_3d4 + 1;
                local_834 = local_298;
                if (local_250 == local_240) {
                  FUN_0041225c((int)&local_258,local_250,(int)local_298);
                }
                else {
                  local_838 = local_250;
                  local_29c = local_250;
                  if (local_250 != 0) {
                    local_3e0 = 0x434;
                    local_83c = 0;
                    *(undefined4 *)(local_250 + 8) = 0;
                    if (*(int *)(local_290 + -0xc) == -1 || *(int *)(local_290 + -0xc) + 1 < 0) {
                      local_84c = *(uint *)(local_290 + -4);
                      local_854 = std::string::__getRep(local_250,local_84c,local_84c);
                      local_850 = local_854 + 3;
                      *(int **)(local_29c + 8) = local_850;
                      local_858 = local_29c;
                      uStackY_5d0e4 = *(undefined4 *)(local_29c + 8);
                      local_85c = local_84c;
                      local_860 = *(undefined4 **)(local_834 + 8);
                      local_864 = *(undefined4 **)(local_29c + 8);
                      memcpy(local_864,local_860,local_84c);
                    }
                    else {
                      local_840 = local_290;
                      *(int *)(local_250 + 8) = local_290;
                      local_844 = local_250;
                      uStackY_5d0d4 = *(undefined4 *)(local_250 + 8);
                      local_848 = (int *)(*(int *)(local_250 + 8) + -0xc);
                      if (local_848 != &DAT_00485bcc) {
                        *local_848 = *local_848 + 1;
                      }
                    }
                    local_3e0 = 0x428;
                  }
                  local_250 = local_250 + 0x10;
                }
                local_3d4 = local_3d4 + -1;
                if (local_290 != 0) {
                  if (*(int *)(local_290 + -0xc) != -1) {
                    local_868 = (int *)(local_290 + -0xc);
                    if (local_868 == &DAT_00485bcc) {
                      iVar7 = 1;
                    }
                    else if (local_868 == &DAT_00485bcc) {
                      iVar7 = 1;
                    }
                    else {
                      *local_868 = *local_868 + -1;
                      iVar7 = *local_868 + 1;
                    }
                    if (iVar7 != 0) goto LAB_0040ac25;
                  }
                  local_86c = local_290 + -0xc;
                  local_870 = local_290 + -0xc;
                  operator_delete();
                  local_874 = 0;
                  local_878 = local_298;
                  local_290 = 0;
                  uStackY_5d0f4 = 0;
                }
LAB_0040ac25:
                local_3e0 = 0x458;
                FUN_00460aa0((int)local_2ac,(int)local_288,local_82c,(*(uint *)&DAT_00485f20));
                local_3d4 = local_3d4 + 1;
                local_87c = local_2ac;
                if (local_270 == local_260) {
                  FUN_0041225c((int)&local_278,local_270,(int)local_2ac);
                }
                else {
                  local_880 = local_270;
                  local_2b0 = local_270;
                  if (local_270 != 0) {
                    local_3e0 = 0x464;
                    local_884 = 0;
                    *(undefined4 *)(local_270 + 8) = 0;
                    if (*(int *)(local_2a4 + -0xc) == -1 || *(int *)(local_2a4 + -0xc) + 1 < 0) {
                      local_894 = *(uint *)(local_2a4 + -4);
                      local_89c = std::string::__getRep(local_270,local_894,local_894);
                      local_898 = local_89c + 3;
                      *(int **)(local_2b0 + 8) = local_898;
                      local_8a0 = local_2b0;
                      uStackY_5d114 = *(undefined4 *)(local_2b0 + 8);
                      local_8a4 = local_894;
                      local_8a8 = *(undefined4 **)(local_87c + 8);
                      local_8ac = *(undefined4 **)(local_2b0 + 8);
                      memcpy(local_8ac,local_8a8,local_894);
                    }
                    else {
                      local_888 = local_2a4;
                      *(int *)(local_270 + 8) = local_2a4;
                      local_88c = local_270;
                      uStackY_5d104 = *(undefined4 *)(local_270 + 8);
                      local_890 = (int *)(*(int *)(local_270 + 8) + -0xc);
                      if (local_890 != &DAT_00485bcc) {
                        *local_890 = *local_890 + 1;
                      }
                    }
                    local_3e0 = 0x458;
                  }
                  local_270 = local_270 + 0x10;
                }
                local_3d4 = local_3d4 + -1;
                if (local_2a4 != 0) {
                  if (*(int *)(local_2a4 + -0xc) != -1) {
                    local_8b0 = (int *)(local_2a4 + -0xc);
                    if (local_8b0 == &DAT_00485bcc) {
                      iVar7 = 1;
                    }
                    else if (local_8b0 == &DAT_00485bcc) {
                      iVar7 = 1;
                    }
                    else {
                      *local_8b0 = *local_8b0 + -1;
                      iVar7 = *local_8b0 + 1;
                    }
                    if (iVar7 != 0) goto LAB_0040aed1;
                  }
                  local_8b4 = local_2a4 + -0xc;
                  local_8b8 = local_2a4 + -0xc;
                  operator_delete();
                  local_8bc = 0;
                  local_2a4 = 0;
                  local_8c0 = local_2ac;
                  uStackY_5d124 = 0;
                }
LAB_0040aed1:
                local_3e0 = 0x41c;
              }
              local_3d4 = local_3d4 + -1;
              if (local_280 != (undefined *)0x0) {
                if (*(int *)(local_280 + -0xc) != -1) {
                  local_8c4 = (int *)(local_280 + -0xc);
                  if (local_8c4 == &DAT_00485bcc) {
                    iVar7 = 1;
                  }
                  else if (local_8c4 == &DAT_00485bcc) {
                    iVar7 = 1;
                  }
                  else {
                    *local_8c4 = *local_8c4 + -1;
                    iVar7 = *local_8c4 + 1;
                  }
                  if (iVar7 != 0) goto LAB_0040afa7;
                }
                local_8c8 = local_280 + -0xc;
                local_8cc = local_280 + -0xc;
                operator_delete();
                local_8d0 = 0;
                local_8d4 = local_288;
                local_280 = (undefined *)0x0;
                uStackY_5d134 = 0;
              }
            }
LAB_0040afa7:
            if (*local_810 == 0x3b) {
              local_7fc = 0;
            }
            else if (*local_810 == 0x7c) goto code_r0x0040afce;
            local_814 = local_810 + 1;
          } while( true );
        }
        goto LAB_0040bee9;
      }
      local_460 = 0;
      local_3d4 = local_3d4 + -2;
      if (local_1f4 != (undefined4 *)0x0) {
        local_a40 = local_1f4;
        local_a3c = local_1f4[2];
        in_stack_ffffe558 = local_218;
        FUN_00412010(auStackY_5d484,(int)in_stack_ffffe558,in_stack_ffffe55c,uVar15,local_a3c);
        local_a44 = local_1f4;
        local_1f4[3] = local_200;
        local_200 = local_1f4;
        FUN_0041221c((int)local_218);
      }
      local_3e0 = 0x50;
      local_778 = local_778 + 1;
    } while (local_778 < 3);
    local_b0f0 = FUN_00469b44(local_414);
    FUN_00405308();
    local_a48 = local_20;
    while ((local_a48 != local_1c && (DAT_00474fd8 == 0))) {
      local_a4c = local_a48;
      local_a50 = ((param_5 * 0x38 + local_a48) - local_20) / 0x38;
      if ((int)(uint)local_456 <= local_a50) break;
      local_464 = local_b420[local_a50];
      if (0 < (int)local_464) {
        local_344 = (undefined4 *)0x0;
        local_340 = (undefined4 *)0x0;
        local_330 = (undefined4 *)0x0;
        local_a54 = 0x40;
        local_a58 = 1;
        local_348 = 0x40;
        local_3d4 = local_3d4 + 1;
        local_3e0 = 0x5a8;
        FUN_004140d8((int)&local_348,local_464);
        iStackY_5d49c = *(int *)(*(int *)(local_a4c + 0x24) + 8);
        iStackY_5d48c = iStackY_5d49c;
        local_a5c = iStackY_5d49c;
LAB_0040c29d:
        iStackY_5d4bc = *(int *)(local_a4c + 0x24);
        iStackY_5d4ac = iStackY_5d4bc;
        local_a60 = iStackY_5d4bc;
        if (iStackY_5d4bc != iStackY_5d48c) {
          local_a64 = iStackY_5d48c + 0x10;
          local_3e0 = 0x5a8;
          if (local_340 == local_330) {
            FUN_004144d0((int)&local_348,local_340,&uStackY_5d494);
          }
          else {
            local_a68 = local_340;
            local_3ac = local_340;
            if (local_340 != (undefined4 *)0x0) {
              *local_340 = uStackY_5d494;
              local_340[1] = uStackY_5d490;
              local_340[2] = iStackY_5d48c;
              local_3e0 = 0x5b4;
            }
            local_340 = local_340 + 4;
          }
          do {
            uStackY_5d4d4 = uStackY_5d494;
            uStackY_5d4d0 = uStackY_5d490;
            iStackY_5d4cc = iStackY_5d48c;
            FUN_00411e60((int)&uStackY_5d494);
            uStackY_5d4e4 = uStackY_5d4d4;
            uStackY_5d4e0 = uStackY_5d4d0;
            iStackY_5d4dc = iStackY_5d4cc;
            iStackY_5d4fc = *(int *)(local_a4c + 0x24);
            iStackY_5d4ec = iStackY_5d4fc;
            local_a6c = iStackY_5d4fc;
            if (iStackY_5d4fc == iStackY_5d48c) break;
            local_a70 = iStackY_5d48c + 0x10;
            local_a74 = local_a64;
            uVar10 = FUN_0045ea80(local_a64,0,*(uint *)(*(int *)(local_a64 + 8) + -4),
                                  *(byte **)(iStackY_5d48c + 0x18),
                                  *(uint *)(*(int *)(iStackY_5d48c + 0x18) + -4));
          } while (uVar10 == 0);
          goto LAB_0040c29d;
        }
        if (param_8 == 0) {
          local_a78 = local_340;
          local_a7c = local_344;
          if (local_344 != local_340) {
            FUN_004148a8(local_344,local_340,0,(undefined*)FUN_00405f48);
            FUN_00414728(local_a7c,local_a78,(undefined*)FUN_00405f48);
          }
        }
        local_3e0 = 0x5cc;
        local_a80 = (int)local_340 - (int)local_344;
        if (local_a80 < 0) {
          local_a80 = local_a80 + 0xf;
        }
        local_a80 = local_a80 >> 4;
        local_364 = (int *)0x0;
        local_360 = 0;
        local_350 = 0;
        local_a84 = 0;
        FUN_0041047c(&local_368,local_a80,&local_a84);
        local_3d4 = local_3d4 + 1;
        local_a88 = 0;
        while( true ) {
          iVar7 = (int)local_340 - (int)local_344;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0xf;
          }
          if ((uint)(iVar7 >> 4) <= local_a88) break;
          local_a8c = 0;
          if (local_a50 <= (local_3c - local_40) / 0x38) {
            local_a94 = local_a50 + -1;
            local_a90 = (local_a50 + -1) * 0x38 + local_40;
            if (*(int *)(local_a90 + 0x28) != 0) {
              local_a9c = local_a88;
              local_a98 = local_344[local_a88 * 4 + 2] + 0x10;
              local_aa0 = 0;
              local_aa4 = &DAT_00485bd8;
              local_3b4 = &DAT_00485bd8;
              local_aa8 = local_3bc;
              puStackY_5d50c = &DAT_00485bd8;
              local_3d4 = local_3d4 + 1;
              local_3e0 = 0x5fc;
              for (local_aac = *(byte **)(local_344[local_a88 * 4 + 2] + 0x18); *local_aac != 0;
                  local_aac = local_aac + 1) {
                local_aad = *(char *)(param_2 + (uint)*local_aac);
                if ((local_aad != '\0') && (*(int *)(local_3b4 + -4) < local_a50)) {
                  local_aae = local_aad;
                  std::string::replace_fill((int)local_3bc,*(uint *)(local_3b4 + -4),0,1,local_aad);
                }
              }
              local_3e0 = 0x5fc;
              iStackY_5d52c = *(int *)(local_a90 + 0x24);
              local_ab4 = iStackY_5d52c;
              FUN_00411598(auStackY_5d544,local_a90,(int)local_3bc);
              puVar6 = auStackY_5d544;
              puVar12 = &uStackY_5d524;
              for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar12 = *puVar6;
                puVar6 = puVar6 + (uint)bVar14 * -2 + 1;
                puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
              }
              if (iStackY_5d51c != iStackY_5d52c) {
                local_ab8 = *(int *)(iStackY_5d51c + 0x20);
                if (local_ab8 == 0) {
                  local_a8c = 0x7fffffff;
                }
                else {
                  local_a8c = FUN_00469b44(local_414);
                  local_abc = *(uint **)(local_ab8 + 4);
                  while ((local_abc < *(uint **)(local_ab8 + 8) && (DAT_00474fd8 == 0))) {
                    uVar10 = *local_abc;
                    local_abc = local_abc + 1;
                    iVar7 = local_5c - local_60;
                    if (iVar7 < 0) {
                      iVar7 = iVar7 + 3;
                    }
                    local_ac0 = uVar10;
                    if (((int)uVar10 < iVar7 >> 2) &&
                       (local_ac0 = *(uint *)(uVar10 * 4 + local_60), local_ac4 = uVar10,
                       2 < (int)local_ac0)) {
                      if (*(uint **)(local_ab8 + 8) == local_abc) {
                        local_ac0 = local_ac0 | 0x80000000;
                      }
                      uVar10 = FUN_00469c98((byte *)&local_ac0,4,1,local_414);
                      if (uVar10 != 1) {
                        DAT_00474fd8 = 1;
                      }
                    }
                  }
                }
                if (local_ab8 != 0) {
                  FUN_004061b8(local_ab8,*(int *)(local_ab8 + 4),*(int *)(local_ab8 + 8));
                  local_ac8 = *(undefined4 *)(local_ab8 + 4);
                  operator_delete();
                  operator_delete();
                }
                uStackY_5d554 = uStackY_5d524;
                uStackY_5d550 = uStackY_5d520;
                iStackY_5d54c = iStackY_5d51c;
                FUN_004064dc(auStackY_5d564,local_a90,uStackY_5d524,uStackY_5d520,iStackY_5d51c);
              }
              if (local_3b4 != (undefined *)0x0) {
                if (*(int *)(local_3b4 + -0xc) != -1) {
                  local_acc = (int *)(local_3b4 + -0xc);
                  if (local_acc == &DAT_00485bcc) {
                    iVar7 = 1;
                  }
                  else if (local_acc == &DAT_00485bcc) {
                    iVar7 = 1;
                  }
                  else {
                    *local_acc = *local_acc + -1;
                    iVar7 = *local_acc + 1;
                  }
                  if (iVar7 != 0) goto LAB_0040c810;
                }
                local_ad0 = local_3b4 + -0xc;
                local_ad4 = local_3b4 + -0xc;
                operator_delete();
                local_ad8 = 0;
                local_3b4 = (undefined *)0x0;
                local_adc = local_3bc;
                uStackY_5d56c = 0;
              }
            }
          }
LAB_0040c810:
          local_ae0 = local_a88;
          local_364[local_a88] = local_a8c;
          local_a88 = local_a88 + 1;
        }
        local_ae8 = local_a50 + -1;
        local_ae4 = (local_a50 + -1) * 0x38 + local_40;
        local_384 = (DWORD *)0x0;
        local_380 = (DWORD *)0x0;
        local_370 = (DWORD *)0x0;
        local_aec = 0x100;
        local_af0 = 1;
        local_388 = 0x100;
        local_3d4 = local_3d4 + 1;
        local_3e0 = 0x5a8;
        iStackY_5d57c = *(int *)(*(int *)(local_ae4 + 0x24) + 8);
        local_af4 = iStackY_5d57c;
        while (iStackY_5d58c = *(int *)(local_ae4 + 0x24), local_af8 = iStackY_5d58c,
              iStackY_5d58c != iStackY_5d57c) {
          local_afc = iStackY_5d57c + 0x10;
          local_3e0 = 0x5a8;
          local_b00 = *(int *)(iStackY_5d57c + 0x20);
          if (local_b00 == 0) {
            local_b1c = 0x7fffffff;
            if (local_380 == local_370) {
              FUN_00411c88((int)&local_388,local_380,&local_b1c);
            }
            else {
              local_b20 = local_380;
              local_b24 = local_380;
              *local_380 = 0x7fffffff;
              local_380 = local_380 + 1;
            }
          }
          else {
            local_b04 = FUN_00469b44(local_414);
            if (local_380 == local_370) {
              FUN_00411c88((int)&local_388,local_380,&local_b04);
            }
            else {
              local_b08 = local_380;
              local_b0c = local_380;
              *local_380 = local_b04;
              local_380 = local_380 + 1;
            }
            local_b10 = *(uint **)(local_b00 + 4);
            while ((local_b10 < *(uint **)(local_b00 + 8) && (DAT_00474fd8 == 0))) {
              uVar10 = *local_b10;
              local_b10 = local_b10 + 1;
              local_3e0 = 0x5a8;
              iVar7 = local_5c - local_60;
              if (iVar7 < 0) {
                iVar7 = iVar7 + 3;
              }
              local_b14 = uVar10;
              if (((int)uVar10 < iVar7 >> 2) &&
                 (local_b14 = *(uint *)(uVar10 * 4 + local_60), local_b18 = uVar10,
                 2 < (int)local_b14)) {
                if (*(uint **)(local_b00 + 8) == local_b10) {
                  local_b14 = local_b14 | 0x80000000;
                }
                uVar10 = FUN_00469c98((byte *)&local_b14,4,1,local_414);
                if (uVar10 != 1) {
                  DAT_00474fd8 = 1;
                }
              }
            }
          }
          uStackY_5d5a4 = uStackY_5d584;
          uStackY_5d5a0 = uStackY_5d580;
          iStackY_5d59c = iStackY_5d57c;
          FUN_00406154((int)&uStackY_5d584);
          uStackY_5d5b4 = uStackY_5d5a4;
          uStackY_5d5b0 = uStackY_5d5a0;
          iStackY_5d5ac = iStackY_5d59c;
        }
        iVar7 = (int)local_380 - (int)local_384;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        if (iVar7 >> 2 != 0) {
          DVar2 = FUN_00469b44(local_414);
          local_b5b4[local_a50] = DVar2;
          local_b28 = local_384;
          while ((local_b28 < local_380 && (DAT_00474fd8 == 0))) {
            local_b2c = *local_b28;
            local_3e0 = 0x5a8;
            uVar10 = FUN_00469c98((byte *)&local_b2c,4,1,local_414);
            if (uVar10 != 1) {
              DAT_00474fd8 = 1;
            }
            local_b28 = local_b28 + 1;
          }
        }
        DVar2 = FUN_00469b44(local_414);
        aDStackY_b290[local_a50 + 1] = DVar2;
        for (local_b30 = local_a50; (1 < local_b30 && (aDStackY_b290[local_b30] == 0));
            local_b30 = local_b30 + -1) {
          aDStackY_b290[local_b30] = aDStackY_b290[local_a50 + 1];
        }
        FUN_00405140(auStackY_5d5c0,local_414);
        local_b34 = local_364;
        local_3a4 = (int *)0x0;
        local_3a0 = (int *)0x0;
        local_390 = (int *)0x0;
        local_b38 = 0x100;
        local_b3c = 1;
        local_3a8 = 0x100;
        local_3d4 = local_3d4 + 1;
        local_3e0 = 0x5a8;
        local_468 = 0;
        local_b40 = 0;
        local_b44 = 0;
        while( true ) {
          iVar7 = (int)local_340 - (int)local_344;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0xf;
          }
          if ((uint)(iVar7 >> 4) <= local_b44) break;
          local_b48 = local_b44;
          local_b4c = local_344 + local_b44 * 4;
          uStackY_5d5d0 = *local_b4c;
          uStackY_5d5cc = local_b4c[1];
          iStackY_5d5c8 = local_b4c[2];
          local_3e0 = 0x5a8;
          iVar7 = (**(code **)(*param_1 + 4))();
          if (iVar7 == 0) {
            (**(code **)(*param_1 + 0x10))();
            DAT_00474fd8 = 1;
            local_3d4 = local_3d4 + -1;
            FUN_004061b8(&local_3a8,(int)local_3a4,(int)local_3a0);
            local_bf8 = local_3a4;
            operator_delete();
            local_3e0 = 0x5a8;
            local_3d4 = local_3d4 + -1;
            FUN_004061b8(&local_388,(int)local_384,(int)local_380);
            local_bfc = local_384;
            operator_delete();
            local_3d4 = local_3d4 + -1;
            FUN_004061b8(&local_368,(int)local_364,local_360);
            local_c00 = local_364;
            operator_delete();
            local_3d4 = local_3d4 + -1;
            FUN_00414a7c(&local_348,(int)local_344,(int)local_340);
            local_c04 = local_344;
            operator_delete();
            local_3e0 = 0x50;
            goto LAB_0040d937;
          }
          local_b50 = iStackY_5d5c8 + 0x10;
          do {
            local_b54 = *(uint *)(iStackY_5d5c8 + 0x20);
            local_3e0 = 0x5a8;
            local_b58 = 0;
            iVar7 = local_5c - local_60;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 3;
            }
            if ((local_b54 < (uint)(iVar7 >> 2)) &&
               (local_b58 = *(int *)(local_b54 * 4 + local_60), local_b5c = local_b54, 2 < local_b58
               )) {
              if (local_3a0 == local_390) {
                FUN_00411c88((int)&local_3a8,local_3a0,&local_b58);
              }
              else {
                local_b60 = local_3a0;
                local_b64 = local_3a0;
                *local_3a0 = local_b58;
                local_3a0 = local_3a0 + 1;
              }
            }
            iStackY_5d5e8 = *(int *)(local_a4c + 0x24);
            iStackY_5d5d8 = iStackY_5d5e8;
            local_b68 = iStackY_5d5e8;
            local_b6c = FUN_00411e60((int)&uStackY_5d5d0);
            if (*(int *)(local_b6c + 8) == iStackY_5d5e8) break;
            local_b70 = iStackY_5d5c8 + 0x10;
            local_b74 = local_b50;
            uVar10 = FUN_0045ea80(local_b50,0,*(uint *)(*(int *)(local_b50 + 8) + -4),
                                  *(byte **)(iStackY_5d5c8 + 0x18),
                                  *(uint *)(*(int *)(iStackY_5d5c8 + 0x18) + -4));
          } while (uVar10 == 0);
          local_b78 = *local_b34;
          local_b34 = local_b34 + 1;
          if (local_b78 != 0) {
            if (local_3a0 == local_390) {
              FUN_00411c88((int)&local_3a8,local_3a0,&local_b78);
            }
            else {
              local_b7c = local_3a0;
              local_b80 = local_3a0;
              *local_3a0 = local_b78;
              local_3a0 = local_3a0 + 1;
            }
          }
          local_b84 = 0;
          iVar7 = (int)local_3a0 - (int)local_3a4;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 3;
          }
          if (local_b40 < (uint)(iVar7 >> 2)) {
            local_b84 = 1;
            iVar7 = (int)local_3a0 - (int)local_3a4;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 3;
            }
            local_b40 = iVar7 >> 2;
            local_b88 = local_b40 - 1;
            local_3a4[local_b88] = local_3a4[local_b88] | 0x80000000;
          }
          FUN_004051e4(auStackY_5d5c0,*(byte **)(local_b50 + 8),
                       *(int *)(*(int *)(local_b50 + 8) + -4) + 1);
          FUN_00405158(auStackY_5d5c0,1,local_b84);
          local_468 = local_468 + 1;
          local_b44 = local_b44 + 1;
        }
        FUN_00405228(auStackY_5d5c0);
        iStackY_5d5f8 = *(int *)(*(int *)(local_ae4 + 0x24) + 8);
        local_b8c = iStackY_5d5f8;
        while( true ) {
          iStackY_5d608 = *(int *)(local_ae4 + 0x24);
          local_b90 = iStackY_5d608;
          if (iStackY_5d608 == iStackY_5d5f8) break;
          local_3e0 = 0x65c;
          local_b94 = iStackY_5d5f8 + 0x10;
          local_b98 = 0;
          local_3c4 = (byte *)0x0;
          iVar7 = *(int *)(*(int *)(iStackY_5d5f8 + 0x18) + -0xc);
          if (iVar7 == -1 || iVar7 + 1 < 0) {
            local_ba8 = *(uint *)(*(int *)(iStackY_5d5f8 + 0x18) + -4);
            local_bb0 = std::string::__getRep(local_3cc,local_ba8,local_ba8);
            local_bb4 = local_3cc;
            pbStackY_5d648 = (byte *)(local_bb0 + 3);
            local_bb8 = local_ba8;
            local_bbc = *(undefined4 **)(local_b94 + 8);
            local_bc0 = pbStackY_5d648;
            local_bac = pbStackY_5d648;
            local_3c4 = pbStackY_5d648;
            memcpy((undefined4 *)pbStackY_5d648,local_bbc,local_ba8);
          }
          else {
            pbStackY_5d638 = *(byte **)(iStackY_5d5f8 + 0x18);
            local_b9c = pbStackY_5d638;
            local_3c4 = pbStackY_5d638;
            local_ba0 = local_3cc;
            local_ba4 = pbStackY_5d638 + -0xc;
            if (local_ba4 != (byte *)&DAT_00485bcc) {
              *(int *)local_ba4 = *(int *)local_ba4 + 1;
            }
          }
          local_3d4 = local_3d4 + 1;
          local_3e0 = 0x650;
          if (1 < *(int *)(local_3c4 + -0xc) + 1) {
            FUN_0045f64c((int)local_3cc);
          }
          local_bc8 = local_3c4 + -0xc;
          if (local_bc8 != (byte *)&DAT_00485bcc) {
            local_bc8[0] = 0xff;
            local_bc8[1] = 0xff;
            local_bc8[2] = 0xff;
            local_bc8[3] = 0xff;
          }
          local_bc4 = local_3c4;
          while( true ) {
            if (1 < *(int *)(local_3c4 + -0xc) + 1) {
              FUN_0045f64c((int)local_3cc);
            }
            local_bcc = local_3c4 + -0xc;
            if (local_bcc != (byte *)&DAT_00485bcc) {
              local_bcc[0] = 0xff;
              local_bcc[1] = 0xff;
              local_bcc[2] = 0xff;
              local_bcc[3] = 0xff;
            }
            if (local_3c4 + *(int *)(local_3c4 + -4) <= local_bc4) break;
            local_bcd = *local_bc4;
            local_3e0 = 0x650;
            local_bcd = local_d60[*local_bc4];
            *local_bc4 = local_bcd;
            local_bc4 = local_bc4 + 1;
          }
          FUN_004051e4(auStackY_5d5c0,local_3c4,*(int *)(local_3c4 + -4) + 1);
          local_bd4 = *(int *)(iStackY_5d5f8 + 0x20);
          if (local_bd4 != 0) {
            FUN_004061b8(local_bd4,*(int *)(local_bd4 + 4),*(int *)(local_bd4 + 8));
            local_bd8 = *(undefined4 *)(local_bd4 + 4);
            operator_delete();
            operator_delete();
          }
          *(undefined4 *)(iStackY_5d5f8 + 0x20) = 0;
          local_3d4 = local_3d4 + -1;
          if (local_3c4 != (byte *)0x0) {
            if (*(int *)(local_3c4 + -0xc) != -1) {
              local_bdc = local_3c4 + -0xc;
              if (local_bdc == (byte *)&DAT_00485bcc) {
                iVar7 = 1;
              }
              else if (local_bdc == (byte *)&DAT_00485bcc) {
                iVar7 = 1;
              }
              else {
                *(int *)local_bdc = *(int *)local_bdc + -1;
                iVar7 = *(int *)local_bdc + 1;
              }
              if (iVar7 != 0) goto LAB_0040d520;
            }
            local_be0 = local_3c4 + -0xc;
            local_be4 = local_3c4 + -0xc;
            operator_delete();
            local_be8 = 0;
            local_bec = local_3cc;
            local_3c4 = (byte *)0x0;
            uStackY_5d658 = 0;
          }
LAB_0040d520:
          local_3e0 = 0x5a8;
          uStackY_5d620 = uStackY_5d600;
          uStackY_5d61c = uStackY_5d5fc;
          iStackY_5d618 = iStackY_5d5f8;
          FUN_00406154((int)&uStackY_5d600);
          uStackY_5d630 = uStackY_5d620;
          uStackY_5d62c = uStackY_5d61c;
          iStackY_5d628 = iStackY_5d618;
        }
        FUN_00405228(auStackY_5d5c0);
        FUN_00405248(auStackY_5d5c0);
        iVar7 = (int)local_3a0 - (int)local_3a4;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        if (iVar7 >> 2 != 0) {
          DVar2 = FUN_00469b44(local_414);
          local_b748[local_a50] = DVar2;
          iVar7 = (int)local_3a0 - (int)local_3a4;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 3;
          }
          *(int *)(local_b8dc + local_a50 * 4) = iVar7 >> 2;
          local_bf0 = local_3a4;
          local_3e0 = 0x5a8;
          while ((local_bf0 != local_3a0 && (DAT_00474fd8 == 0))) {
            local_bf4 = *local_bf0;
            local_3e0 = 0x5a8;
            uVar10 = FUN_00469c98((byte *)&local_bf4,4,1,local_414);
            if (uVar10 != 1) {
              DAT_00474fd8 = 1;
            }
            local_bf0 = local_bf0 + 1;
          }
        }
        FUN_0046a5c8(auStackY_5da60,&DAT_0047537f);
        (**(code **)(*param_1 + 0xc))();
        local_3d4 = local_3d4 + -1;
        FUN_004061b8(&local_3a8,(int)local_3a4,(int)local_3a0);
        local_c08 = local_3a4;
        operator_delete();
        local_3d4 = local_3d4 + -1;
        FUN_004061b8(&local_388,(int)local_384,(int)local_380);
        local_c0c = local_384;
        operator_delete();
        local_3d4 = local_3d4 + -1;
        FUN_004061b8(&local_368,(int)local_364,local_360);
        local_c10 = local_364;
        operator_delete();
        local_3d4 = local_3d4 + -1;
        FUN_00414a7c(&local_348,(int)local_344,(int)local_340);
        local_c14 = local_344;
        operator_delete();
      }
      local_a48 = local_a48 + 0x38;
    }
    local_3e0 = 0x50;
    if (DAT_00474fd8 == 0) {
      FUN_0046a364(local_414);
      uVar10 = FUN_00469c98(&DAT_00476b74,1,4,local_414);
      if ((uVar10 != 4) || (uVar10 = FUN_00469c98((byte *)&local_456,2,1,local_414), uVar10 != 1)) {
        DAT_00474fd8 = 1;
      }
      uVar10 = FUN_00469c98(local_b0f8,4,3,local_414);
      if (uVar10 != 3) {
        DAT_00474fd8 = 1;
      }
      uVar10 = FUN_00469c98((byte *)local_b5b4,4,(uint)local_456,local_414);
      if (((uVar10 != local_456) ||
          (uVar10 = FUN_00469c98((byte *)local_b748,4,(uint)local_456,local_414),
          uVar10 != local_456)) ||
         (uVar10 = FUN_00469c98(local_b8dc,4,(uint)local_456,local_414), uVar10 != local_456)) {
        DAT_00474fd8 = 1;
      }
      uVar10 = FUN_00469c98((byte *)(aDStackY_b290 + 1),4,(uint)local_456,local_414);
      if (uVar10 != local_456) {
        DAT_00474fd8 = 1;
      }
    }
    if (DAT_00474fd8 != 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
LAB_0040d937:
  if (local_414 != (int *)0x0) {
    FUN_00469508(local_414);
  }
  iVar7 = 0;
  local_c34 = local_acc4;
  do {
    local_3f4 = 0;
    local_c60 = local_c34;
    do {
      operator_delete_array();
      local_3f4 = local_3f4 + 1;
    } while (local_3f4 < 0x65);
    iVar7 = iVar7 + 1;
    local_c34 = local_c34 + 0x65;
  } while (iVar7 < 0x65);
  bVar13 = DAT_00474fd8 == 0;
  uVar10 = (uint)bVar13;
  local_3d4 = local_3d4 + -1;
  if (local_6c != (undefined *)0x0) {
    if (*(int *)(local_6c + -0xc) != -1) {
      local_c18 = (int *)(local_6c + -0xc);
      if (local_c18 == &DAT_00485bcc) {
        iVar7 = 1;
      }
      else if (local_c18 == &DAT_00485bcc) {
        iVar7 = 1;
      }
      else {
        *local_c18 = *local_c18 + -1;
        iVar7 = *local_c18 + 1;
      }
      if (iVar7 != 0) goto LAB_0040da63;
    }
    local_c1c = local_6c + -0xc;
    local_c20 = local_6c + -0xc;
    uVar10 = (uint)bVar13;
    operator_delete();
    local_c24 = 0;
    local_6c = (undefined *)0x0;
    local_c28 = local_74;
  }
LAB_0040da63:
  local_3e0 = 0x50;
  local_3d4 = local_3d4 + -1;
  FUN_004061b8(&local_64,local_60,local_5c);
  local_c2c = local_60;
  operator_delete();
  local_3d4 = local_3d4 + -2;
  OccurrenceListCache::_dtor((int)&local_44,2);
  local_3d4 = local_3d4 + -1;
  FUN_00410620(&local_24,local_20,local_1c);
  local_c30 = local_20;
  operator_delete();
  *in_FS_OFFSET = local_3f0;
  return uVar10;
joined_r0x00407ad5:
  if (local_4d8 <= pbVar3) goto LAB_00407b3d;
  bVar5 = *pbVar3;
  if (bVar5 == 0x5c) {
    pbVar3 = pbVar3 + 1;
    bVar5 = *pbVar3;
  }
  else if (bVar5 == 0x2b) goto LAB_00407b3d;
  *(byte *)local_4dc = bVar5;
  local_4dc = (uint *)((int)local_4dc + 1);
  pbVar3 = pbVar3 + 1;
  goto joined_r0x00407ad5;
code_r0x004081d0:
  if (local_4d0 == local_464) goto LAB_004090c5;
  local_594 = (local_4d0 != local_4d4) + 1;
  local_3e0 = 0x50;
  iVar7 = local_5c - local_60;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 3;
  }
  if ((uint)(iVar7 >> 2) < local_45c + 1) {
    FUN_00411168((int)&local_64,local_45c + 1);
  }
  local_598 = local_45c;
  *(int *)(local_45c * 4 + local_60) = local_594;
  if (local_594 != 2) goto LAB_004090c5;
  local_3e0 = 0x1ac;
  FUN_00405568((int)local_154,(uint *)(local_4d8 + 1));
  local_59c = 0;
  local_5a0 = &DAT_00485bd8;
  local_15c = (int *)&DAT_00485bd8;
  local_5a4 = local_164;
  puStackY_1c9c4 = &DAT_00485bd8;
  local_3d4 = local_3d4 + 2;
  local_3e0 = 0x1a0;
  local_5a8 = local_14c;
  while (*local_5a8 != 0) {
    bVar5 = *(byte *)(param_2 + (uint)*local_5a8);
    local_5a8 = local_5a8 + 1;
    local_3e0 = 0x1a0;
    if (bVar5 != 0) {
      if ((&DAT_0048b950)[bVar5] == 0) {
        (&DAT_0048b950)[bVar5] = 1;
      }
      local_5a9 = bVar5;
      std::string::replace_fill((int)local_164,local_15c[-1],0,1,bVar5);
    }
    if (((bVar5 == 0) || (*local_5a8 == 0)) && (local_15c[-1] != 0)) {
      local_3e0 = 0x1d0;
      std::string::string_from_cstr((int)local_174,(uint *)&DAT_0047524b);
      local_3d4 = local_3d4 + 1;
      local_3e0 = 0x1dc;
      FUN_00460414((int)local_174,1,(int)local_164);
      if (((uint)local_15c[-1] <= (uint)((local_3c - local_40) / 0x38)) &&
         (iVar7 = FUN_00462af8((int)local_74,local_16c,0,*(int *)(local_16c + -4)), iVar7 == -1)) {
        piVar11 = (int *)((local_15c[-1] + -1) * 0x38 + local_40);
        iStackY_1c9e4 = piVar11[9];
        local_5b8 = iStackY_1c9e4;
        FUN_00411598(auStackY_1c9fc,(int)piVar11,(int)local_164);
        puVar6 = auStackY_1c9fc;
        puVar12 = auStackY_1c9dc;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar6;
          puVar6 = puVar6 + (uint)bVar14 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
        }
        if (iStackY_1c9d4 == iStackY_1c9e4) {
          if (param_7 == 0) {
            local_5bc = 0;
            local_5c0 = 0;
            local_184 = (int *)0x0;
            if (local_15c[-3] == -1 || local_15c[-3] + 1 < 0) {
              local_5d0 = local_15c[-1];
              local_5d8 = std::string::__getRep(local_18c,local_5d0,local_5d0);
              local_5dc = local_18c;
              piStackY_1ca14 = local_5d8 + 3;
              local_5e0 = local_5d0;
              local_5e4 = local_15c;
              local_5e8 = piStackY_1ca14;
              local_5d4 = piStackY_1ca14;
              local_184 = piStackY_1ca14;
              memcpy(piStackY_1ca14,local_15c,local_5d0);
            }
            else {
              local_5c8 = local_18c;
              local_5c4 = local_15c;
              local_184 = local_15c;
              piStackY_1ca04 = local_15c;
              local_5cc = local_15c + -3;
              if (local_5cc != &DAT_00485bcc) {
                *local_5cc = *local_5cc + 1;
              }
            }
            local_17c = local_5bc;
            FUN_00411694(auStackY_1ca34,piVar11,(int)local_18c);
            puVar6 = (undefined4 *)(iStackY_1ca2c + 0x20);
            if (local_184 != (int *)0x0) {
              if (local_184[-3] != -1) {
                local_5ec = local_184 + -3;
                if (local_5ec == &DAT_00485bcc) {
                  iVar7 = 1;
                }
                else if (local_5ec == &DAT_00485bcc) {
                  iVar7 = 1;
                }
                else {
                  *local_5ec = *local_5ec + -1;
                  iVar7 = *local_5ec + 1;
                }
                if (iVar7 != 0) goto LAB_004086cc;
              }
              local_5f0 = local_184 + -3;
              local_5f4 = local_184 + -3;
              operator_delete();
              local_5f8 = 0;
              local_5fc = local_18c;
              local_184 = (int *)0x0;
              uStackY_1ca3c = 0;
            }
LAB_004086cc:
            *puVar6 = 0;
          }
          else {
            local_190 = (undefined4 *)operator_new();
            if (local_190 != (undefined4 *)0x0) {
              local_190[1] = 0;
              local_190[2] = 0;
              local_604 = local_190 + 4;
              local_190[6] = 0;
              FUN_0041047c(local_190,1,&local_45c);
            }
            local_608 = 0;
            local_60c = 0;
            local_1a0 = (int *)0x0;
            local_600 = local_190;
            if (local_15c[-3] == -1 || local_15c[-3] + 1 < 0) {
              local_61c = local_15c[-1];
              local_624 = std::string::__getRep(local_1a8,local_61c,local_61c);
              local_628 = local_1a8;
              piStackY_1ca5c = local_624 + 3;
              local_62c = local_61c;
              local_630 = local_15c;
              local_634 = piStackY_1ca5c;
              local_620 = piStackY_1ca5c;
              local_1a0 = piStackY_1ca5c;
              memcpy(piStackY_1ca5c,local_15c,local_61c);
            }
            else {
              local_614 = local_1a8;
              local_610 = local_15c;
              local_1a0 = local_15c;
              piStackY_1ca4c = local_15c;
              local_618 = local_15c + -3;
              if (local_618 != &DAT_00485bcc) {
                *local_618 = *local_618 + 1;
              }
            }
            local_198 = local_608;
            FUN_00411694(auStackY_1ca7c,piVar11,(int)local_1a8);
            puVar6 = (undefined4 *)(iStackY_1ca74 + 0x20);
            if (local_1a0 != (int *)0x0) {
              if (local_1a0[-3] != -1) {
                local_638 = local_1a0 + -3;
                if (local_638 == &DAT_00485bcc) {
                  iVar7 = 1;
                }
                else if (local_638 == &DAT_00485bcc) {
                  iVar7 = 1;
                }
                else {
                  *local_638 = *local_638 + -1;
                  iVar7 = *local_638 + 1;
                }
                if (iVar7 != 0) goto LAB_0040899e;
              }
              local_63c = local_1a0 + -3;
              local_640 = local_1a0 + -3;
              operator_delete();
              local_644 = 0;
              local_648 = local_1a8;
              local_1a0 = (int *)0x0;
              uStackY_1ca84 = 0;
            }
LAB_0040899e:
            *puVar6 = local_600;
          }
        }
        else {
          local_64c = *(int *)(iStackY_1c9d4 + 0x20);
          if (local_64c != 0) {
            iVar7 = *(int *)(local_64c + 8) - *(int *)(local_64c + 4);
            if (iVar7 < 0) {
              iVar7 = iVar7 + 3;
            }
            local_650 = iVar7 >> 2;
            if ((local_650 < 0x65) || ((double)local_650 * local_41c <= (double)(int)local_45c)) {
              if ((local_650 == 0) ||
                 (local_658 = local_650 - 1,
                 *(uint *)(*(int *)(local_64c + 4) + local_658 * 4) != local_45c)) {
                if (*(int *)(local_64c + 8) == *(int *)(local_64c + 0x18)) {
                  FUN_00411c88(local_64c,*(undefined4 **)(local_64c + 8),&local_45c);
                }
                else {
                  local_660 = *(uint **)(local_64c + 8);
                  *local_660 = local_45c;
                  *(int *)(local_64c + 8) = *(int *)(local_64c + 8) + 4;
                  local_65c = local_660;
                }
              }
            }
            else {
              if (local_64c != 0) {
                FUN_004061b8(local_64c,*(int *)(local_64c + 4),*(int *)(local_64c + 8));
                local_654 = *(undefined4 *)(local_64c + 4);
                operator_delete();
                operator_delete();
              }
              *(undefined4 *)(iStackY_1c9d4 + 0x20) = 0;
            }
          }
        }
      }
      local_664 = (*(uint *)&DAT_00485f20);
      local_6b4 = local_15c[-1];
      local_6b5 = 0;
      local_6bc = local_6b4;
      if ((*(uint *)&DAT_00485f20) < local_6b4) {
        local_6bc = (*(uint *)&DAT_00485f20);
      }
      in_stack_ffffe55c = (undefined ***)0x408e41;
      FUN_0045a224((int)local_164,0,local_6bc,(uint)&local_6b5,0,0,0);
      local_3d4 = local_3d4 + -1;
      if (local_16c != (byte *)0x0) {
        if (*(int *)(local_16c + -0xc) != -1) {
          local_6c0 = local_16c + -0xc;
          if (local_6c0 == (byte *)&DAT_00485bcc) {
            iVar7 = 1;
          }
          else if (local_6c0 == (byte *)&DAT_00485bcc) {
            iVar7 = 1;
          }
          else {
            *(int *)local_6c0 = *(int *)local_6c0 + -1;
            iVar7 = *(int *)local_6c0 + 1;
          }
          if (iVar7 != 0) goto LAB_00408f08;
        }
        local_6c4 = local_16c + -0xc;
        local_6c8 = local_16c + -0xc;
        operator_delete();
        local_6cc = 0;
        local_16c = (byte *)0x0;
        local_6d0 = local_174;
        uStackY_1cbb4 = 0;
      }
LAB_00408f08:
      local_3e0 = 0x1a0;
    }
  }
  local_3d4 = local_3d4 + -1;
  if (local_15c != (int *)0x0) {
    if (local_15c[-3] != -1) {
      local_6d4 = local_15c + -3;
      if (local_6d4 == &DAT_00485bcc) {
        iVar7 = 1;
      }
      else if (local_6d4 == &DAT_00485bcc) {
        iVar7 = 1;
      }
      else {
        *local_6d4 = *local_6d4 + -1;
        iVar7 = *local_6d4 + 1;
      }
      if (iVar7 != 0) goto LAB_00408fe7;
    }
    local_6d8 = local_15c + -3;
    local_6dc = local_15c + -3;
    operator_delete();
    local_6e0 = 0;
    local_15c = (int *)0x0;
    local_6e4 = local_164;
    uStackY_1cbc4 = 0;
  }
LAB_00408fe7:
  local_3e0 = 0x1a0;
  local_3d4 = local_3d4 + -1;
  if (local_14c != (byte *)0x0) {
    if (*(int *)(local_14c + -0xc) != -1) {
      local_6e8 = local_14c + -0xc;
      if (local_6e8 == (byte *)&DAT_00485bcc) {
        iVar7 = 1;
      }
      else if (local_6e8 == (byte *)&DAT_00485bcc) {
        iVar7 = 1;
      }
      else {
        *(int *)local_6e8 = *(int *)local_6e8 + -1;
        iVar7 = *(int *)local_6e8 + 1;
      }
      if (iVar7 != 0) goto LAB_004090b1;
    }
    local_6ec = local_14c + -0xc;
    local_6f0 = local_14c + -0xc;
    operator_delete();
    local_6f4 = 0;
    local_6f8 = local_154;
    local_14c = (byte *)0x0;
    uStackY_1cbd4 = 0;
  }
LAB_004090b1:
  local_3e0 = 0x50;
LAB_004090c5:
  local_45c = local_45c + 1;
  goto LAB_004090cb;
code_r0x0040afce:
  local_3e0 = 0x494;
  std::string::string_from_cstr((int)local_2c0,(uint *)(local_810 + 1));
  local_3d4 = local_3d4 + 1;
  local_3e0 = 0x4a0;
  local_8e0 = local_2b8[-1];
  if (local_8e0 != 0) {
    local_8e4 = local_8e0 - 1;
    if (1 < local_2b8[-3] + 1) {
      FUN_0045f64c((int)local_2c0);
    }
    local_8e8 = local_2b8 + -3;
    if (local_8e8 != &DAT_00485bcc) {
      *local_8e8 = -1;
    }
    if (*(char *)((int)local_2b8 + local_8e4) == '\n') {
      local_8ec = local_8e0 - 1;
      local_8e0 = local_8ec;
      if ((*(uint *)&DAT_00485f20) - 0xe < local_8ec) {
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0;
        uVar10 = 1;
        puVar16 = &LAB_00402064;
        uVar15 = 0;
        local_3e0 = 0x4b8;
        uStackY_1abc = 0x40b0e5;
        local_8f0 = (uint *)FUN_004670cc(auStackY_5d22c,
                                         PTR_s_invalid_string_size_parameter_in_00488a54);
        std::string::string_from_cstr((int)local_300,local_8f0);
        local_2d8[0] = &std::exception::vftable;
        local_3d4 = local_3d4 + 2;
        local_2d8[0] = &std::logic_error::vftable;
        local_8fc = 0;
        local_2c8 = (int *)0x0;
        local_3e0 = 0x4c4;
        if (local_2f8[-3] == -1 || local_2f8[-3] + 1 < 0) {
          local_90c = local_2f8[-1];
          local_914 = std::string::__getRep(local_2d0,local_90c,local_90c);
          local_918 = local_2d0;
          piStackY_5d244 = local_914 + 3;
          local_91c = local_90c;
          local_920 = local_2f8;
          local_924 = piStackY_5d244;
          local_910 = piStackY_5d244;
          local_2c8 = piStackY_5d244;
          memcpy(piStackY_5d244,local_2f8,local_90c);
        }
        else {
          local_900 = local_2f8;
          local_2c8 = local_2f8;
          local_904 = local_2d0;
          piStackY_5d234 = local_2f8;
          local_908 = local_2f8 + -3;
          if (local_908 != &DAT_00485bcc) {
            *local_908 = *local_908 + 1;
          }
        }
        local_3e0 = 0x4b8;
        local_2d8[0] = &std::length_error::vftable;
        local_3d4 = local_3d4 + 2;
        if (local_2f8 != (int *)0x0) {
          if (local_2f8[-3] != -1) {
            local_928 = local_2f8 + -3;
            if (local_928 == &DAT_00485bcc) {
              iVar7 = 1;
            }
            else if (local_928 == &DAT_00485bcc) {
              iVar7 = 1;
            }
            else {
              *local_928 = *local_928 + -1;
              iVar7 = *local_928 + 1;
            }
            if (iVar7 != 0) goto LAB_0040b32f;
          }
          local_92c = local_2f8 + -3;
          local_930 = local_2f8 + -3;
          operator_delete();
          local_934 = 0;
          local_938 = local_300;
          local_2f8 = (int *)0x0;
          uStackY_5d254 = 0;
        }
LAB_0040b32f:
        local_3e0 = 0x4ac;
        in_stack_ffffe55c = local_2d8;
        in_stack_ffffe558 = (int *)&DAT_00402008;
        FUN_00471ae8((uint *)&DAT_00402008,(undefined4*)in_stack_ffffe55c,uVar15,puVar16,uVar10,uVar17,uVar18,
                     uVar19);
      }
      if (local_8ec < (uint)local_2b8[-1]) {
        local_93c = local_2b8[-1] - local_8ec;
        if ((uint)local_2b8[-1] < local_8ec) {
          uVar19 = 0;
          uVar18 = 0;
          uVar17 = 0;
          uVar10 = 1;
          puVar16 = &LAB_004021bc;
          uVar15 = 0;
          local_3e0 = 0x4e8;
          uStackY_1abc = 0x40b3ce;
          local_940 = (uint *)FUN_004670cc(auStackY_5d34c,
                                           PTR_s_string_index_out_of_range_in_fun_00488a60);
          std::string::string_from_cstr((int)local_310,local_940);
          local_2f0[0] = &std::exception::vftable;
          local_3d4 = local_3d4 + 2;
          local_2f0[0] = &std::logic_error::vftable;
          local_94c = 0;
          local_2e0 = (int *)0x0;
          local_3e0 = 0x4f4;
          if (local_308[-3] == -1 || local_308[-3] + 1 < 0) {
            local_95c = local_308[-1];
            local_964 = std::string::__getRep(local_2e8,local_95c,local_95c);
            local_968 = local_2e8;
            piStackY_5d364 = local_964 + 3;
            local_96c = local_95c;
            local_970 = local_308;
            local_974 = piStackY_5d364;
            local_960 = piStackY_5d364;
            local_2e0 = piStackY_5d364;
            memcpy(piStackY_5d364,local_308,local_95c);
          }
          else {
            local_950 = local_308;
            local_2e0 = local_308;
            local_954 = local_2e8;
            piStackY_5d354 = local_308;
            local_958 = local_308 + -3;
            if (local_958 != &DAT_00485bcc) {
              *local_958 = *local_958 + 1;
            }
          }
          local_3e0 = 0x4e8;
          local_2f0[0] = &std::out_of_range::vftable;
          local_3d4 = local_3d4 + 2;
          if (local_308 != (int *)0x0) {
            if (local_308[-3] != -1) {
              local_978 = local_308 + -3;
              if (local_978 == &DAT_00485bcc) {
                iVar7 = 1;
              }
              else if (local_978 == &DAT_00485bcc) {
                iVar7 = 1;
              }
              else {
                *local_978 = *local_978 + -1;
                iVar7 = *local_978 + 1;
              }
              if (iVar7 != 0) goto LAB_0040b618;
            }
            local_97c = local_308 + -3;
            local_980 = local_308 + -3;
            operator_delete();
            local_984 = 0;
            local_988 = local_310;
            local_308 = (int *)0x0;
            uStackY_5d374 = 0;
          }
LAB_0040b618:
          local_3e0 = 0x4ac;
          in_stack_ffffe558 = (int *)&DAT_00402160;
          FUN_00471ae8((uint *)&DAT_00402160,(undefined4*)local_2f0,uVar15,puVar16,uVar10,uVar17,uVar18,uVar19);
        }
        local_98c = local_2b8[-1] - local_8ec;
        local_98d = 0;
        local_994 = local_98c;
        if (local_93c < local_98c) {
          local_994 = local_93c;
        }
        in_stack_ffffe55c = (undefined ***)0x40b697;
        FUN_0045a224((int)local_2c0,local_8ec,local_994,(uint)&local_98d,0,0,0);
      }
      else {
        std::string::replace_fill((int)local_2c0,local_2b8[-1],0,local_8ec - local_2b8[-1],0);
      }
      local_998 = local_2b8 + -3;
      if (local_998 != &DAT_00485bcc) {
        *local_998 = 0;
      }
    }
  }
  if (local_778 == 1) {
    FUN_00412790(auStackY_5d38c,(int)local_218,(int)local_2c0);
    local_3e0 = 0x4a0;
    local_99c = local_1f4;
    puStackY_5d394 = local_1f4;
    if (local_1f4 != puStackY_5d384) {
      local_9f4 = puStackY_5d384[8];
      local_9f0 = local_460;
      *(undefined4 *)(local_460 * 4 + local_60) = *(undefined4 *)(puStackY_5d384[8] * 4 + local_60);
      puStackY_5d384[8] = local_460;
      local_3d4 = local_3d4 + -1;
      if (local_2b8 != (int *)0x0) {
        if (local_2b8[-3] != -1) {
          local_a20 = local_2b8 + -3;
          if (local_a20 == &DAT_00485bcc) {
            iVar7 = 1;
          }
          else if (local_a20 == &DAT_00485bcc) {
            iVar7 = 1;
          }
          else {
            *local_a20 = *local_a20 + -1;
            iVar7 = *local_a20 + 1;
          }
          if (iVar7 != 0) goto LAB_0040be6b;
        }
        local_a24 = local_2b8 + -3;
        local_a28 = local_2b8 + -3;
        operator_delete();
        local_a2c = 0;
        local_2b8 = (int *)0x0;
        local_a30 = local_2c0;
        uStackY_5d46c = 0;
      }
      goto LAB_0040be6b;
    }
    if (0xff < local_1f0) {
      local_9a0 = local_1f4[2];
      iStackY_5d3a4 = local_1f4[2];
      local_9a4 = (undefined4 *)local_1f4[2];
      puStackY_5d3b4 = (undefined4 *)local_1f4[2];
      while( true ) {
        local_9a8 = local_1f4;
        puStackY_5d3c4 = local_1f4;
        if (local_1f4 == puStackY_5d3b4) break;
        if ((int)puStackY_5d3b4[8] < *(int *)(iStackY_5d3a4 + 0x20)) {
          puVar6 = &uStackY_5d3bc;
          puVar12 = &uStackY_5d3ac;
          for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar12 = *puVar6;
            puVar6 = puVar6 + (uint)bVar14 * -2 + 1;
            puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
          }
        }
        uStackY_5d3dc = uStackY_5d3bc;
        uStackY_5d3d8 = uStackY_5d3b8;
        puStackY_5d3d4 = puStackY_5d3b4;
        FUN_0041288c((int)&uStackY_5d3bc);
        uStackY_5d3ec = uStackY_5d3dc;
        uStackY_5d3e8 = uStackY_5d3d8;
        puStackY_5d3e4 = puStackY_5d3d4;
      }
      uStackY_5d3fc = uStackY_5d3ac;
      uStackY_5d3f8 = uStackY_5d3a8;
      iStackY_5d3f4 = iStackY_5d3a4;
      FUN_004128f0(auStackY_5d40c,(int)local_218,uStackY_5d3ac,uStackY_5d3a8,iStackY_5d3a4);
    }
    local_9ac = 0;
    local_9b0 = 0;
    local_320 = (int *)0x0;
    local_3e0 = 0x530;
    if (local_2b8[-3] == -1 || local_2b8[-3] + 1 < 0) {
      local_9c0 = local_2b8[-1];
      local_9c8 = std::string::__getRep(local_328,local_9c0,local_9c0);
      local_9cc = local_328;
      piStackY_5d424 = local_9c8 + 3;
      local_9d0 = local_9c0;
      local_9d4 = local_2b8;
      local_9d8 = piStackY_5d424;
      local_9c4 = piStackY_5d424;
      local_320 = piStackY_5d424;
      memcpy(piStackY_5d424,local_2b8,local_9c0);
    }
    else {
      local_9b4 = local_2b8;
      local_320 = local_2b8;
      local_9b8 = local_328;
      piStackY_5d414 = local_2b8;
      local_9bc = local_2b8 + -3;
      if (local_9bc != &DAT_00485bcc) {
        *local_9bc = *local_9bc + 1;
      }
    }
    local_3e0 = 0x524;
    local_318 = local_9ac;
    local_3d4 = local_3d4 + 2;
    FUN_004132dc(auStackY_5d444,local_218,(int)local_328);
    puVar4 = (uint *)(iStackY_5d43c + 0x20);
    local_3d4 = local_3d4 + -2;
    if (local_320 != (int *)0x0) {
      if (local_320[-3] != -1) {
        local_9dc = local_320 + -3;
        if (local_9dc == &DAT_00485bcc) {
          iVar7 = 1;
        }
        else if (local_9dc == &DAT_00485bcc) {
          iVar7 = 1;
        }
        else {
          *local_9dc = *local_9dc + -1;
          iVar7 = *local_9dc + 1;
        }
        if (iVar7 != 0) goto LAB_0040baeb;
      }
      local_9e0 = local_320 + -3;
      local_9e4 = local_320 + -3;
      operator_delete();
      local_9e8 = 0;
      local_9ec = local_328;
      local_320 = (int *)0x0;
      uStackY_5d44c = 0;
    }
LAB_0040baeb:
    local_3e0 = 0x518;
    *puVar4 = local_460;
  }
  DVar2 = FUN_00469b44(local_414);
  local_9f8 = local_460;
  *(DWORD *)(local_460 * 4 + local_60) = DVar2;
  iVar7 = local_250 - local_254;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xf;
  }
  if (0xff < (uint)(iVar7 >> 4)) {
    FUN_00413a78((int)&local_258,0xff);
    FUN_00413a78((int)&local_278,0xff);
  }
  iVar7 = local_250 - local_254;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xf;
  }
  local_9f9 = (byte)(iVar7 >> 4);
  local_3e0 = 0x4a0;
  uVar10 = FUN_00469c98(&local_9f9,1,1,local_414);
  if (uVar10 != 1) {
    DAT_00474fd8 = 1;
  }
  local_a00 = 0;
  while( true ) {
    iVar7 = local_250 - local_254;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xf;
    }
    if ((uint)(iVar7 >> 4) <= local_a00) break;
    local_a04 = local_a00;
    uVar10 = FUN_00405d6c(local_414,local_a00 * 0x10 + local_254);
    if (uVar10 == 0) {
LAB_0040bd31:
      DAT_00474fd8 = 1;
    }
    else {
      local_a08 = local_a00;
      uVar10 = FUN_00405d6c(local_414,local_a00 * 0x10 + local_274);
      if (uVar10 == 0) goto LAB_0040bd31;
    }
    local_a00 = local_a00 + 1;
  }
  uVar10 = FUN_00405d6c(local_414,(int)local_2c0);
  if (uVar10 == 0) {
    DAT_00474fd8 = 1;
  }
  local_3d4 = local_3d4 + -1;
  if (local_2b8 != (int *)0x0) {
    if (local_2b8[-3] != -1) {
      local_a0c = local_2b8 + -3;
      if (local_a0c == &DAT_00485bcc) {
        iVar7 = 1;
      }
      else if (local_a0c == &DAT_00485bcc) {
        iVar7 = 1;
      }
      else {
        *local_a0c = *local_a0c + -1;
        iVar7 = *local_a0c + 1;
      }
      if (iVar7 != 0) goto LAB_0040be4b;
    }
    local_a10 = local_2b8 + -3;
    local_a14 = local_2b8 + -3;
    operator_delete();
    local_a18 = 0;
    local_2b8 = (int *)0x0;
    local_a1c = local_2c0;
    uStackY_5d45c = 0;
  }
LAB_0040be4b:
  local_3e0 = 0x4a0;
LAB_0040be6b:
  local_3d4 = local_3d4 + -1;
  FUN_00414020(&local_278,local_274,local_270);
  local_a34 = local_274;
  operator_delete();
  local_3e0 = 0x3e0;
  local_3d4 = local_3d4 + -1;
  FUN_00414020(&local_258,local_254,local_250);
  local_a38 = local_254;
  operator_delete();
  local_3e0 = 0x350;
LAB_0040bee9:
  local_460 = local_460 + 1;
  goto LAB_0040beef;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ea08  FUN_0040ea08   (249 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040ea31) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x0040ea39 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0040ea08(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x476030);
  *param_1 = 0x12;
  piVar1 = (int *)operator_new();
  if (piVar1 == (int *)0x0) {
    local_8 = &std::bad_alloc::vftable;
    FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_8,0,&LAB_0040eb80,1,0,0,0);
  }
  param_1[1] = piVar1;
  FUN_0040ebc0(piVar1,param_2,param_3);
  param_1[2] = param_1[1] + param_2 * 0x38;
  param_1[6] = param_1[2];
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ebc0  FUN_0040ebc0   (434 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040ebc0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x476080);
  piVar2 = param_1;
  while (param_1 = piVar2, iVar1 = param_2 + -1, param_2 != 0) {
    piVar2 = param_1 + 0xe;
    param_2 = iVar1;
    if (param_1 != (int *)0x0) {
      param_1[4] = 0;
      param_1[9] = 0;
      param_1[10] = *(int *)(param_3 + 0x28);
      *(undefined1 *)(param_1 + 0xb) = 1;
      *param_1 = 1;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      puVar3 = (undefined4 *)param_1[6];
      if (param_1[6] == 0) {
        if (param_1[7] == param_1[8]) {
          WordListMap::AllocateNode(param_1);
          puVar3 = (undefined4 *)param_1[7];
          param_1[7] = param_1[7] + 0x28;
        }
        else {
          puVar3 = (undefined4 *)param_1[7];
          param_1[7] = param_1[7] + 0x28;
        }
      }
      else {
        param_1[6] = *(int *)(param_1[6] + 0xc);
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      param_1[9] = (int)puVar3;
      *param_1 = 0x2a;
      *(undefined4 *)param_1[9] = 0;
      puVar3 = FUN_0040edb8(param_1,*(undefined4 **)(*(int *)(param_3 + 0x24) + 4),
                            (undefined4 *)param_1[9]);
      *(undefined4 **)(param_1[9] + 4) = puVar3;
      if (*(int *)(param_1[9] + 4) == 0) {
        iVar1 = param_1[9];
        *(int *)(iVar1 + 8) = iVar1;
        *(int *)(iVar1 + 0xc) = iVar1;
      }
      else {
        uVar4 = FUN_0040eff4(*(int *)(param_1[9] + 4));
        *(undefined4 *)(param_1[9] + 8) = uVar4;
        uVar4 = FUN_0040f014(*(int *)(param_1[9] + 4));
        *(undefined4 *)(param_1[9] + 0xc) = uVar4;
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040edb8  FUN_0040edb8   (105 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0040edb8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  
  local_8 = param_2;
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[2]) {
    puVar1 = FUN_0040ee24(param_1,(int)(param_2 + 4));
    if (param_2 == local_8) {
      local_8 = puVar1;
    }
    param_3[2] = puVar1;
    puVar1[1] = param_3;
    *puVar1 = *param_2;
    puVar2 = FUN_0040edb8(param_1,(undefined4 *)param_2[3],puVar1);
    puVar1[3] = puVar2;
    param_3 = puVar1;
  }
  param_3[2] = 0;
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ee24  FUN_0040ee24   (381 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0040ee24(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4760f4);
  puVar3 = (undefined4 *)param_1[6];
  if (puVar3 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      WordListMap::AllocateNode(param_1);
      puVar3 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
    else {
      puVar3 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
  }
  else {
    param_1[6] = *(int *)(param_1[6] + 0xc);
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  if (puVar3 + 4 != (undefined4 *)0x0) {
    puVar3[6] = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar4 = std::string::__getRep(puVar3 + 4,uVar2,uVar2);
      puVar3[6] = piVar4 + 3;
      memcpy((undefined4 *)puVar3[6],*(undefined4 **)(param_2 + 8),uVar2);
    }
    else {
      puVar3[6] = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(puVar3[6] + -0xc);
      if (piVar4 != &DAT_00485bcc) {
        *piVar4 = *piVar4 + 1;
      }
    }
    puVar3[8] = *(undefined4 *)(param_2 + 0x10);
  }
  *in_FS_OFFSET = local_2c;
  return puVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eff4  FUN_0040eff4   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040eff4(int param_1)

{
  for (; *(int *)(param_1 + 8) != 0; param_1 = *(int *)(param_1 + 8)) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f014  FUN_0040f014   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040f014(int param_1)

{
  for (; *(int *)(param_1 + 0xc) != 0; param_1 = *(int *)(param_1 + 0xc)) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f034  FUN_0040f034   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040f034(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x38) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f04c  WordListMap::AllocateNode   (297 bytes, 2 ranges)   [notes (position-matched TEA.exe)]
//   same masked bytes as TEA.exe 0x00448c4c (297 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. node slab allocator for the duplicate-suppression map per your notes. Entry checked; body not read
//   file placement: inferred (address adjacency)
void __cdecl WordListMap::AllocateNode(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined **local_c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x476178);
  piVar1 = (int *)operator_new();
  if (piVar1 == (int *)0x0) {
    local_8 = &std::bad_alloc::vftable;
    FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_8,0,&LAB_0040eb80,1,0,0,0);
  }
  iVar2 = operator_new();
  if (iVar2 == 0) {
    local_c = &std::bad_alloc::vftable;
    FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_c,0,&LAB_0040eb80,1,0,0,0);
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[4];
  piVar1[1] = *param_1;
  param_1[4] = (int)piVar1;
  iVar2 = *(int *)(param_1[4] + 8);
  param_1[7] = iVar2;
  param_1[8] = iVar2 + *param_1 * 0x28;
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f198  FUN_0040f198   (258 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0040f198(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000024;
  undefined4 local_54 [4];
  undefined4 local_44 [6];
  int local_2c;
  int local_1c;
  undefined4 local_14 [4];
  
  local_14[2] = *(undefined4 *)(param_2 + 0x24);
  iVar3 = *(int *)(param_2 + 0x24);
  local_1c = *(int *)(iVar3 + 8);
  if (((local_1c == param_5) && (local_2c = iVar3, iVar3 == in_stack_00000024)) &&
     (*(int *)(param_2 + 0x28) != 0)) {
    FUN_0040f29c(param_2,*(int *)(iVar3 + 4));
    iVar3 = *(int *)(param_2 + 0x24);
    *(int *)(iVar3 + 8) = iVar3;
    *(undefined4 *)(iVar3 + 4) = 0;
    *(int *)(iVar3 + 0xc) = iVar3;
    *(undefined4 *)(param_2 + 0x28) = 0;
    local_44[2] = *(undefined4 *)(param_2 + 0x24);
    puVar4 = local_44;
    puVar5 = local_14;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    while (iVar3 = param_5, uVar2 = param_4, uVar1 = param_3, param_5 != in_stack_00000024) {
      FUN_0040fd50((int)&param_3);
      FUN_0040f3a4(local_54,param_2,uVar1,uVar2,iVar3);
      puVar4 = local_54;
      puVar5 = local_14;
      for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f29c  FUN_0040f29c   (262 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040f29c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4761b4);
  do {
    if (param_2 == 0) {
      *in_FS_OFFSET = local_2c;
      return;
    }
    FUN_0040f29c(param_1,*(int *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    if ((param_2 != -0x10) && (*(int *)(param_2 + 0x18) != 0)) {
      if (*(int *)(*(int *)(param_2 + 0x18) + -0xc) != -1) {
        piVar3 = (int *)(*(int *)(param_2 + 0x18) + -0xc);
        if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0040f37b;
      }
      operator_delete();
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
LAB_0040f37b:
    *(int *)(param_1 + 0x18) = param_2;
    param_2 = iVar1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f3a4  FUN_0040f3a4   (2455 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0040f3a4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_9c;
  int local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int local_88;
  int *local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  char local_35;
  int *local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int *local_8;
  
  __InitExceptBlockLDTC(0x4761f0);
  local_b4 = param_3;
  local_b0 = param_4;
  local_ac = param_5;
  local_30 = *(int *)(param_2 + 0x24);
  if (local_30 != param_5) {
    FUN_0040fd50((int)&local_b4);
  }
  FUN_0040fd40((undefined4*)&local_34,param_5);
  local_35 = '\0';
  local_3c = local_34 + 2;
  piVar2 = local_34;
  if (*local_3c == 0) {
    local_40 = local_34 + 3;
    if (*local_40 == 0) {
      piVar4 = (int *)local_34[1];
      local_44 = local_34;
      local_48 = local_34[1];
      if (*(int *)(param_2 + 0x24) == local_48) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_48;
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_48;
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_48 + 8) == local_34) {
        *(undefined4 *)(local_48 + 8) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_34) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_48;
        }
      }
      else {
        *(undefined4 *)(local_48 + 0xc) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_34) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_48;
        }
      }
      local_35 = '\x01';
    }
    else {
      piVar4 = (int *)local_34[3];
    }
  }
  else {
    local_4c = local_34 + 3;
    if (*local_4c == 0) {
      piVar4 = (int *)local_34[2];
    }
    else {
      for (piVar2 = (int *)local_34[3]; piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      }
      piVar4 = (int *)piVar2[3];
    }
  }
  if ((local_35 == '\0') && (piVar2 != local_34)) {
    *(int **)(local_34[2] + 4) = piVar2;
    piVar2[2] = local_34[2];
    if (piVar2 == (int *)local_34[3]) {
      if (piVar4 != (int *)0x0) {
        piVar4[1] = (int)piVar2;
      }
    }
    else {
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar2[1];
      }
      *(int **)(piVar2[1] + 8) = piVar4;
      piVar2[3] = local_34[3];
      *(int **)(local_34[3] + 4) = piVar2;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_34) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar2;
    }
    else if (*(int **)(local_34[1] + 8) == local_34) {
      *(int **)(local_34[1] + 8) = piVar2;
    }
    else {
      *(int **)(local_34[1] + 0xc) = piVar2;
    }
    piVar2[1] = local_34[1];
    if (piVar4 == (int *)0x0) {
      piVar4 = piVar2;
    }
    local_50 = local_34;
    local_58 = *piVar2;
    *piVar2 = *local_34;
    *local_34 = local_58;
    local_8c = local_34;
    local_54 = piVar2;
  }
  else {
    local_8c = piVar2;
    if (local_35 == '\0') {
      piVar4[1] = piVar2[1];
      if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_34) {
        *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar4;
      }
      else if (*(int **)(local_34[1] + 8) == local_34) {
        *(int **)(local_34[1] + 8) = piVar4;
      }
      else {
        *(int **)(local_34[1] + 0xc) = piVar4;
      }
      if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_34) {
        local_5c = local_34 + 3;
        if (*local_5c == 0) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_34[1];
        }
        else {
          uVar1 = FUN_0040eff4((int)piVar4);
          *(undefined4 *)(*(int *)(param_2 + 0x24) + 8) = uVar1;
        }
      }
      if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_34) {
        local_60 = local_34 + 2;
        if (*local_60 == 0) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_34[1];
        }
        else {
          uVar1 = FUN_0040f014((int)piVar4);
          *(undefined4 *)(*(int *)(param_2 + 0x24) + 0xc) = uVar1;
        }
      }
    }
  }
  if ((piVar4 != *(int **)(param_2 + 0x24)) && (*local_8c != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) || (*piVar4 != 1))
            goto LAB_0040fbf6;
            if (piVar4 != *(int **)(piVar4[1] + 8)) break;
            piVar2 = *(int **)(piVar4[1] + 0xc);
            if (piVar2 == (int *)0x0) {
              *piVar4 = 0;
              piVar4 = (int *)piVar4[1];
            }
            else {
              if (*piVar2 == 0) {
                *piVar2 = 1;
                *(undefined4 *)piVar4[1] = 0;
                iVar3 = piVar4[1];
                local_64 = *(int *)(iVar3 + 0xc);
                *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_64 + 8);
                if (*(int *)(local_64 + 8) != 0) {
                  *(int *)(*(int *)(local_64 + 8) + 4) = iVar3;
                }
                *(undefined4 *)(local_64 + 4) = *(undefined4 *)(iVar3 + 4);
                if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                  *(int *)(*(int *)(param_2 + 0x24) + 4) = local_64;
                }
                else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                  *(int *)(*(int *)(iVar3 + 4) + 8) = local_64;
                }
                else {
                  *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_64;
                }
                *(int *)(local_64 + 8) = iVar3;
                *(int *)(iVar3 + 4) = local_64;
                piVar2 = *(int **)(piVar4[1] + 0xc);
              }
              if (piVar2 == (int *)0x0) {
                *piVar4 = 0;
                piVar4 = (int *)piVar4[1];
              }
              else {
                if (((piVar2[2] != 0) && (*(int *)piVar2[2] != 1)) ||
                   ((piVar2[3] != 0 && (*(int *)piVar2[3] != 1)))) {
                  if ((piVar2[3] == 0) || (*(int *)piVar2[3] == 1)) {
                    if (piVar2[2] != 0) {
                      *(undefined4 *)piVar2[2] = 1;
                    }
                    *piVar2 = 0;
                    local_68 = piVar2[2];
                    piVar2[2] = *(int *)(local_68 + 0xc);
                    local_6c = (int *)(local_68 + 0xc);
                    if (*local_6c != 0) {
                      *(int **)(*(int *)(local_68 + 0xc) + 4) = piVar2;
                    }
                    *(int *)(local_68 + 4) = piVar2[1];
                    if (piVar2 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = local_68;
                    }
                    else if (piVar2 == *(int **)(piVar2[1] + 0xc)) {
                      *(int *)(piVar2[1] + 0xc) = local_68;
                    }
                    else {
                      *(int *)(piVar2[1] + 8) = local_68;
                    }
                    *(int **)(local_68 + 0xc) = piVar2;
                    piVar2[1] = local_68;
                    piVar2 = *(int **)(piVar4[1] + 0xc);
                  }
                  if (piVar2 != (int *)0x0) {
                    *piVar2 = *(int *)piVar4[1];
                    *(undefined4 *)piVar4[1] = 1;
                    if (piVar2[3] != 0) {
                      *(undefined4 *)piVar2[3] = 1;
                    }
                    iVar3 = piVar4[1];
                    local_70 = *(int *)(iVar3 + 0xc);
                    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_70 + 8);
                    if (*(int *)(local_70 + 8) != 0) {
                      *(int *)(*(int *)(local_70 + 8) + 4) = iVar3;
                    }
                    *(undefined4 *)(local_70 + 4) = *(undefined4 *)(iVar3 + 4);
                    if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = local_70;
                    }
                    else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                      *(int *)(*(int *)(iVar3 + 4) + 8) = local_70;
                    }
                    else {
                      *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_70;
                    }
                    *(int *)(local_70 + 8) = iVar3;
                    *(int *)(iVar3 + 4) = local_70;
                  }
                  goto LAB_0040fbf6;
                }
                *piVar2 = 0;
                piVar4 = (int *)piVar4[1];
              }
            }
          }
          piVar2 = *(int **)(piVar4[1] + 8);
          if (piVar2 != (int *)0x0) break;
          *piVar4 = 0;
          piVar4 = (int *)piVar4[1];
        }
        if (*piVar2 == 0) {
          *piVar2 = 1;
          *(undefined4 *)piVar4[1] = 0;
          iVar3 = piVar4[1];
          local_74 = *(int *)(iVar3 + 8);
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_74 + 0xc);
          local_78 = (int *)(local_74 + 0xc);
          if (*local_78 != 0) {
            *(int *)(*(int *)(local_74 + 0xc) + 4) = iVar3;
          }
          *(undefined4 *)(local_74 + 4) = *(undefined4 *)(iVar3 + 4);
          if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
            *(int *)(*(int *)(param_2 + 0x24) + 4) = local_74;
          }
          else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_74;
          }
          else {
            *(int *)(*(int *)(iVar3 + 4) + 8) = local_74;
          }
          *(int *)(local_74 + 0xc) = iVar3;
          *(int *)(iVar3 + 4) = local_74;
          piVar2 = *(int **)(piVar4[1] + 8);
        }
        if (piVar2 != (int *)0x0) break;
        *piVar4 = 0;
        piVar4 = (int *)piVar4[1];
      }
      if (((piVar2[3] != 0) && (*(int *)piVar2[3] != 1)) ||
         ((piVar2[2] != 0 && (*(int *)piVar2[2] != 1)))) break;
      *piVar2 = 0;
      piVar4 = (int *)piVar4[1];
    }
    if ((piVar2[2] == 0) || (*(int *)piVar2[2] == 1)) {
      local_7c = piVar2 + 3;
      if (*local_7c != 0) {
        *(undefined4 *)piVar2[3] = 1;
      }
      *piVar2 = 0;
      local_80 = piVar2[3];
      piVar2[3] = *(int *)(local_80 + 8);
      local_84 = (int *)(local_80 + 8);
      if (*local_84 != 0) {
        *(int **)(*(int *)(local_80 + 8) + 4) = piVar2;
      }
      *(int *)(local_80 + 4) = piVar2[1];
      if (piVar2 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = local_80;
      }
      else if (piVar2 == *(int **)(piVar2[1] + 8)) {
        *(int *)(piVar2[1] + 8) = local_80;
      }
      else {
        *(int *)(piVar2[1] + 0xc) = local_80;
      }
      *(int **)(local_80 + 8) = piVar2;
      piVar2[1] = local_80;
      piVar2 = *(int **)(piVar4[1] + 8);
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = *(int *)piVar4[1];
      *(undefined4 *)piVar4[1] = 1;
      if (piVar2[2] != 0) {
        *(undefined4 *)piVar2[2] = 1;
      }
      iVar3 = piVar4[1];
      local_88 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_88 + 0xc);
      if (*(int *)(local_88 + 0xc) != 0) {
        *(int *)(*(int *)(local_88 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(local_88 + 4) = *(undefined4 *)(iVar3 + 4);
      if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = local_88;
      }
      else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_88;
      }
      else {
        *(int *)(*(int *)(iVar3 + 4) + 8) = local_88;
      }
      *(int *)(local_88 + 0xc) = iVar3;
      *(int *)(iVar3 + 4) = local_88;
    }
LAB_0040fbf6:
    *piVar4 = 1;
  }
  local_8c[3] = *(int *)(param_2 + 0x18);
  local_90 = local_8c + 4;
  if (local_90 != (int *)0x0) {
    local_1c = 0x14;
    local_10 = local_10 + -2;
    if (local_8c[6] != 0) {
      if (*(int *)(local_8c[6] + -0xc) != -1) {
        local_94 = (int *)(local_8c[6] + -0xc);
        if (local_94 == &DAT_00485bcc) {
          iVar3 = 1;
        }
        else if (local_94 == &DAT_00485bcc) {
          iVar3 = 1;
        }
        else {
          *local_94 = *local_94 + -1;
          iVar3 = *local_94 + 1;
        }
        if (iVar3 != 0) goto LAB_0040fd00;
      }
      local_98 = local_8c[6] + -0xc;
      local_9c = local_8c[6] + -0xc;
      local_8 = local_90;
      operator_delete();
      local_8[2] = 0;
    }
  }
LAB_0040fd00:
  *(int **)(param_2 + 0x18) = local_8c;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = local_b4;
  param_1[1] = local_b0;
  param_1[2] = local_ac;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fd40  FUN_0040fd40   (13 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040fd40(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fd50  FUN_0040fd50   (99 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040fd50(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0xc) == 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 8) + 4); *(int *)(param_1 + 8) == *(int *)(iVar1 + 0xc)
        ; iVar1 = *(int *)(iVar1 + 4)) {
      *(int *)(param_1 + 8) = iVar1;
    }
    if (iVar1 != *(int *)(*(int *)(param_1 + 8) + 0xc)) {
      *(int *)(param_1 + 8) = iVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
    while (*(int *)(*(int *)(param_1 + 8) + 8) != 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fdb4  FUN_0040fdb4   (63 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040fdb4(int param_1)

{
  while (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x10);
    operator_delete();
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fdf4  FUN_0040fdf4   (249 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040fe1d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x0040fe25 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0040fdf4(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x47624c);
  *param_1 = 0x12;
  piVar1 = (int *)operator_new();
  if (piVar1 == (int *)0x0) {
    local_8 = &std::bad_alloc::vftable;
    FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_8,0,&LAB_0040eb80,1,0,0,0);
  }
  param_1[1] = piVar1;
  FUN_0040ff14(piVar1,param_2,param_3);
  param_1[2] = param_1[1] + param_2 * 0x38;
  param_1[6] = param_1[2];
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ff14  FUN_0040ff14   (454 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040ff14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47629c);
  piVar2 = param_1;
  while (param_1 = piVar2, iVar1 = param_2 + -1, param_2 != 0) {
    piVar2 = param_1 + 0xe;
    param_2 = iVar1;
    if (param_1 != (int *)0x0) {
      param_1[4] = 0;
      param_1[9] = 0;
      param_1[10] = *(int *)(param_3 + 0x28);
      *(undefined1 *)(param_1 + 0xb) = 0;
      param_1[0xc] = *(int *)(param_3 + 0x30);
      param_1[0xd] = *(int *)(param_3 + 0x34);
      *param_1 = 1;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      puVar3 = (undefined4 *)param_1[6];
      if (param_1[6] == 0) {
        if (param_1[7] == param_1[8]) {
          FUN_00410330(param_1);
          puVar3 = (undefined4 *)param_1[7];
          param_1[7] = param_1[7] + 0x28;
        }
        else {
          puVar3 = (undefined4 *)param_1[7];
          param_1[7] = param_1[7] + 0x28;
        }
      }
      else {
        param_1[6] = *(int *)(param_1[6] + 0xc);
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      param_1[9] = (int)puVar3;
      *param_1 = 0x2a;
      *(undefined4 *)param_1[9] = 0;
      puVar3 = FUN_00410104(param_1,*(undefined4 **)(*(int *)(param_3 + 0x24) + 4),
                            (undefined4 *)param_1[9]);
      *(undefined4 **)(param_1[9] + 4) = puVar3;
      if (*(int *)(param_1[9] + 4) == 0) {
        *(int *)(param_1[9] + 8) = param_1[9];
        *(int *)(param_1[9] + 0xc) = param_1[9];
      }
      else {
        uVar4 = FUN_00406e88(*(int *)(param_1[9] + 4));
        *(undefined4 *)(param_1[9] + 8) = uVar4;
        uVar4 = FUN_00406ea8(*(int *)(param_1[9] + 4));
        *(undefined4 *)(param_1[9] + 0xc) = uVar4;
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410104  FUN_00410104   (105 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00410104(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  
  local_8 = param_2;
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[2]) {
    puVar1 = FUN_00410170(param_1,(int)(param_2 + 4));
    if (param_2 == local_8) {
      local_8 = puVar1;
    }
    param_3[2] = puVar1;
    puVar1[1] = param_3;
    *puVar1 = *param_2;
    puVar2 = FUN_00410104(param_1,(undefined4 *)param_2[3],puVar1);
    puVar1[3] = puVar2;
    param_3 = puVar1;
  }
  param_3[2] = 0;
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410170  FUN_00410170   (381 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00410170(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x476310);
  puVar3 = (undefined4 *)param_1[6];
  if (puVar3 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      FUN_00410330(param_1);
      puVar3 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
    else {
      puVar3 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
  }
  else {
    param_1[6] = *(int *)(param_1[6] + 0xc);
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  if (puVar3 + 4 != (undefined4 *)0x0) {
    puVar3[6] = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar4 = std::string::__getRep(puVar3 + 4,uVar2,uVar2);
      puVar3[6] = piVar4 + 3;
      memcpy((undefined4 *)puVar3[6],*(undefined4 **)(param_2 + 8),uVar2);
    }
    else {
      puVar3[6] = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(puVar3[6] + -0xc);
      if (piVar4 != &DAT_00485bcc) {
        *piVar4 = *piVar4 + 1;
      }
    }
    puVar3[8] = *(undefined4 *)(param_2 + 0x10);
  }
  *in_FS_OFFSET = local_2c;
  return puVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410318  FUN_00410318   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00410318(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x38) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410330  FUN_00410330   (297 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00410330(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined **local_c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x476394);
  piVar1 = (int *)operator_new();
  if (piVar1 == (int *)0x0) {
    local_8 = &std::bad_alloc::vftable;
    FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_8,0,&LAB_0040eb80,1,0,0,0);
  }
  iVar2 = operator_new();
  if (iVar2 == 0) {
    local_c = &std::bad_alloc::vftable;
    FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_c,0,&LAB_0040eb80,1,0,0,0);
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[4];
  piVar1[1] = *param_1;
  param_1[4] = (int)piVar1;
  iVar2 = *(int *)(param_1[4] + 8);
  param_1[7] = iVar2;
  param_1[8] = iVar2 + *param_1 * 0x28;
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041047c  FUN_0041047c   (234 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004104a5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x004104ad */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0041047c(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4763f0);
  *param_1 = 0x100;
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 == (undefined4 *)0x0) {
    local_8 = &std::bad_alloc::vftable;
    FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_8,0,&LAB_0040eb80,1,0,0,0);
  }
  param_1[1] = puVar1;
  FUN_0041058c(puVar1,param_2,param_3);
  param_1[2] = param_1[1] + param_2 * 4;
  param_1[6] = param_1[2];
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041058c  FUN_0041058c   (85 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041058c(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476430);
  while (param_2 != 0) {
    *param_1 = *param_3;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410608  FUN_00410608   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00410608(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410620  FUN_00410620   (176 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00410620(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff94;
  undefined4 in_stack_ffffff98;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  __InitExceptBlockLDTC(0x476454);
  iVar2 = param_2;
  while (local_8 = iVar2, local_8 != param_3) {
    iVar2 = local_8 + 0x38;
    if (local_8 != 0) {
      local_1c = 0x14;
      local_10 = local_10 + -2;
      if (*(int *)(local_8 + 0x24) != 0) {
        local_30 = *(undefined4 *)(local_8 + 0x24);
        FUN_0040f198(local_40,local_8,in_stack_ffffff94,in_stack_ffffff98,
                     *(int *)(*(int *)(local_8 + 0x24) + 8));
        iVar1 = *(int *)(local_8 + 0x24);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(local_8 + 0x18);
        *(int *)(local_8 + 0x18) = iVar1;
        FUN_0040fdb4(local_8);
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004106d0  FUN_004106d0   (1017 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004106d0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5, undefined4 param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_8c;
  int local_7c;
  int local_6c;
  int local_5c;
  int *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_7;
  local_6c = *(int *)(param_2[9] + 8);
  local_5c = local_6c;
  local_8 = local_6c;
  if (local_6c == param_5) {
    if (param_2[10] != 0) {
      local_c = param_5;
      local_10 = param_5 + 0x10;
      local_14 = param_7;
      local_18 = FUN_00417698(*(byte **)(param_7 + 8),*(int *)(*(int *)(param_7 + 8) + -4),
                              *(byte **)(param_5 + 0x18),*(int *)(*(int *)(param_5 + 0x18) + -4));
      if (local_18 == 0) {
        uVar2 = FUN_0045ea80(local_14,0,*(uint *)(*(int *)(local_14 + 8) + -4),
                             *(byte **)(local_10 + 8),*(uint *)(*(int *)(local_10 + 8) + -4));
        if ((int)uVar2 < 0) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = local_18 < 0;
      }
      if (bVar3) {
        FUN_00410acc((int)param_1,param_2,param_5,param_5,iVar1);
        return param_1;
      }
    }
    FUN_00410e14(&local_ec,param_2,iVar1);
    *param_1 = local_ec;
    param_1[1] = local_e8;
    param_1[2] = local_e4;
  }
  else {
    local_8c = param_2[9];
    local_7c = local_8c;
    local_1c = local_8c;
    if (local_8c == param_5) {
      local_20 = param_7;
      local_24 = *(int *)(param_2[9] + 0xc);
      local_28 = local_24 + 0x10;
      local_2c = FUN_00417698(*(byte **)(local_24 + 0x18),*(int *)(*(int *)(local_24 + 0x18) + -4),
                              *(byte **)(param_7 + 8),*(int *)(*(int *)(param_7 + 8) + -4));
      if (local_2c == 0) {
        uVar2 = FUN_0045ea80(local_28,0,*(uint *)(*(int *)(local_28 + 8) + -4),
                             *(byte **)(local_20 + 8),*(uint *)(*(int *)(local_20 + 8) + -4));
        if ((int)uVar2 < 0) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = local_2c < 0;
      }
      if (bVar3) {
        FUN_00410acc((int)param_1,param_2,0,*(int *)(param_2[9] + 0xc),iVar1);
      }
      else {
        FUN_00410e14(&local_d4,param_2,iVar1);
        *param_1 = local_d4;
        param_1[1] = local_d0;
        param_1[2] = local_cc;
      }
    }
    else {
      local_30 = (undefined4 *)FUN_004110fc((int)&param_3);
      local_a4 = *local_30;
      local_a0 = local_30[1];
      local_9c = local_30[2];
      local_34 = iVar1;
      local_3c = local_9c + 0x10;
      local_38 = local_9c;
      local_40 = FUN_00417698(*(byte **)(local_9c + 0x18),*(int *)(*(int *)(local_9c + 0x18) + -4),
                              *(byte **)(iVar1 + 8),*(int *)(*(int *)(iVar1 + 8) + -4));
      if (local_40 == 0) {
        uVar2 = FUN_0045ea80(local_3c,0,*(uint *)(*(int *)(local_3c + 8) + -4),
                             *(byte **)(local_34 + 8),*(uint *)(*(int *)(local_34 + 8) + -4));
        if ((int)uVar2 < 0) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = local_40 < 0;
      }
      if (bVar3) {
        local_44 = param_5;
        local_48 = param_5 + 0x10;
        local_4c = iVar1;
        local_50 = FUN_00417698(*(byte **)(iVar1 + 8),*(int *)(*(int *)(iVar1 + 8) + -4),
                                *(byte **)(param_5 + 0x18),*(int *)(*(int *)(param_5 + 0x18) + -4));
        if (local_50 == 0) {
          uVar2 = FUN_0045ea80(local_4c,0,*(uint *)(*(int *)(local_4c + 8) + -4),
                               *(byte **)(local_48 + 8),*(uint *)(*(int *)(local_48 + 8) + -4));
          if ((int)uVar2 < 0) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
        }
        else {
          bVar3 = local_50 < 0;
        }
        if (bVar3) {
          local_54 = (int *)(local_9c + 0xc);
          if (*local_54 == 0) {
            FUN_00410acc((int)param_1,param_2,0,local_9c,iVar1);
            return param_1;
          }
          FUN_00410acc((int)param_1,param_2,param_5,param_5,iVar1);
          return param_1;
        }
      }
      FUN_00410e14(&local_bc,param_2,iVar1);
      *param_1 = local_bc;
      param_1[1] = local_b8;
      param_1[2] = local_b4;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410acc  FUN_00410acc   (839 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00410acc(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  puVar3 = FUN_0040ee24(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if ((param_4 != param_2[9]) && (param_3 == 0)) {
    iVar4 = FUN_00417698(*(byte **)(param_5 + 8),*(int *)(*(int *)(param_5 + 8) + -4),
                         *(byte **)(param_4 + 0x18),*(int *)(*(int *)(param_4 + 0x18) + -4));
    if (iVar4 == 0) {
      uVar5 = FUN_0045ea80(param_5,0,*(uint *)(*(int *)(param_5 + 8) + -4),
                           *(byte **)(param_4 + 0x18),*(uint *)(*(int *)(param_4 + 0x18) + -4));
      if ((int)uVar5 < 0) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
    }
    else {
      bVar7 = iVar4 < 0;
    }
    if (!bVar7) {
      *(undefined4 **)(param_4 + 0xc) = puVar3;
      if (param_4 == *(int *)(param_2[9] + 0xc)) {
        *(undefined4 **)(param_2[9] + 0xc) = puVar3;
      }
      goto LAB_00410bc6;
    }
  }
  *(undefined4 **)(param_4 + 8) = puVar3;
  if (param_4 == param_2[9]) {
    *(undefined4 **)(param_2[9] + 4) = puVar3;
    *(undefined4 **)(param_2[9] + 0xc) = puVar3;
  }
  else if (param_4 == *(int *)(param_2[9] + 8)) {
    *(undefined4 **)(param_2[9] + 8) = puVar3;
  }
LAB_00410bc6:
  puVar3[1] = param_4;
  puVar6 = puVar3;
  while ((puVar6 != *(undefined4 **)(param_2[9] + 4) && (*(int *)puVar6[1] == 0))) {
    iVar4 = *(int *)(puVar6[1] + 4);
    if (*(int *)(iVar4 + 8) == puVar6[1]) {
      piVar1 = *(int **)(iVar4 + 0xc);
      if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
        puVar2 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar2[3]) {
          iVar4 = puVar2[3];
          puVar2[3] = *(undefined4 *)(iVar4 + 8);
          if (*(int *)(iVar4 + 8) != 0) {
            *(undefined4 **)(*(int *)(iVar4 + 8) + 4) = puVar2;
          }
          *(undefined4 *)(iVar4 + 4) = puVar2[1];
          if (puVar2 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar4;
          }
          else if (puVar2 == *(undefined4 **)(puVar2[1] + 8)) {
            *(int *)(puVar2[1] + 8) = iVar4;
          }
          else {
            *(int *)(puVar2[1] + 0xc) = iVar4;
          }
          *(undefined4 **)(iVar4 + 8) = puVar2;
          puVar2[1] = iVar4;
          puVar6 = puVar2;
        }
        puVar2 = (undefined4 *)puVar6[1];
        *puVar2 = 1;
        puVar2 = (undefined4 *)puVar2[1];
        *puVar2 = 0;
        iVar4 = puVar2[2];
        puVar2[2] = *(undefined4 *)(iVar4 + 0xc);
        if (*(int *)(iVar4 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar4 + 0xc) + 4) = puVar2;
        }
        *(undefined4 *)(iVar4 + 4) = puVar2[1];
        if (puVar2 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar4;
        }
        else if (puVar2 == *(undefined4 **)(puVar2[1] + 0xc)) {
          *(int *)(puVar2[1] + 0xc) = iVar4;
        }
        else {
          *(int *)(puVar2[1] + 8) = iVar4;
        }
        *(undefined4 **)(iVar4 + 0xc) = puVar2;
        puVar2[1] = iVar4;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar1 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
    else {
      piVar1 = *(int **)(*(int *)(puVar6[1] + 4) + 8);
      if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
        puVar2 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar2[2]) {
          iVar4 = puVar2[2];
          puVar2[2] = *(undefined4 *)(iVar4 + 0xc);
          if (*(int *)(iVar4 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(iVar4 + 0xc) + 4) = puVar2;
          }
          *(undefined4 *)(iVar4 + 4) = puVar2[1];
          if (puVar2 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar4;
          }
          else if (puVar2 == *(undefined4 **)(puVar2[1] + 0xc)) {
            *(int *)(puVar2[1] + 0xc) = iVar4;
          }
          else {
            *(int *)(puVar2[1] + 8) = iVar4;
          }
          *(undefined4 **)(iVar4 + 0xc) = puVar2;
          puVar2[1] = iVar4;
          puVar6 = puVar2;
        }
        puVar2 = (undefined4 *)puVar6[1];
        *puVar2 = 1;
        puVar2 = (undefined4 *)puVar2[1];
        *puVar2 = 0;
        iVar4 = puVar2[3];
        puVar2[3] = *(undefined4 *)(iVar4 + 8);
        if (*(int *)(iVar4 + 8) != 0) {
          *(undefined4 **)(*(int *)(iVar4 + 8) + 4) = puVar2;
        }
        *(undefined4 *)(iVar4 + 4) = puVar2[1];
        if (puVar2 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar4;
        }
        else if (puVar2 == *(undefined4 **)(puVar2[1] + 8)) {
          *(int *)(puVar2[1] + 8) = iVar4;
        }
        else {
          *(int *)(puVar2[1] + 0xc) = iVar4;
        }
        *(undefined4 **)(iVar4 + 8) = puVar2;
        puVar2[1] = iVar4;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar1 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
  }
  **(undefined4 **)(param_2[9] + 4) = 1;
  *(undefined4 **)(param_1 + 8) = puVar3;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410e14  FUN_00410e14   (742 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00410e14(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_1d;
  int local_1c;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = param_2[9];
  iVar2 = *(int *)(local_8 + 4);
  bVar4 = true;
  while (iVar2 != 0) {
    local_c = iVar2;
    local_8 = iVar2;
    local_10 = FUN_00417698(*(byte **)(param_3 + 8),*(int *)(*(int *)(param_3 + 8) + -4),
                            *(byte **)(iVar2 + 0x18),*(int *)(*(int *)(iVar2 + 0x18) + -4));
    if (local_10 == 0) {
      uVar1 = FUN_0045ea80(param_3,0,*(uint *)(*(int *)(param_3 + 8) + -4),*(byte **)(iVar2 + 0x18),
                           *(uint *)(*(int *)(iVar2 + 0x18) + -4));
      if ((int)uVar1 < 0) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
    }
    else {
      bVar4 = local_10 < 0;
    }
    if (bVar4) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  if ((char)param_2[0xb] == '\0') {
    local_50 = local_8;
    if (bVar4) {
      local_60 = *(int *)(param_2[9] + 8);
      if (local_60 == local_8) {
        local_12 = 1;
        FUN_00410acc((int)&local_90,param_2,0,local_8,param_3);
        *param_1 = local_90;
        param_1[1] = local_8c;
        param_1[2] = local_88;
        *(undefined1 *)(param_1 + 4) = local_12;
        return param_1;
      }
      FUN_004110fc((int)&local_58);
    }
    iVar2 = local_50;
    local_18 = local_50;
    iVar3 = local_50 + 0x10;
    local_1c = FUN_00417698(*(byte **)(local_50 + 0x18),*(int *)(*(int *)(local_50 + 0x18) + -4),
                            *(byte **)(param_3 + 8),*(int *)(*(int *)(param_3 + 8) + -4));
    if (local_1c == 0) {
      uVar1 = FUN_0045ea80(iVar3,0,*(uint *)(*(int *)(iVar2 + 0x18) + -4),*(byte **)(param_3 + 8),
                           *(uint *)(*(int *)(param_3 + 8) + -4));
      if ((int)uVar1 < 0) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
    }
    else {
      bVar4 = local_1c < 0;
    }
    if (bVar4) {
      local_1d = 1;
      FUN_00410acc((int)&local_b8,param_2,0,local_8,param_3);
      *param_1 = local_b8;
      param_1[1] = local_b4;
      param_1[2] = local_b0;
      *(undefined1 *)(param_1 + 4) = local_1d;
    }
    else {
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  else {
    local_11 = 1;
    FUN_00410acc((int)&local_48,param_2,0,local_8,param_3);
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    *(undefined1 *)(param_1 + 4) = local_11;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004110fc  FUN_004110fc   (107 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004110fc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((*piVar1 == 0) && (piVar1 == *(int **)(piVar1[1] + 4))) {
    *(int *)(param_1 + 8) = piVar1[3];
  }
  else if (*(int *)(*(int *)(param_1 + 8) + 8) == 0) {
    for (iVar2 = *(int *)(*(int *)(param_1 + 8) + 4); *(int *)(param_1 + 8) == *(int *)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 4)) {
      *(int *)(param_1 + 8) = iVar2;
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    for (iVar2 = *(int *)(*(int *)(param_1 + 8) + 8); *(int *)(iVar2 + 0xc) != 0;
        iVar2 = *(int *)(iVar2 + 0xc)) {
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411168  FUN_00411168   (157 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00411168(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  if ((uint)(iVar3 >> 2) < param_2) {
    local_8 = 0;
    iVar3 = (int)*(undefined4 **)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_00411208(param_1,*(undefined4 **)(param_1 + 8),param_2 - (iVar3 >> 2),&local_8);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar3 = (int)puVar1 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (param_2 < (uint)(iVar3 >> 2)) {
      puVar4 = (undefined4 *)(param_2 * 4 + *(int *)(param_1 + 4));
      puVar2 = FUN_00411574(puVar1,puVar1,puVar4);
      iVar3 = *(int *)(param_1 + 8);
      iVar5 = (int)puVar1 - (int)puVar4;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar5 >> 2) * -4;
      FUN_004061b8(param_1,(int)puVar2,iVar3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411208  FUN_00411208   (646 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00411208(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4764b0);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x18) - (int)puVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) < param_3) {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      local_3c = iVar2 >> 2;
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      puVar1 = (undefined4 *)operator_new();
      if (puVar1 == (undefined4 *)0x0) {
        local_1c = 8;
        local_8 = &std::bad_alloc::vftable;
        local_10 = local_10 + 2;
        FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_8,0,&LAB_0040eb80,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_004114b0(*(undefined4 **)(param_1 + 4),param_2,puVar1);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_0041058c(puVar1 + (iVar2 >> 2),param_3,param_4);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004114b0(param_2,*(undefined4 **)(param_1 + 8),puVar1 + (iVar2 >> 2) + param_3);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004061b8(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      operator_delete();
      *(undefined4 **)(param_1 + 0x18) = puVar1 + local_38;
      *(undefined4 **)(param_1 + 8) = puVar1 + (iVar2 >> 2) + param_3;
      *(undefined4 **)(param_1 + 4) = puVar1;
    }
    else {
      iVar2 = (int)puVar1 - (int)param_2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      if (param_3 < (uint)(iVar2 >> 2)) {
        FUN_004114b0(puVar1 + -param_3,puVar1,puVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
        FUN_00411530(param_2,puVar1 + -param_3,puVar1);
        FUN_00411554(param_2,param_2 + param_3,param_4);
      }
      else {
        iVar2 = (int)puVar1 - (int)param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        iVar2 = param_3 - (iVar2 >> 2);
        FUN_0041058c(puVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 4;
        FUN_004114b0(param_2,puVar1,param_2 + param_3);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 4;
        FUN_00411554(param_2,puVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004114b0  FUN_004114b0   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004114b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4764f0);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411530  FUN_00411530   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00411530(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411554  FUN_00411554   (31 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00411554(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411574  FUN_00411574   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00411574(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411598  FUN_00411598   (251 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00411598(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  int local_30;
  undefined4 local_28 [2];
  int local_20;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_2 + 0x24);
  iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 4);
  while (iVar2 != 0) {
    local_c = iVar2;
    uVar1 = FUN_0045ea80(iVar2 + 0x10,0,*(uint *)(*(int *)(iVar2 + 0x18) + -4),
                         *(byte **)(param_3 + 8),*(uint *)(*(int *)(param_3 + 8) + -4));
    if ((int)uVar1 < 0) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      local_8 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  local_20 = local_8;
  local_10 = *(int *)(param_2 + 0x24);
  local_30 = local_10;
  if (local_10 != local_8) {
    local_14 = local_8;
    uVar1 = FUN_0045ea80(param_3,0,*(uint *)(*(int *)(param_3 + 8) + -4),*(byte **)(local_8 + 0x18),
                         *(uint *)(*(int *)(local_8 + 0x18) + -4));
    if (-1 < (int)uVar1) {
      puVar3 = local_28;
      goto LAB_00411673;
    }
  }
  puVar3 = local_48;
  local_18 = *(undefined4 *)(param_2 + 0x24);
  local_40 = *(undefined4 *)(param_2 + 0x24);
LAB_00411673:
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411694  FUN_00411694   (621 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00411694(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_1d;
  int local_1c;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = param_2[9];
  iVar2 = *(int *)(local_8 + 4);
  bVar3 = true;
  while (iVar2 != 0) {
    local_10 = param_3;
    local_c = iVar2;
    local_8 = iVar2;
    uVar1 = FUN_0045ea80(param_3,0,*(uint *)(*(int *)(param_3 + 8) + -4),*(byte **)(iVar2 + 0x18),
                         *(uint *)(*(int *)(iVar2 + 0x18) + -4));
    bVar3 = (int)uVar1 < 0;
    if (bVar3) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  if ((char)param_2[0xb] == '\0') {
    local_50 = local_8;
    if (bVar3) {
      local_60 = *(int *)(param_2[9] + 8);
      if (local_60 == local_8) {
        local_12 = 1;
        FUN_00411904((int)&local_90,param_2,0,local_8,param_3);
        *param_1 = local_90;
        param_1[1] = local_8c;
        param_1[2] = local_88;
        *(undefined1 *)(param_1 + 4) = local_12;
        return param_1;
      }
      FUN_00411c1c((int)&local_58);
    }
    local_18 = local_50;
    local_1c = local_50 + 0x10;
    uVar1 = FUN_0045ea80(local_1c,0,*(uint *)(*(int *)(local_50 + 0x18) + -4),
                         *(byte **)(param_3 + 8),*(uint *)(*(int *)(param_3 + 8) + -4));
    if ((int)uVar1 < 0) {
      local_1d = 1;
      FUN_00411904((int)&local_b8,param_2,0,local_8,param_3);
      *param_1 = local_b8;
      param_1[1] = local_b4;
      param_1[2] = local_b0;
      *(undefined1 *)(param_1 + 4) = local_1d;
    }
    else {
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  else {
    local_11 = 1;
    FUN_00411904((int)&local_48,param_2,0,local_8,param_3);
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    *(undefined1 *)(param_1 + 4) = local_11;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411904  FUN_00411904   (790 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00411904(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar4 = FUN_00410170(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if (((param_4 == param_2[9]) || (param_3 != 0)) ||
     (uVar5 = FUN_0045ea80(param_5,0,*(uint *)(*(int *)(param_5 + 8) + -4),
                           *(byte **)(param_4 + 0x18),*(uint *)(*(int *)(param_4 + 0x18) + -4)),
     (int)uVar5 < 0)) {
    *(undefined4 **)(param_4 + 8) = puVar4;
    if (param_4 == param_2[9]) {
      *(undefined4 **)(param_2[9] + 4) = puVar4;
      *(undefined4 **)(param_2[9] + 0xc) = puVar4;
    }
    else if (param_4 == *(int *)(param_2[9] + 8)) {
      *(undefined4 **)(param_2[9] + 8) = puVar4;
    }
  }
  else {
    *(undefined4 **)(param_4 + 0xc) = puVar4;
    if (param_4 == *(int *)(param_2[9] + 0xc)) {
      *(undefined4 **)(param_2[9] + 0xc) = puVar4;
    }
  }
  puVar4[1] = param_4;
  puVar6 = puVar4;
  while ((puVar6 != *(undefined4 **)(param_2[9] + 4) && (*(int *)puVar6[1] == 0))) {
    iVar1 = *(int *)(puVar6[1] + 4);
    if (*(int *)(iVar1 + 8) == puVar6[1]) {
      piVar2 = *(int **)(iVar1 + 0xc);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[3]) {
          iVar1 = puVar3[3];
          puVar3[3] = *(undefined4 *)(iVar1 + 8);
          if (*(int *)(iVar1 + 8) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          *(undefined4 **)(iVar1 + 8) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[2];
        puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        *(undefined4 **)(iVar1 + 0xc) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(puVar6[1] + 4) + 8);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[2]) {
          iVar1 = puVar3[2];
          puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(iVar1 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          *(undefined4 **)(iVar1 + 0xc) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[3];
        puVar3[3] = *(undefined4 *)(iVar1 + 8);
        if (*(int *)(iVar1 + 8) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        *(undefined4 **)(iVar1 + 8) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
  }
  **(undefined4 **)(param_2[9] + 4) = 1;
  *(undefined4 **)(param_1 + 8) = puVar4;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c1c  FUN_00411c1c   (107 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00411c1c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((*piVar1 == 0) && (piVar1 == *(int **)(piVar1[1] + 4))) {
    *(int *)(param_1 + 8) = piVar1[3];
  }
  else if (*(int *)(*(int *)(param_1 + 8) + 8) == 0) {
    for (iVar2 = *(int *)(*(int *)(param_1 + 8) + 4); *(int *)(param_1 + 8) == *(int *)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 4)) {
      *(int *)(param_1 + 8) = iVar2;
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    for (iVar2 = *(int *)(*(int *)(param_1 + 8) + 8); *(int *)(iVar2 + 0xc) != 0;
        iVar2 = *(int *)(iVar2 + 0xc)) {
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c88  FUN_00411c88   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00411c88(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x476534);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 == 0) {
      iVar1 = 0x100;
    }
    else {
      iVar1 = (iVar1 >> 2) * 2;
    }
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = &std::bad_alloc::vftable;
      FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_8,0,&LAB_0040eb80,1,0,0,0);
    }
    FUN_004114b0(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004114b0(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004061b8(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_00411530(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411e60  FUN_00411e60   (99 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00411e60(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0xc) == 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 8) + 4); *(int *)(param_1 + 8) == *(int *)(iVar1 + 0xc)
        ; iVar1 = *(int *)(iVar1 + 4)) {
      *(int *)(param_1 + 8) = iVar1;
    }
    if (iVar1 != *(int *)(*(int *)(param_1 + 8) + 0xc)) {
      *(int *)(param_1 + 8) = iVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
    while (*(int *)(*(int *)(param_1 + 8) + 8) != 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411ec4  FUN_00411ec4   (297 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00411ec4(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined **local_c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x476594);
  piVar1 = (int *)operator_new();
  if (piVar1 == (int *)0x0) {
    local_8 = &std::bad_alloc::vftable;
    FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_8,0,&LAB_0040eb80,1,0,0,0);
  }
  iVar2 = operator_new();
  if (iVar2 == 0) {
    local_c = &std::bad_alloc::vftable;
    FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_c,0,&LAB_0040eb80,1,0,0,0);
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[4];
  piVar1[1] = *param_1;
  param_1[4] = (int)piVar1;
  iVar2 = *(int *)(param_1[4] + 8);
  param_1[7] = iVar2;
  param_1[8] = iVar2 + *param_1 * 0x28;
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412010  FUN_00412010   (258 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00412010(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000024;
  undefined4 local_54 [4];
  undefined4 local_44 [6];
  int local_2c;
  int local_1c;
  undefined4 local_14 [4];
  
  local_14[2] = *(undefined4 *)(param_2 + 0x24);
  iVar3 = *(int *)(param_2 + 0x24);
  local_1c = *(int *)(iVar3 + 8);
  if (((local_1c == param_5) && (local_2c = iVar3, iVar3 == in_stack_00000024)) &&
     (*(int *)(param_2 + 0x28) != 0)) {
    FUN_00412114(param_2,*(int *)(iVar3 + 4));
    iVar3 = *(int *)(param_2 + 0x24);
    *(int *)(iVar3 + 8) = iVar3;
    *(undefined4 *)(iVar3 + 4) = 0;
    *(int *)(iVar3 + 0xc) = iVar3;
    *(undefined4 *)(param_2 + 0x28) = 0;
    local_44[2] = *(undefined4 *)(param_2 + 0x24);
    puVar4 = local_44;
    puVar5 = local_14;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    while (iVar3 = param_5, uVar2 = param_4, uVar1 = param_3, param_5 != in_stack_00000024) {
      FUN_0041288c((int)&param_3);
      FUN_004128f0(local_54,param_2,uVar1,uVar2,iVar3);
      puVar4 = local_54;
      puVar5 = local_14;
      for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412114  FUN_00412114   (262 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00412114(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4765d0);
  do {
    if (param_2 == 0) {
      *in_FS_OFFSET = local_2c;
      return;
    }
    FUN_00412114(param_1,*(int *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    if ((param_2 != -0x10) && (*(int *)(param_2 + 0x18) != 0)) {
      if (*(int *)(*(int *)(param_2 + 0x18) + -0xc) != -1) {
        piVar3 = (int *)(*(int *)(param_2 + 0x18) + -0xc);
        if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_004121f3;
      }
      operator_delete();
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
LAB_004121f3:
    *(int *)(param_1 + 0x18) = param_2;
    param_2 = iVar1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041221c  FUN_0041221c   (63 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041221c(int param_1)

{
  while (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x10);
    operator_delete();
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041225c  FUN_0041225c   (893 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041225c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  int local_8;
  
  __InitExceptBlockLDTC(0x47664c);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == *(int *)(param_1 + 0x18)) {
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 == 0) {
      iVar3 = 0x40;
    }
    else {
      iVar3 = (iVar3 >> 4) * 2;
    }
    iVar4 = operator_new();
    if (iVar4 == 0) {
      local_c = &std::bad_alloc::vftable;
      FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_c,0,&LAB_0040eb80,1,0,0,0);
    }
    FUN_0041262c(*(int *)(param_1 + 4),param_2,iVar4);
    iVar5 = param_2 - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    iVar5 = (iVar5 >> 4) * 0x10 + iVar4;
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 8) = 0;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
        piVar6 = std::string::__getRep(iVar5,uVar1,uVar1);
        *(int **)(iVar5 + 8) = piVar6 + 3;
        memcpy(*(undefined4 **)(iVar5 + 8),*(undefined4 **)(param_3 + 8),uVar1);
      }
      else {
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_3 + 8);
        piVar6 = (int *)(*(int *)(iVar5 + 8) + -0xc);
        if (piVar6 != &DAT_00485bcc) {
          *piVar6 = *piVar6 + 1;
        }
      }
    }
    iVar5 = param_2 - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    FUN_0041262c(param_2,*(int *)(param_1 + 8),(iVar5 >> 4) * 0x10 + iVar4 + 0x10);
    iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    FUN_00414020(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(int *)(param_1 + 0x18) = iVar3 * 0x10 + iVar4;
    *(int *)(param_1 + 8) = (iVar5 >> 4) * 0x10 + iVar4 + 0x10;
    *(int *)(param_1 + 4) = iVar4;
  }
  else {
    local_8 = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = *(int *)(*(int *)(iVar3 + -8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar3 + -8) + -4);
        piVar6 = std::string::__getRep(iVar3,uVar1,uVar1);
        *(int **)(local_8 + 8) = piVar6 + 3;
        memcpy(*(undefined4 **)(local_8 + 8),*(undefined4 **)(iVar3 + -8),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + -8);
        piVar6 = (int *)(*(int *)(iVar3 + 8) + -0xc);
        if (piVar6 != &DAT_00485bcc) {
          *piVar6 = *piVar6 + 1;
        }
      }
    }
    FUN_004125fc(param_2,*(int *)(param_1 + 8) + -0x10,*(int *)(param_1 + 8));
    FUN_00459ad4(param_2,param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004125fc  FUN_004125fc   (46 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004125fc(int param_1,int param_2,int param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -0x10;
    param_3 = param_3 + -0x10;
    FUN_00459ad4(param_3,param_2);
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041262c  FUN_0041262c   (293 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0041262c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4766e4);
  while (iVar4 = param_3, iVar3 = param_1, iVar3 != param_2) {
    param_3 = iVar4 + 0x10;
    param_1 = iVar3 + 0x10;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
      iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
      if (iVar1 == -1 || iVar1 + 1 < 0) {
        uVar2 = *(uint *)(*(int *)(iVar3 + 8) + -4);
        piVar5 = std::string::__getRep(iVar4,uVar2,uVar2);
        *(int **)(iVar4 + 8) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar4 + 8),*(undefined4 **)(iVar3 + 8),uVar2);
      }
      else {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
        piVar5 = (int *)(*(int *)(iVar4 + 8) + -0xc);
        if (piVar5 != &DAT_00485bcc) {
          *piVar5 = *piVar5 + 1;
        }
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412778  FUN_00412778   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00412778(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412790  FUN_00412790   (251 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00412790(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  int local_30;
  undefined4 local_28 [2];
  int local_20;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_2 + 0x24);
  iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 4);
  while (iVar2 != 0) {
    local_c = iVar2;
    uVar1 = FUN_0045ea80(iVar2 + 0x10,0,*(uint *)(*(int *)(iVar2 + 0x18) + -4),
                         *(byte **)(param_3 + 8),*(uint *)(*(int *)(param_3 + 8) + -4));
    if ((int)uVar1 < 0) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      local_8 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  local_20 = local_8;
  local_10 = *(int *)(param_2 + 0x24);
  local_30 = local_10;
  if (local_10 != local_8) {
    local_14 = local_8;
    uVar1 = FUN_0045ea80(param_3,0,*(uint *)(*(int *)(param_3 + 8) + -4),*(byte **)(local_8 + 0x18),
                         *(uint *)(*(int *)(local_8 + 0x18) + -4));
    if (-1 < (int)uVar1) {
      puVar3 = local_28;
      goto LAB_0041286b;
    }
  }
  puVar3 = local_48;
  local_18 = *(undefined4 *)(param_2 + 0x24);
  local_40 = *(undefined4 *)(param_2 + 0x24);
LAB_0041286b:
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041288c  FUN_0041288c   (99 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041288c(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0xc) == 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 8) + 4); *(int *)(param_1 + 8) == *(int *)(iVar1 + 0xc)
        ; iVar1 = *(int *)(iVar1 + 4)) {
      *(int *)(param_1 + 8) = iVar1;
    }
    if (iVar1 != *(int *)(*(int *)(param_1 + 8) + 0xc)) {
      *(int *)(param_1 + 8) = iVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
    while (*(int *)(*(int *)(param_1 + 8) + 8) != 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004128f0  FUN_004128f0   (2455 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004128f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_9c;
  int local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int local_88;
  int *local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  char local_35;
  int *local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int *local_8;
  
  __InitExceptBlockLDTC(0x47672c);
  local_b4 = param_3;
  local_b0 = param_4;
  local_ac = param_5;
  local_30 = *(int *)(param_2 + 0x24);
  if (local_30 != param_5) {
    FUN_0041288c((int)&local_b4);
  }
  FUN_0041328c((undefined4*)&local_34,param_5);
  local_35 = '\0';
  local_3c = local_34 + 2;
  piVar2 = local_34;
  if (*local_3c == 0) {
    local_40 = local_34 + 3;
    if (*local_40 == 0) {
      piVar4 = (int *)local_34[1];
      local_44 = local_34;
      local_48 = local_34[1];
      if (*(int *)(param_2 + 0x24) == local_48) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_48;
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_48;
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_48 + 8) == local_34) {
        *(undefined4 *)(local_48 + 8) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_34) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_48;
        }
      }
      else {
        *(undefined4 *)(local_48 + 0xc) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_34) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_48;
        }
      }
      local_35 = '\x01';
    }
    else {
      piVar4 = (int *)local_34[3];
    }
  }
  else {
    local_4c = local_34 + 3;
    if (*local_4c == 0) {
      piVar4 = (int *)local_34[2];
    }
    else {
      for (piVar2 = (int *)local_34[3]; piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      }
      piVar4 = (int *)piVar2[3];
    }
  }
  if ((local_35 == '\0') && (piVar2 != local_34)) {
    *(int **)(local_34[2] + 4) = piVar2;
    piVar2[2] = local_34[2];
    if (piVar2 == (int *)local_34[3]) {
      if (piVar4 != (int *)0x0) {
        piVar4[1] = (int)piVar2;
      }
    }
    else {
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar2[1];
      }
      *(int **)(piVar2[1] + 8) = piVar4;
      piVar2[3] = local_34[3];
      *(int **)(local_34[3] + 4) = piVar2;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_34) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar2;
    }
    else if (*(int **)(local_34[1] + 8) == local_34) {
      *(int **)(local_34[1] + 8) = piVar2;
    }
    else {
      *(int **)(local_34[1] + 0xc) = piVar2;
    }
    piVar2[1] = local_34[1];
    if (piVar4 == (int *)0x0) {
      piVar4 = piVar2;
    }
    local_50 = local_34;
    local_58 = *piVar2;
    *piVar2 = *local_34;
    *local_34 = local_58;
    local_8c = local_34;
    local_54 = piVar2;
  }
  else {
    local_8c = piVar2;
    if (local_35 == '\0') {
      piVar4[1] = piVar2[1];
      if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_34) {
        *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar4;
      }
      else if (*(int **)(local_34[1] + 8) == local_34) {
        *(int **)(local_34[1] + 8) = piVar4;
      }
      else {
        *(int **)(local_34[1] + 0xc) = piVar4;
      }
      if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_34) {
        local_5c = local_34 + 3;
        if (*local_5c == 0) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_34[1];
        }
        else {
          uVar1 = FUN_0041329c((int)piVar4);
          *(undefined4 *)(*(int *)(param_2 + 0x24) + 8) = uVar1;
        }
      }
      if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_34) {
        local_60 = local_34 + 2;
        if (*local_60 == 0) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_34[1];
        }
        else {
          uVar1 = FUN_004132bc((int)piVar4);
          *(undefined4 *)(*(int *)(param_2 + 0x24) + 0xc) = uVar1;
        }
      }
    }
  }
  if ((piVar4 != *(int **)(param_2 + 0x24)) && (*local_8c != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) || (*piVar4 != 1))
            goto LAB_00413142;
            if (piVar4 != *(int **)(piVar4[1] + 8)) break;
            piVar2 = *(int **)(piVar4[1] + 0xc);
            if (piVar2 == (int *)0x0) {
              *piVar4 = 0;
              piVar4 = (int *)piVar4[1];
            }
            else {
              if (*piVar2 == 0) {
                *piVar2 = 1;
                *(undefined4 *)piVar4[1] = 0;
                iVar3 = piVar4[1];
                local_64 = *(int *)(iVar3 + 0xc);
                *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_64 + 8);
                if (*(int *)(local_64 + 8) != 0) {
                  *(int *)(*(int *)(local_64 + 8) + 4) = iVar3;
                }
                *(undefined4 *)(local_64 + 4) = *(undefined4 *)(iVar3 + 4);
                if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                  *(int *)(*(int *)(param_2 + 0x24) + 4) = local_64;
                }
                else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                  *(int *)(*(int *)(iVar3 + 4) + 8) = local_64;
                }
                else {
                  *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_64;
                }
                *(int *)(local_64 + 8) = iVar3;
                *(int *)(iVar3 + 4) = local_64;
                piVar2 = *(int **)(piVar4[1] + 0xc);
              }
              if (piVar2 == (int *)0x0) {
                *piVar4 = 0;
                piVar4 = (int *)piVar4[1];
              }
              else {
                if (((piVar2[2] != 0) && (*(int *)piVar2[2] != 1)) ||
                   ((piVar2[3] != 0 && (*(int *)piVar2[3] != 1)))) {
                  if ((piVar2[3] == 0) || (*(int *)piVar2[3] == 1)) {
                    if (piVar2[2] != 0) {
                      *(undefined4 *)piVar2[2] = 1;
                    }
                    *piVar2 = 0;
                    local_68 = piVar2[2];
                    piVar2[2] = *(int *)(local_68 + 0xc);
                    local_6c = (int *)(local_68 + 0xc);
                    if (*local_6c != 0) {
                      *(int **)(*(int *)(local_68 + 0xc) + 4) = piVar2;
                    }
                    *(int *)(local_68 + 4) = piVar2[1];
                    if (piVar2 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = local_68;
                    }
                    else if (piVar2 == *(int **)(piVar2[1] + 0xc)) {
                      *(int *)(piVar2[1] + 0xc) = local_68;
                    }
                    else {
                      *(int *)(piVar2[1] + 8) = local_68;
                    }
                    *(int **)(local_68 + 0xc) = piVar2;
                    piVar2[1] = local_68;
                    piVar2 = *(int **)(piVar4[1] + 0xc);
                  }
                  if (piVar2 != (int *)0x0) {
                    *piVar2 = *(int *)piVar4[1];
                    *(undefined4 *)piVar4[1] = 1;
                    if (piVar2[3] != 0) {
                      *(undefined4 *)piVar2[3] = 1;
                    }
                    iVar3 = piVar4[1];
                    local_70 = *(int *)(iVar3 + 0xc);
                    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_70 + 8);
                    if (*(int *)(local_70 + 8) != 0) {
                      *(int *)(*(int *)(local_70 + 8) + 4) = iVar3;
                    }
                    *(undefined4 *)(local_70 + 4) = *(undefined4 *)(iVar3 + 4);
                    if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = local_70;
                    }
                    else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                      *(int *)(*(int *)(iVar3 + 4) + 8) = local_70;
                    }
                    else {
                      *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_70;
                    }
                    *(int *)(local_70 + 8) = iVar3;
                    *(int *)(iVar3 + 4) = local_70;
                  }
                  goto LAB_00413142;
                }
                *piVar2 = 0;
                piVar4 = (int *)piVar4[1];
              }
            }
          }
          piVar2 = *(int **)(piVar4[1] + 8);
          if (piVar2 != (int *)0x0) break;
          *piVar4 = 0;
          piVar4 = (int *)piVar4[1];
        }
        if (*piVar2 == 0) {
          *piVar2 = 1;
          *(undefined4 *)piVar4[1] = 0;
          iVar3 = piVar4[1];
          local_74 = *(int *)(iVar3 + 8);
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_74 + 0xc);
          local_78 = (int *)(local_74 + 0xc);
          if (*local_78 != 0) {
            *(int *)(*(int *)(local_74 + 0xc) + 4) = iVar3;
          }
          *(undefined4 *)(local_74 + 4) = *(undefined4 *)(iVar3 + 4);
          if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
            *(int *)(*(int *)(param_2 + 0x24) + 4) = local_74;
          }
          else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_74;
          }
          else {
            *(int *)(*(int *)(iVar3 + 4) + 8) = local_74;
          }
          *(int *)(local_74 + 0xc) = iVar3;
          *(int *)(iVar3 + 4) = local_74;
          piVar2 = *(int **)(piVar4[1] + 8);
        }
        if (piVar2 != (int *)0x0) break;
        *piVar4 = 0;
        piVar4 = (int *)piVar4[1];
      }
      if (((piVar2[3] != 0) && (*(int *)piVar2[3] != 1)) ||
         ((piVar2[2] != 0 && (*(int *)piVar2[2] != 1)))) break;
      *piVar2 = 0;
      piVar4 = (int *)piVar4[1];
    }
    if ((piVar2[2] == 0) || (*(int *)piVar2[2] == 1)) {
      local_7c = piVar2 + 3;
      if (*local_7c != 0) {
        *(undefined4 *)piVar2[3] = 1;
      }
      *piVar2 = 0;
      local_80 = piVar2[3];
      piVar2[3] = *(int *)(local_80 + 8);
      local_84 = (int *)(local_80 + 8);
      if (*local_84 != 0) {
        *(int **)(*(int *)(local_80 + 8) + 4) = piVar2;
      }
      *(int *)(local_80 + 4) = piVar2[1];
      if (piVar2 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = local_80;
      }
      else if (piVar2 == *(int **)(piVar2[1] + 8)) {
        *(int *)(piVar2[1] + 8) = local_80;
      }
      else {
        *(int *)(piVar2[1] + 0xc) = local_80;
      }
      *(int **)(local_80 + 8) = piVar2;
      piVar2[1] = local_80;
      piVar2 = *(int **)(piVar4[1] + 8);
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = *(int *)piVar4[1];
      *(undefined4 *)piVar4[1] = 1;
      if (piVar2[2] != 0) {
        *(undefined4 *)piVar2[2] = 1;
      }
      iVar3 = piVar4[1];
      local_88 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_88 + 0xc);
      if (*(int *)(local_88 + 0xc) != 0) {
        *(int *)(*(int *)(local_88 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(local_88 + 4) = *(undefined4 *)(iVar3 + 4);
      if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = local_88;
      }
      else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_88;
      }
      else {
        *(int *)(*(int *)(iVar3 + 4) + 8) = local_88;
      }
      *(int *)(local_88 + 0xc) = iVar3;
      *(int *)(iVar3 + 4) = local_88;
    }
LAB_00413142:
    *piVar4 = 1;
  }
  local_8c[3] = *(int *)(param_2 + 0x18);
  local_90 = local_8c + 4;
  if (local_90 != (int *)0x0) {
    local_1c = 0x14;
    local_10 = local_10 + -2;
    if (local_8c[6] != 0) {
      if (*(int *)(local_8c[6] + -0xc) != -1) {
        local_94 = (int *)(local_8c[6] + -0xc);
        if (local_94 == &DAT_00485bcc) {
          iVar3 = 1;
        }
        else if (local_94 == &DAT_00485bcc) {
          iVar3 = 1;
        }
        else {
          *local_94 = *local_94 + -1;
          iVar3 = *local_94 + 1;
        }
        if (iVar3 != 0) goto LAB_0041324c;
      }
      local_98 = local_8c[6] + -0xc;
      local_9c = local_8c[6] + -0xc;
      local_8 = local_90;
      operator_delete();
      local_8[2] = 0;
    }
  }
LAB_0041324c:
  *(int **)(param_2 + 0x18) = local_8c;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = local_b4;
  param_1[1] = local_b0;
  param_1[2] = local_ac;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041328c  FUN_0041328c   (13 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041328c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041329c  FUN_0041329c   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0041329c(int param_1)

{
  for (; *(int *)(param_1 + 8) != 0; param_1 = *(int *)(param_1 + 8)) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004132bc  FUN_004132bc   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004132bc(int param_1)

{
  for (; *(int *)(param_1 + 0xc) != 0; param_1 = *(int *)(param_1 + 0xc)) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004132dc  FUN_004132dc   (621 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004132dc(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_1d;
  int local_1c;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = param_2[9];
  iVar2 = *(int *)(local_8 + 4);
  bVar3 = true;
  while (iVar2 != 0) {
    local_10 = param_3;
    local_c = iVar2;
    local_8 = iVar2;
    uVar1 = FUN_0045ea80(param_3,0,*(uint *)(*(int *)(param_3 + 8) + -4),*(byte **)(iVar2 + 0x18),
                         *(uint *)(*(int *)(iVar2 + 0x18) + -4));
    bVar3 = (int)uVar1 < 0;
    if (bVar3) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  if ((char)param_2[0xb] == '\0') {
    local_50 = local_8;
    if (bVar3) {
      local_60 = *(int *)(param_2[9] + 8);
      if (local_60 == local_8) {
        local_12 = 1;
        FUN_0041354c((int)&local_90,param_2,0,local_8,param_3);
        *param_1 = local_90;
        param_1[1] = local_8c;
        param_1[2] = local_88;
        *(undefined1 *)(param_1 + 4) = local_12;
        return param_1;
      }
      FUN_00413a0c((int)&local_58);
    }
    local_18 = local_50;
    local_1c = local_50 + 0x10;
    uVar1 = FUN_0045ea80(local_1c,0,*(uint *)(*(int *)(local_50 + 0x18) + -4),
                         *(byte **)(param_3 + 8),*(uint *)(*(int *)(param_3 + 8) + -4));
    if ((int)uVar1 < 0) {
      local_1d = 1;
      FUN_0041354c((int)&local_b8,param_2,0,local_8,param_3);
      *param_1 = local_b8;
      param_1[1] = local_b4;
      param_1[2] = local_b0;
      *(undefined1 *)(param_1 + 4) = local_1d;
    }
    else {
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  else {
    local_11 = 1;
    FUN_0041354c((int)&local_48,param_2,0,local_8,param_3);
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    *(undefined1 *)(param_1 + 4) = local_11;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041354c  FUN_0041354c   (790 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0041354c(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar4 = FUN_00413864(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if (((param_4 == param_2[9]) || (param_3 != 0)) ||
     (uVar5 = FUN_0045ea80(param_5,0,*(uint *)(*(int *)(param_5 + 8) + -4),
                           *(byte **)(param_4 + 0x18),*(uint *)(*(int *)(param_4 + 0x18) + -4)),
     (int)uVar5 < 0)) {
    *(undefined4 **)(param_4 + 8) = puVar4;
    if (param_4 == param_2[9]) {
      *(undefined4 **)(param_2[9] + 4) = puVar4;
      *(undefined4 **)(param_2[9] + 0xc) = puVar4;
    }
    else if (param_4 == *(int *)(param_2[9] + 8)) {
      *(undefined4 **)(param_2[9] + 8) = puVar4;
    }
  }
  else {
    *(undefined4 **)(param_4 + 0xc) = puVar4;
    if (param_4 == *(int *)(param_2[9] + 0xc)) {
      *(undefined4 **)(param_2[9] + 0xc) = puVar4;
    }
  }
  puVar4[1] = param_4;
  puVar6 = puVar4;
  while ((puVar6 != *(undefined4 **)(param_2[9] + 4) && (*(int *)puVar6[1] == 0))) {
    iVar1 = *(int *)(puVar6[1] + 4);
    if (*(int *)(iVar1 + 8) == puVar6[1]) {
      piVar2 = *(int **)(iVar1 + 0xc);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[3]) {
          iVar1 = puVar3[3];
          puVar3[3] = *(undefined4 *)(iVar1 + 8);
          if (*(int *)(iVar1 + 8) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          *(undefined4 **)(iVar1 + 8) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[2];
        puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        *(undefined4 **)(iVar1 + 0xc) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(puVar6[1] + 4) + 8);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[2]) {
          iVar1 = puVar3[2];
          puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(iVar1 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          *(undefined4 **)(iVar1 + 0xc) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[3];
        puVar3[3] = *(undefined4 *)(iVar1 + 8);
        if (*(int *)(iVar1 + 8) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        *(undefined4 **)(iVar1 + 8) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
  }
  **(undefined4 **)(param_2[9] + 4) = 1;
  *(undefined4 **)(param_1 + 8) = puVar4;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413864  FUN_00413864   (381 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00413864(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x476788);
  puVar3 = (undefined4 *)param_1[6];
  if (puVar3 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      FUN_00411ec4(param_1);
      puVar3 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
    else {
      puVar3 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
  }
  else {
    param_1[6] = *(int *)(param_1[6] + 0xc);
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  if (puVar3 + 4 != (undefined4 *)0x0) {
    puVar3[6] = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar4 = std::string::__getRep(puVar3 + 4,uVar2,uVar2);
      puVar3[6] = piVar4 + 3;
      memcpy((undefined4 *)puVar3[6],*(undefined4 **)(param_2 + 8),uVar2);
    }
    else {
      puVar3[6] = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(puVar3[6] + -0xc);
      if (piVar4 != &DAT_00485bcc) {
        *piVar4 = *piVar4 + 1;
      }
    }
    puVar3[8] = *(undefined4 *)(param_2 + 0x10);
  }
  *in_FS_OFFSET = local_2c;
  return puVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413a0c  FUN_00413a0c   (107 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00413a0c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((*piVar1 == 0) && (piVar1 == *(int **)(piVar1[1] + 4))) {
    *(int *)(param_1 + 8) = piVar1[3];
  }
  else if (*(int *)(*(int *)(param_1 + 8) + 8) == 0) {
    for (iVar2 = *(int *)(*(int *)(param_1 + 8) + 4); *(int *)(param_1 + 8) == *(int *)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 4)) {
      *(int *)(param_1 + 8) = iVar2;
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    for (iVar2 = *(int *)(*(int *)(param_1 + 8) + 8); *(int *)(iVar2 + 0xc) != 0;
        iVar2 = *(int *)(iVar2 + 0xc)) {
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413a78  FUN_00413a78   (352 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00413adf) */
void __cdecl FUN_00413a78(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4767dc);
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  if ((uint)(iVar3 >> 4) < param_2) {
    local_c = &DAT_00485bd8;
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    FUN_00413bd8(param_1,*(int *)(param_1 + 8),param_2 - (iVar3 >> 4),(int)local_14);
    if (local_c != (undefined *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
        if (piVar4 == &DAT_00485bcc) {
          iVar3 = 1;
        }
        else if (piVar4 == &DAT_00485bcc) {
          iVar3 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar3 = *piVar4 + 1;
        }
        if (iVar3 != 0) goto LAB_00413bc8;
      }
      operator_delete();
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = iVar3 - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if (param_2 < (uint)(iVar2 >> 4)) {
      iVar5 = param_2 * 0x10 + *(int *)(param_1 + 4);
      iVar1 = FUN_00413fec(iVar3,iVar3,iVar5);
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = iVar3 - iVar5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar3 >> 4) * -0x10;
      FUN_00414020(param_1,iVar1,iVar2);
    }
  }
LAB_00413bc8:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413bd8  FUN_00413bd8   (646 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00413bd8(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x476838);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x18) - iVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if ((uint)(iVar2 >> 4) < param_3) {
      iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      local_3c = iVar1 >> 4;
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      iVar1 = operator_new();
      if (iVar1 == 0) {
        local_1c = 8;
        local_8 = &std::bad_alloc::vftable;
        local_10 = local_10 + 2;
        FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_8,0,&LAB_0040eb80,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_0041262c(*(int *)(param_1 + 4),param_2,iVar1);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_00413eac((iVar2 >> 4) * 0x10 + iVar1,param_3,param_4);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_0041262c(param_2,*(int *)(param_1 + 8),((iVar2 >> 4) + param_3) * 0x10 + iVar1);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_00414020(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      operator_delete();
      *(int *)(param_1 + 0x18) = local_38 * 0x10 + iVar1;
      *(uint *)(param_1 + 8) = (iVar2 >> 4) * 0x10 + iVar1 + param_3 * 0x10;
      *(int *)(param_1 + 4) = iVar1;
    }
    else {
      iVar2 = iVar1 - param_2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      if (param_3 < (uint)(iVar2 >> 4)) {
        FUN_0041262c(iVar1 + param_3 * -0x10,iVar1,iVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
        FUN_004125fc(param_2,iVar1 + param_3 * -0x10,iVar1);
        FUN_00413e80(param_2,param_3 * 0x10 + param_2,param_4);
      }
      else {
        iVar2 = iVar1 - param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        iVar2 = param_3 - (iVar2 >> 4);
        FUN_00413eac(iVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 0x10;
        FUN_0041262c(param_2,iVar1,param_3 * 0x10 + param_2);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 0x10;
        FUN_00413e80(param_2,iVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413e80  FUN_00413e80   (43 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00413e80(int param_1,int param_2,int param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
    FUN_00459ad4(param_1,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413eac  FUN_00413eac   (279 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00413eac(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x476888);
  iVar1 = param_1;
  while (param_1 = iVar1, iVar2 = param_2 + -1, param_2 != 0) {
    iVar1 = param_1 + 0x10;
    param_2 = iVar2;
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        uVar3 = *(uint *)(*(int *)(param_3 + 8) + -4);
        piVar4 = std::string::__getRep(param_1,uVar3,uVar3);
        *(int **)(param_1 + 8) = piVar4 + 3;
        memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_3 + 8),uVar3);
      }
      else {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
        piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
        if (piVar4 != &DAT_00485bcc) {
          *piVar4 = *piVar4 + 1;
        }
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413fec  FUN_00413fec   (50 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00413fec(int param_1,int param_2,int param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
    FUN_00459ad4(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414020  FUN_00414020   (182 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00414020(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4768c0);
joined_r0x00414039:
  do {
    iVar1 = param_2;
    if (iVar1 == param_3) {
      *in_FS_OFFSET = local_28;
      return;
    }
    param_2 = iVar1 + 0x10;
  } while ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0));
  if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) goto code_r0x0041405c;
  goto LAB_00414089;
code_r0x0041405c:
  piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
  if (piVar3 == &DAT_00485bcc) {
    iVar2 = 1;
  }
  else if (piVar3 == &DAT_00485bcc) {
    iVar2 = 1;
  }
  else {
    *piVar3 = *piVar3 + -1;
    iVar2 = *piVar3 + 1;
  }
  if (iVar2 == 0) {
LAB_00414089:
    operator_delete();
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  goto joined_r0x00414039;
}

// ----------------------------------------------------------------------------------------------------
// 0x004140d8  FUN_004140d8   (788 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004140d8(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_190 [240];
  undefined4 *local_a0;
  undefined1 *local_94;
  undefined4 local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *local_80;
  uint local_7c;
  undefined1 *local_78;
  int *local_74;
  int *local_70;
  undefined1 *local_6c;
  int *local_68;
  undefined4 local_64;
  uint *local_58;
  undefined4 local_54;
  undefined2 local_44;
  int local_38;
  undefined **local_30;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x476930);
  if (param_2 < 0x10000000) goto LAB_004142cd;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 1;
  puVar5 = &LAB_00402064;
  uVar4 = 0;
  local_44 = 0x14;
  local_58 = (uint *)FUN_004670cc(local_190,PTR_s_invalid_string_size_parameter_in_00488a54);
  std::string::string_from_cstr((int)local_2c,local_58);
  local_38 = local_38 + 2;
  local_1c[0] = &std::logic_error::vftable;
  local_64 = 0;
  local_c = (int *)0x0;
  local_44 = 0x20;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_74 = std::string::__getRep(local_14,uVar1,uVar1);
    local_78 = local_14;
    local_84 = local_74 + 3;
    local_80 = local_24;
    local_7c = uVar1;
    local_70 = local_84;
    local_c = local_84;
    memcpy(local_84,local_24,uVar1);
  }
  else {
    local_6c = local_14;
    local_68 = local_24;
    local_c = local_24;
    piVar3 = local_24 + -3;
    if (piVar3 != &DAT_00485bcc) {
      *piVar3 = *piVar3 + 1;
    }
  }
  local_44 = 0x14;
  local_1c[0] = &std::length_error::vftable;
  local_38 = local_38 + 2;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar3 = local_24 + -3;
      if (piVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_004142b6;
    }
    local_88 = local_24 + -3;
    local_8c = local_24 + -3;
    operator_delete();
    local_90 = 0;
    local_94 = local_2c;
    local_24 = (int *)0x0;
  }
LAB_004142b6:
  local_44 = 8;
  FUN_00471ae8((uint *)&DAT_00402008,(undefined4*)local_1c,uVar4,puVar5,uVar6,uVar7,uVar8,uVar9);
LAB_004142cd:
  iVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  if ((uint)(iVar2 >> 4) < param_2) {
    local_a0 = (undefined4 *)operator_new();
    if (local_a0 == (undefined4 *)0x0) {
      local_44 = 0x44;
      local_30 = &std::bad_alloc::vftable;
      local_38 = local_38 + 2;
      FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_30,0,&LAB_0040eb80,1,0,0,0);
    }
    local_44 = 0x50;
    FUN_00414410(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),local_a0);
    local_44 = 0;
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    FUN_00414a7c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 8) = local_a0 + (iVar2 >> 4) * 4;
    *(undefined4 **)(param_1 + 4) = local_a0;
    *(undefined4 **)(param_1 + 0x18) = local_a0 + param_2 * 4;
  }
  *in_FS_OFFSET = local_54;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414410  FUN_00414410   (126 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00414410(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4769bc);
  while (puVar2 = param_3, puVar1 = param_1, param_2 != puVar1) {
    param_1 = puVar1 + 4;
    param_3 = puVar2 + 4;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
  }
  *in_FS_OFFSET = local_2c;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004144b8  FUN_004144b8   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004144b8(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004144d0  FUN_004144d0   (518 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004144d0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 local_34;
  undefined **local_c;
  undefined4 *local_8;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x476a38);
  local_8 = *(undefined4 **)(param_1 + 8);
  if (local_8 == *(undefined4 **)(param_1 + 0x18)) {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if (iVar2 >> 4 == 0) {
      iVar2 = 0x40;
    }
    else {
      iVar2 = (iVar2 >> 4) * 2;
    }
    puVar1 = (undefined4 *)operator_new();
    if (puVar1 == (undefined4 *)0x0) {
      local_c = &std::bad_alloc::vftable;
      FUN_00471ae8((uint *)&DAT_0040eb28,(undefined4*)&local_c,0,&LAB_0040eb80,1,0,0,0);
    }
    FUN_00414410(*(undefined4 **)(param_1 + 4),param_2,puVar1);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    puVar4 = puVar1 + (iVar3 >> 4) * 4;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_3;
      puVar4[1] = param_3[1];
      puVar4[2] = param_3[2];
    }
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    FUN_00414410(param_2,*(undefined4 **)(param_1 + 8),puVar1 + (iVar3 >> 4) * 4 + 4);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    FUN_00414a7c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar1 + iVar2 * 4;
    *(undefined4 **)(param_1 + 8) = puVar1 + (iVar3 >> 4) * 4 + 4;
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  else {
    if (local_8 != (undefined4 *)0x0) {
      *local_8 = local_8[-4];
      local_8[1] = local_8[-3];
      local_8[2] = local_8[-2];
    }
    FUN_004146f8(param_2,*(undefined4 **)(param_1 + 8) + -4,*(undefined4 **)(param_1 + 8));
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *param_3;
      param_3 = param_3 + (uint)bVar5 * -2 + 1;
      param_2 = param_2 + (uint)bVar5 * -2 + 1;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004146f8  FUN_004146f8   (47 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004146f8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_2 != param_1) {
    param_3 = param_3 + -4;
    param_2 = param_2 + -4;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414728  FUN_00414728   (92 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00414728(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2 - (int)param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  if (iVar1 >> 4 < 0x11) {
    FUN_00414784(param_1,param_2,param_3);
  }
  else {
    FUN_00414784(param_1,param_1 + 0x40,param_3);
    FUN_00414868(param_1 + 0x40,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414784  FUN_00414784   (156 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00414784(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined *local_8;
  
  bVar7 = 0;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar1 = puVar2 + 4, puVar1 != param_2) {
      local_8 = param_3;
      local_18 = *puVar1;
      local_14 = puVar2[5];
      local_10 = puVar2[6];
      cVar3 = (*(code *)param_3)();
      if (cVar3 == '\0') {
        FUN_00414820(puVar1);
        puVar2 = puVar1;
      }
      else {
        FUN_004146f8(param_1,puVar1,puVar2 + 8);
        puVar5 = &local_18;
        puVar6 = param_1;
        for (iVar4 = 4; puVar2 = puVar1, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414820  FUN_00414820   (72 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00414820(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  code *in_stack_00000018;
  
  bVar6 = 0;
  while( true ) {
    puVar4 = param_1 + -4;
    cVar1 = (*in_stack_00000018)();
    if (cVar1 == '\0') break;
    puVar3 = puVar4;
    puVar5 = param_1;
    for (iVar2 = 4; param_1 = puVar4, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  puVar4 = (undefined4 *)&GHIDRA_STACK(0x00000008);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    param_1 = param_1 + (uint)bVar6 * -2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414868  FUN_00414868   (63 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00414868(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
    FUN_00414820(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004148a8  FUN_004148a8   (320 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004148a8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    iVar4 = (int)param_2 - (int)param_1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    if (iVar4 >> 4 < 0x11) break;
    cVar1 = (*(code *)param_4)();
    if (cVar1 == '\0') {
      cVar1 = (*(code *)param_4)();
      if (cVar1 == '\0') {
        (*(code *)param_4)();
      }
    }
    else {
      cVar1 = (*(code *)param_4)();
      if (cVar1 == '\0') {
        (*(code *)param_4)();
      }
    }
    puVar2 = FUN_004149e8(param_1,param_2);
    iVar4 = (int)puVar2 - (int)param_1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    iVar3 = (int)param_2 - (int)puVar2;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar4 >> 4 < iVar3 >> 4) {
      FUN_004148a8(param_1,puVar2,0,param_4);
      param_1 = puVar2;
    }
    else {
      FUN_004148a8(puVar2,param_2,0,param_4);
      param_2 = puVar2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004149e8  FUN_004149e8   (148 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004149e8(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  code *in_stack_0000001c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_c;
  undefined4 *local_8;
  
  bVar5 = 0;
  while( true ) {
    while (cVar1 = (*in_stack_0000001c)(), cVar1 != '\0') {
      param_1 = param_1 + 4;
    }
    do {
      param_2 = param_2 + -4;
      cVar1 = (*in_stack_0000001c)();
    } while (cVar1 != '\0');
    if (param_2 <= param_1) break;
    local_8 = param_2;
    local_c = param_1;
    local_1c = *param_1;
    local_18 = param_1[1];
    local_14 = param_1[2];
    puVar3 = param_2;
    puVar4 = param_1;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    puVar3 = &local_1c;
    puVar4 = param_2;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    param_1 = param_1 + 4;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414a7c  FUN_00414a7c   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00414a7c(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 0x10) {
  }
  return;
}

} // namespace tea
