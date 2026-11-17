// TEA.exe — application module "MatchListWindows"
// 109 functions, 0x004292c0..0x00431458. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004292c0  MatchListWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: MatchListWindows::vf8 [rtti:vtable]
undefined4 __cdecl MatchListWindows::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&MatchListWindows::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::vf8(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429308  FUN_00429308   (1402 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00429568) */
/* WARNING: Removing unreachable block (ram,0x00429690) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff98 : 0x00429698 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl FUN_00429308(int *param_1,int param_2,undefined4 *param_3,int param_4,int *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  int local_60;
  int local_5c;
  undefined4 local_3c;
  int local_14 [3];
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x4f23d0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x4e);
    param_1[0x4e] = (int)(param_1 + 0x4b);
    param_1[0x4f] = (int)(param_1 + 0x4c);
    param_1[1] = (int)(param_1 + 0x4b);
    param_1[2] = (int)(param_1 + 0x4c);
    param_1[0x4a] = 0;
    param_1[0x4d] = 0;
    param_1[0x4b] = (int)&OWL::TEventHandler::vftable;
    param_1[0x4c] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x4e,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x114;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x114;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
  }
  FUN_004ad6d8(param_1,1,uVar2,param_4,(uint *)"MatchList",*param_5,param_5[1],
               param_5[2] - *param_5,param_5[3] - param_5[1],0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x114;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x114;
  param_1[3] = (int)&MatchListWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f2c68;
  *(undefined ***)param_1[2] = &PTR_LAB_004f2c74;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f2c80;
  piVar3 = param_1 + 6;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *piVar3 = 1;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  puVar4 = (undefined4 *)param_1[0xc];
  if (param_1[0xc] == 0) {
    if (param_1[0xd] == param_1[0xe]) {
      FUN_00429928(piVar3);
      puVar4 = (undefined4 *)param_1[0xd];
      param_1[0xd] = param_1[0xd] + 0x14;
    }
    else {
      puVar4 = (undefined4 *)param_1[0xd];
      param_1[0xd] = param_1[0xd] + 0x14;
    }
  }
  else {
    param_1[0xc] = *(int *)(param_1[0xc] + 0xc);
  }
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  param_1[0xf] = (int)puVar4;
  *(undefined4 *)(param_1[0xf] + 4) = 0;
  *(int *)(param_1[0xf] + 8) = param_1[0xf];
  *(int *)(param_1[0xf] + 0xc) = param_1[0xf];
  *piVar3 = 0x100;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = 0x55;
  piVar3 = param_1 + 0x1e;
  param_1[0x22] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = local_60;
  param_1[0x2b] = local_5c;
  *piVar3 = 1;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  puVar4 = (undefined4 *)param_1[0x24];
  if (param_1[0x24] == 0) {
    if (param_1[0x25] == param_1[0x26]) {
      FUN_00429a74(piVar3);
      puVar4 = (undefined4 *)param_1[0x25];
      param_1[0x25] = param_1[0x25] + 0x18;
    }
    else {
      puVar4 = (undefined4 *)param_1[0x25];
      param_1[0x25] = param_1[0x25] + 0x18;
    }
  }
  else {
    param_1[0x24] = *(int *)(param_1[0x24] + 0xc);
  }
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  param_1[0x27] = (int)puVar4;
  *(undefined4 *)(param_1[0x27] + 4) = 0;
  *(int *)(param_1[0x27] + 8) = param_1[0x27];
  *(int *)(param_1[0x27] + 0xc) = param_1[0x27];
  *piVar3 = 0x80;
  param_1[0x2c] = -2;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  param_1[0x30] = 0x100;
  param_1[0x38] = (int)param_3;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = param_4;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = -1;
  param_1[0x42] = 2;
  param_1[0x43] = -1;
  param_1[0x44] = -1;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  FUN_00429bc0((int)(param_1 + 0x14),0x200);
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x200000;
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x100000;
  uVar1 = FUN_004a793c(*param_1);
  FUN_004a795c(*param_1,uVar1 | 0x200);
  local_8 = (undefined4 *)operator_new();
  if (local_8 != (undefined4 *)0x0) {
    FUN_0044f260(local_8,*param_1,1,1,0,0);
  }
  *(undefined4 **)(*param_1 + 0x44) = local_8;
  *(undefined1 *)(local_8 + 0xe) = 1;
  *(undefined1 *)((int)local_8 + 0x3a) = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  if (param_1[0x16] == param_1[0x1a]) {
    FUN_00429ffc((int)(param_1 + 0x14),(int *)param_1[0x16],local_14);
  }
  else {
    if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
      FUN_00430560((undefined4 *)param_1[0x16],local_14);
    }
    param_1[0x16] = param_1[0x16] + 0xc;
  }
  FUN_004305f4(local_14);
  param_1[0x1c] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *in_FS_OFFSET = local_3c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429928  FUN_00429928   (297 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00429928(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined **local_c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4f24a8);
  piVar1 = (int *)operator_new();
  if (piVar1 == (int *)0x0) {
    local_8 = &std::bad_alloc::vftable;
    FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
  }
  iVar2 = operator_new();
  if (iVar2 == 0) {
    local_c = &std::bad_alloc::vftable;
    FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[4];
  piVar1[1] = *param_1;
  param_1[4] = (int)piVar1;
  iVar2 = *(int *)(param_1[4] + 8);
  param_1[7] = iVar2;
  param_1[8] = iVar2 + *param_1 * 0x14;
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429a74  FUN_00429a74   (297 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00429a74(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined **local_c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4f2514);
  piVar1 = (int *)operator_new();
  if (piVar1 == (int *)0x0) {
    local_8 = &std::bad_alloc::vftable;
    FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
  }
  iVar2 = operator_new();
  if (iVar2 == 0) {
    local_c = &std::bad_alloc::vftable;
    FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[4];
  piVar1[1] = *param_1;
  param_1[4] = (int)piVar1;
  iVar2 = *(int *)(param_1[4] + 8);
  param_1[7] = iVar2;
  param_1[8] = iVar2 + *param_1 * 0x18;
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429bc0  FUN_00429bc0   (799 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00429bc0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
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
  
  __InitExceptBlockLDTC(0x4f259c);
  if (param_2 < 0x15555556) goto LAB_00429db5;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 1;
  puVar7 = &LAB_00408370;
  uVar6 = 0;
  local_44 = 0x14;
  local_58 = (uint *)FUN_004dc320(local_190,PTR_s_invalid_string_size_parameter_in_00516d20);
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
    piVar5 = local_24 + -3;
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  local_44 = 0x14;
  local_1c[0] = &std::length_error::vftable;
  local_38 = local_38 + 2;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar5 = local_24 + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00429d9e;
    }
    local_88 = local_24 + -3;
    local_8c = local_24 + -3;
    operator_delete();
    local_90 = 0;
    local_94 = local_2c;
    local_24 = (int *)0x0;
  }
LAB_00429d9e:
  local_44 = 8;
  FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_1c,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
LAB_00429db5:
  if ((uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 4)) / 0xc) < param_2) {
    local_a0 = (undefined4 *)operator_new();
    if (local_a0 == (undefined4 *)0x0) {
      local_44 = 0x44;
      local_30 = &std::bad_alloc::vftable;
      local_38 = local_38 + 2;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_30,0,&LAB_00404134,1,0,0,0);
    }
    local_44 = 0x50;
    FUN_00429f04(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),local_a0);
    local_44 = 0;
    puVar2 = *(undefined4 **)(param_1 + 8);
    puVar3 = *(undefined4 **)(param_1 + 4);
    FUN_00429fb8(param_1,puVar3,puVar2);
    operator_delete();
    *(undefined4 **)(param_1 + 8) = local_a0 + (((int)puVar2 - (int)puVar3) / 0xc) * 3;
    *(undefined4 **)(param_1 + 4) = local_a0;
    *(undefined4 **)(param_1 + 0x18) = local_a0 + param_2 * 3;
  }
  *in_FS_OFFSET = local_54;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429f04  FUN_00429f04   (117 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00429f04(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4f2628);
  while (puVar2 = param_3, puVar1 = param_1, param_2 != puVar1) {
    param_1 = puVar1 + 3;
    param_3 = puVar2 + 3;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00430560(puVar2,puVar1);
    }
  }
  *in_FS_OFFSET = local_2c;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429fa0  FUN_00429fa0   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00429fa0(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 0xc) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429fb8  FUN_00429fb8   (67 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00429fb8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2654);
  while (puVar1 = param_2, param_3 != puVar1) {
    param_2 = puVar1 + 3;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004305f4(puVar1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429ffc  FUN_00429ffc   (513 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00429ffc(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x4f26b8);
  local_8 = *(undefined4 **)(param_1 + 8);
  if (local_8 == *(undefined4 **)(param_1 + 0x18)) {
    iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
    if (iVar3 == 0) {
      iVar3 = 0x55;
    }
    else {
      iVar3 = iVar3 * 2;
    }
    puVar4 = (undefined4 *)operator_new();
    if (puVar4 == (undefined4 *)0x0) {
      local_c = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
    }
    FUN_00429f04(*(undefined4 **)(param_1 + 4),param_2,puVar4);
    if (puVar4 + (((int)param_2 - *(int *)(param_1 + 4)) / 0xc) * 3 != (undefined4 *)0x0) {
      FUN_00430560(puVar4 + (((int)param_2 - *(int *)(param_1 + 4)) / 0xc) * 3,param_3);
    }
    FUN_00429f04(param_2,*(undefined4 **)(param_1 + 8),
                 puVar4 + (((int)param_2 - *(int *)(param_1 + 4)) / 0xc) * 3 + 3);
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar2 = *(undefined4 **)(param_1 + 4);
    FUN_00429fb8(param_1,puVar2,puVar1);
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar4 + iVar3 * 3;
    *(undefined4 **)(param_1 + 8) = puVar4 + (((int)puVar1 - (int)puVar2) / 0xc) * 3 + 3;
    *(undefined4 **)(param_1 + 4) = puVar4;
  }
  else {
    if (local_8 != (undefined4 *)0x0) {
      FUN_00430560(local_8,local_8 + -3);
    }
    FUN_0042a220(param_2,*(int **)(param_1 + 8) + -3,*(int **)(param_1 + 8));
    FUN_004305b4(param_2,param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xc;
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a220  FUN_0042a220   (46 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0042a220(int *param_1,int *param_2,int *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -3;
    param_3 = param_3 + -3;
    FUN_004305b4(param_3,param_2);
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a250  MatchListWindows::~MatchListWindows   (522 bytes)   [rtti:dtor destructor]
//   written in code as MatchListWindows::_dtor
void __cdecl MatchListWindows::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff7c;
  undefined4 in_stack_ffffff80;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x4f2718);
  if (param_1 != (int *)0x0) {
    local_18 = 8;
    param_1[3] = (int)&MatchListWindows::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004f2c68;
    *(undefined ***)param_1[2] = &PTR_LAB_004f2c74;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f2c80;
    local_c = 8;
    FUN_0042a45c(param_1 + 0x30,param_1[0x31],param_1[0x32]);
    operator_delete();
    local_c = local_c + -2;
    if (param_1[0x27] != 0) {
      local_30 = param_1[0x27];
      local_2c = *(int *)(param_1[0x27] + 8);
      FUN_0042a474(local_48,(int)(param_1 + 0x1e),in_stack_ffffff7c,in_stack_ffffff80,local_2c);
      iVar1 = param_1[0x27];
      *(int *)(iVar1 + 0xc) = param_1[0x24];
      param_1[0x24] = iVar1;
      FUN_0042af24((int)(param_1 + 0x1e));
    }
    local_c = local_c + -1;
    FUN_00429fb8(param_1 + 0x14,(undefined4 *)param_1[0x15],(undefined4 *)param_1[0x16]);
    operator_delete();
    local_c = local_c + -2;
    if (param_1[0xf] != 0) {
      local_38 = param_1[0xf];
      local_34 = *(int *)(param_1[0xf] + 8);
      FUN_0042af64(local_58,(int)(param_1 + 6),in_stack_ffffff7c,in_stack_ffffff80,local_34);
      iVar1 = param_1[0xf];
      *(int *)(iVar1 + 0xc) = param_1[0xc];
      param_1[0xc] = iVar1;
      FUN_0042b9ac((int)(param_1 + 6));
    }
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x114;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x114;
    local_c = local_c + -3;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x114;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x114;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      local_c = local_c + -2;
      OWL::TWindow::_dtor(param_1 + 0x4e,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      local_c = local_c + -1;
      OWL::TStreamableBase::_dtor(param_1 + 0x4c,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a45c  FUN_0042a45c   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042a45c(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a474  FUN_0042a474   (258 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042a474(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

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
    FUN_0042a578(param_2,*(int *)(iVar3 + 4));
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
      FUN_0042aec0((int)&param_3);
      FUN_0042a5d0(local_54,param_2,uVar1,uVar2,iVar3);
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
// 0x0042a578  FUN_0042a578   (86 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042a578(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f275c);
  while (param_2 != 0) {
    FUN_0042a578(param_1,*(int *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = param_2;
    param_2 = iVar1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a5d0  FUN_0042a5d0   (2201 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042a5d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int *local_5c;
  int *local_58;
  int *local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  char local_31;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2764);
  local_9c = param_3;
  local_98 = param_4;
  local_94 = param_5;
  local_2c = *(int *)(param_2 + 0x24);
  if (local_2c != param_5) {
    FUN_0042aec0((int)&local_9c);
  }
  FUN_0042ae70((undefined4*)&local_30,param_5);
  local_31 = '\0';
  local_38 = local_30 + 2;
  piVar6 = local_30;
  if (*local_38 == 0) {
    local_3c = local_30 + 3;
    if (*local_3c == 0) {
      piVar5 = (int *)local_30[1];
      local_40 = local_30;
      local_44 = local_30[1];
      if (*(int *)(param_2 + 0x24) == local_44) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_44;
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_44;
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_44 + 8) == local_30) {
        *(undefined4 *)(local_44 + 8) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_30) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_44;
        }
      }
      else {
        *(undefined4 *)(local_44 + 0xc) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_30) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_44;
        }
      }
      local_31 = '\x01';
    }
    else {
      piVar5 = (int *)local_30[3];
    }
  }
  else {
    local_48 = local_30 + 3;
    if (*local_48 == 0) {
      piVar5 = (int *)local_30[2];
    }
    else {
      for (piVar6 = (int *)local_30[3]; piVar6[2] != 0; piVar6 = (int *)piVar6[2]) {
      }
      piVar5 = (int *)piVar6[3];
    }
  }
  if ((local_31 == '\0') && (piVar6 != local_30)) {
    *(int **)(local_30[2] + 4) = piVar6;
    piVar6[2] = local_30[2];
    if (piVar6 == (int *)local_30[3]) {
      if (piVar5 != (int *)0x0) {
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      if (piVar5 != (int *)0x0) {
        piVar5[1] = piVar6[1];
      }
      *(int **)(piVar6[1] + 8) = piVar5;
      piVar6[3] = local_30[3];
      *(int **)(local_30[3] + 4) = piVar6;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_30) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar6;
    }
    else if (*(int **)(local_30[1] + 8) == local_30) {
      *(int **)(local_30[1] + 8) = piVar6;
    }
    else {
      *(int **)(local_30[1] + 0xc) = piVar6;
    }
    piVar6[1] = local_30[1];
    if (piVar5 == (int *)0x0) {
      piVar5 = piVar6;
    }
    iVar1 = *piVar6;
    *piVar6 = *local_30;
    *local_30 = iVar1;
    piVar6 = local_30;
  }
  else if (local_31 == '\0') {
    piVar5[1] = piVar6[1];
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_30) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar5;
    }
    else if (*(int **)(local_30[1] + 8) == local_30) {
      *(int **)(local_30[1] + 8) = piVar5;
    }
    else {
      *(int **)(local_30[1] + 0xc) = piVar5;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_30) {
      local_58 = local_30 + 3;
      if (*local_58 == 0) {
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_30[1];
      }
      else {
        uVar3 = FUN_0042ae80((int)piVar5);
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 8) = uVar3;
      }
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_30) {
      local_5c = local_30 + 2;
      if (*local_5c == 0) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_30[1];
      }
      else {
        uVar3 = FUN_0042aea0((int)piVar5);
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 0xc) = uVar3;
      }
    }
  }
  if ((piVar5 != *(int **)(param_2 + 0x24)) && (*piVar6 != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((piVar5 == *(int **)(*(int *)(param_2 + 0x24) + 4)) || (*piVar5 != 1))
            goto LAB_0042ae04;
            if (piVar5 != *(int **)(piVar5[1] + 8)) break;
            piVar4 = *(int **)(piVar5[1] + 0xc);
            if (piVar4 == (int *)0x0) {
              *piVar5 = 0;
              piVar5 = (int *)piVar5[1];
            }
            else {
              if (*piVar4 == 0) {
                *piVar4 = 1;
                *(undefined4 *)piVar5[1] = 0;
                iVar1 = piVar5[1];
                iVar2 = *(int *)(iVar1 + 0xc);
                *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                if (*(int *)(iVar2 + 8) != 0) {
                  *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                }
                *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                  *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
                }
                else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                  *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                }
                else {
                  *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                }
                *(int *)(iVar2 + 8) = iVar1;
                *(int *)(iVar1 + 4) = iVar2;
                piVar4 = *(int **)(piVar5[1] + 0xc);
              }
              if (piVar4 == (int *)0x0) {
                *piVar5 = 0;
                piVar5 = (int *)piVar5[1];
              }
              else {
                if (((piVar4[2] != 0) && (*(int *)piVar4[2] != 1)) ||
                   ((piVar4[3] != 0 && (*(int *)piVar4[3] != 1)))) {
                  if ((piVar4[3] == 0) || (*(int *)piVar4[3] == 1)) {
                    if (piVar4[2] != 0) {
                      *(undefined4 *)piVar4[2] = 1;
                    }
                    *piVar4 = 0;
                    iVar1 = piVar4[2];
                    piVar4[2] = *(int *)(iVar1 + 0xc);
                    if (*(int *)(iVar1 + 0xc) != 0) {
                      *(int **)(*(int *)(iVar1 + 0xc) + 4) = piVar4;
                    }
                    *(int *)(iVar1 + 4) = piVar4[1];
                    if (piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar1;
                    }
                    else if (piVar4 == *(int **)(piVar4[1] + 0xc)) {
                      *(int *)(piVar4[1] + 0xc) = iVar1;
                    }
                    else {
                      *(int *)(piVar4[1] + 8) = iVar1;
                    }
                    *(int **)(iVar1 + 0xc) = piVar4;
                    piVar4[1] = iVar1;
                    piVar4 = *(int **)(piVar5[1] + 0xc);
                  }
                  if (piVar4 != (int *)0x0) {
                    *piVar4 = *(int *)piVar5[1];
                    *(undefined4 *)piVar5[1] = 1;
                    if (piVar4[3] != 0) {
                      *(undefined4 *)piVar4[3] = 1;
                    }
                    iVar1 = piVar5[1];
                    iVar2 = *(int *)(iVar1 + 0xc);
                    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                    if (*(int *)(iVar2 + 8) != 0) {
                      *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                    }
                    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                    if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
                    }
                    else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                      *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                    }
                    else {
                      *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                    }
                    *(int *)(iVar2 + 8) = iVar1;
                    *(int *)(iVar1 + 4) = iVar2;
                  }
                  goto LAB_0042ae04;
                }
                *piVar4 = 0;
                piVar5 = (int *)piVar5[1];
              }
            }
          }
          piVar4 = *(int **)(piVar5[1] + 8);
          if (piVar4 != (int *)0x0) break;
          *piVar5 = 0;
          piVar5 = (int *)piVar5[1];
        }
        if (*piVar4 == 0) {
          *piVar4 = 1;
          *(undefined4 *)piVar5[1] = 0;
          iVar1 = piVar5[1];
          iVar2 = *(int *)(iVar1 + 8);
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
          if (*(int *)(iVar2 + 0xc) != 0) {
            *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
          }
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
          if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
            *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
          }
          else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
          }
          else {
            *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
          }
          *(int *)(iVar2 + 0xc) = iVar1;
          *(int *)(iVar1 + 4) = iVar2;
          piVar4 = *(int **)(piVar5[1] + 8);
        }
        if (piVar4 != (int *)0x0) break;
        *piVar5 = 0;
        piVar5 = (int *)piVar5[1];
      }
      if (((piVar4[3] != 0) && (*(int *)piVar4[3] != 1)) ||
         ((piVar4[2] != 0 && (*(int *)piVar4[2] != 1)))) break;
      *piVar4 = 0;
      piVar5 = (int *)piVar5[1];
    }
    if ((piVar4[2] == 0) || (*(int *)piVar4[2] == 1)) {
      if (piVar4[3] != 0) {
        *(undefined4 *)piVar4[3] = 1;
      }
      *piVar4 = 0;
      iVar1 = piVar4[3];
      piVar4[3] = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 8) != 0) {
        *(int **)(*(int *)(iVar1 + 8) + 4) = piVar4;
      }
      *(int *)(iVar1 + 4) = piVar4[1];
      if (piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar1;
      }
      else if (piVar4 == *(int **)(piVar4[1] + 8)) {
        *(int *)(piVar4[1] + 8) = iVar1;
      }
      else {
        *(int *)(piVar4[1] + 0xc) = iVar1;
      }
      *(int **)(iVar1 + 8) = piVar4;
      piVar4[1] = iVar1;
      piVar4 = *(int **)(piVar5[1] + 8);
    }
    if (piVar4 != (int *)0x0) {
      *piVar4 = *(int *)piVar5[1];
      *(undefined4 *)piVar5[1] = 1;
      if (piVar4[2] != 0) {
        *(undefined4 *)piVar4[2] = 1;
      }
      iVar1 = piVar5[1];
      iVar2 = *(int *)(iVar1 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) != 0) {
        *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
      }
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
      if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
      }
      else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
      }
      else {
        *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
      }
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int *)(iVar1 + 4) = iVar2;
    }
LAB_0042ae04:
    *piVar5 = 1;
  }
  piVar6[3] = *(int *)(param_2 + 0x18);
  *(int **)(param_2 + 0x18) = piVar6;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = local_9c;
  param_1[1] = local_98;
  param_1[2] = local_94;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ae70  FUN_0042ae70   (13 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042ae70(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ae80  FUN_0042ae80   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0042ae80(int param_1)

{
  for (; *(int *)(param_1 + 8) != 0; param_1 = *(int *)(param_1 + 8)) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aea0  FUN_0042aea0   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0042aea0(int param_1)

{
  for (; *(int *)(param_1 + 0xc) != 0; param_1 = *(int *)(param_1 + 0xc)) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aec0  FUN_0042aec0   (99 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042aec0(int param_1)

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
// 0x0042af24  FUN_0042af24   (63 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042af24(int param_1)

{
  while (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x10);
    operator_delete();
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042af64  FUN_0042af64   (258 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042af64(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

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
    FUN_0042b068(param_2,*(int *)(iVar3 + 4));
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
      FUN_0042b948((int)&param_3);
      FUN_0042b0a4(local_54,param_2,uVar1,uVar2,iVar3);
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
// 0x0042b068  FUN_0042b068   (58 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042b068(int param_1,int param_2)

{
  int iVar1;
  
  while (param_2 != 0) {
    FUN_0042b068(param_1,*(int *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = param_2;
    param_2 = iVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b0a4  FUN_0042b0a4   (2124 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042b0a4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int *local_38;
  int *local_34;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  char local_d;
  int *local_c;
  int local_8;
  
  local_78 = param_3;
  local_74 = param_4;
  local_70 = param_5;
  local_8 = *(int *)(param_2 + 0x24);
  if (local_8 != param_5) {
    FUN_0042b948((int)&local_78);
  }
  FUN_0042b8f8((undefined4*)&local_c,param_5);
  local_d = '\0';
  local_14 = local_c + 2;
  piVar6 = local_c;
  if (*local_14 == 0) {
    local_18 = local_c + 3;
    if (*local_18 == 0) {
      piVar5 = (int *)local_c[1];
      local_1c = local_c;
      local_20 = local_c[1];
      if (*(int *)(param_2 + 0x24) == local_20) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_20;
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_20;
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_20 + 8) == local_c) {
        *(undefined4 *)(local_20 + 8) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_c) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_20;
        }
      }
      else {
        *(undefined4 *)(local_20 + 0xc) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_c) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_20;
        }
      }
      local_d = '\x01';
    }
    else {
      piVar5 = (int *)local_c[3];
    }
  }
  else {
    local_24 = local_c + 3;
    if (*local_24 == 0) {
      piVar5 = (int *)local_c[2];
    }
    else {
      for (piVar6 = (int *)local_c[3]; piVar6[2] != 0; piVar6 = (int *)piVar6[2]) {
      }
      piVar5 = (int *)piVar6[3];
    }
  }
  if ((local_d == '\0') && (piVar6 != local_c)) {
    *(int **)(local_c[2] + 4) = piVar6;
    piVar6[2] = local_c[2];
    if (piVar6 == (int *)local_c[3]) {
      if (piVar5 != (int *)0x0) {
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      if (piVar5 != (int *)0x0) {
        piVar5[1] = piVar6[1];
      }
      *(int **)(piVar6[1] + 8) = piVar5;
      piVar6[3] = local_c[3];
      *(int **)(local_c[3] + 4) = piVar6;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_c) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar6;
    }
    else if (*(int **)(local_c[1] + 8) == local_c) {
      *(int **)(local_c[1] + 8) = piVar6;
    }
    else {
      *(int **)(local_c[1] + 0xc) = piVar6;
    }
    piVar6[1] = local_c[1];
    if (piVar5 == (int *)0x0) {
      piVar5 = piVar6;
    }
    iVar1 = *piVar6;
    *piVar6 = *local_c;
    *local_c = iVar1;
    piVar6 = local_c;
  }
  else if (local_d == '\0') {
    piVar5[1] = piVar6[1];
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_c) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar5;
    }
    else if (*(int **)(local_c[1] + 8) == local_c) {
      *(int **)(local_c[1] + 8) = piVar5;
    }
    else {
      *(int **)(local_c[1] + 0xc) = piVar5;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_c) {
      local_34 = local_c + 3;
      if (*local_34 == 0) {
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_c[1];
      }
      else {
        uVar3 = FUN_0042b908((int)piVar5);
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 8) = uVar3;
      }
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_c) {
      local_38 = local_c + 2;
      if (*local_38 == 0) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_c[1];
      }
      else {
        uVar3 = FUN_0042b928((int)piVar5);
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 0xc) = uVar3;
      }
    }
  }
  if ((piVar5 != *(int **)(param_2 + 0x24)) && (*piVar6 != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((piVar5 == *(int **)(*(int *)(param_2 + 0x24) + 4)) || (*piVar5 != 1))
            goto LAB_0042b8b0;
            if (piVar5 != *(int **)(piVar5[1] + 8)) break;
            piVar4 = *(int **)(piVar5[1] + 0xc);
            if (piVar4 == (int *)0x0) {
              *piVar5 = 0;
              piVar5 = (int *)piVar5[1];
            }
            else {
              if (*piVar4 == 0) {
                *piVar4 = 1;
                *(undefined4 *)piVar5[1] = 0;
                iVar1 = piVar5[1];
                iVar2 = *(int *)(iVar1 + 0xc);
                *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                if (*(int *)(iVar2 + 8) != 0) {
                  *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                }
                *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                  *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
                }
                else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                  *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                }
                else {
                  *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                }
                *(int *)(iVar2 + 8) = iVar1;
                *(int *)(iVar1 + 4) = iVar2;
                piVar4 = *(int **)(piVar5[1] + 0xc);
              }
              if (piVar4 == (int *)0x0) {
                *piVar5 = 0;
                piVar5 = (int *)piVar5[1];
              }
              else {
                if (((piVar4[2] != 0) && (*(int *)piVar4[2] != 1)) ||
                   ((piVar4[3] != 0 && (*(int *)piVar4[3] != 1)))) {
                  if ((piVar4[3] == 0) || (*(int *)piVar4[3] == 1)) {
                    if (piVar4[2] != 0) {
                      *(undefined4 *)piVar4[2] = 1;
                    }
                    *piVar4 = 0;
                    iVar1 = piVar4[2];
                    piVar4[2] = *(int *)(iVar1 + 0xc);
                    if (*(int *)(iVar1 + 0xc) != 0) {
                      *(int **)(*(int *)(iVar1 + 0xc) + 4) = piVar4;
                    }
                    *(int *)(iVar1 + 4) = piVar4[1];
                    if (piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar1;
                    }
                    else if (piVar4 == *(int **)(piVar4[1] + 0xc)) {
                      *(int *)(piVar4[1] + 0xc) = iVar1;
                    }
                    else {
                      *(int *)(piVar4[1] + 8) = iVar1;
                    }
                    *(int **)(iVar1 + 0xc) = piVar4;
                    piVar4[1] = iVar1;
                    piVar4 = *(int **)(piVar5[1] + 0xc);
                  }
                  if (piVar4 != (int *)0x0) {
                    *piVar4 = *(int *)piVar5[1];
                    *(undefined4 *)piVar5[1] = 1;
                    if (piVar4[3] != 0) {
                      *(undefined4 *)piVar4[3] = 1;
                    }
                    iVar1 = piVar5[1];
                    iVar2 = *(int *)(iVar1 + 0xc);
                    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                    if (*(int *)(iVar2 + 8) != 0) {
                      *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                    }
                    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                    if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
                    }
                    else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                      *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                    }
                    else {
                      *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                    }
                    *(int *)(iVar2 + 8) = iVar1;
                    *(int *)(iVar1 + 4) = iVar2;
                  }
                  goto LAB_0042b8b0;
                }
                *piVar4 = 0;
                piVar5 = (int *)piVar5[1];
              }
            }
          }
          piVar4 = *(int **)(piVar5[1] + 8);
          if (piVar4 != (int *)0x0) break;
          *piVar5 = 0;
          piVar5 = (int *)piVar5[1];
        }
        if (*piVar4 == 0) {
          *piVar4 = 1;
          *(undefined4 *)piVar5[1] = 0;
          iVar1 = piVar5[1];
          iVar2 = *(int *)(iVar1 + 8);
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
          if (*(int *)(iVar2 + 0xc) != 0) {
            *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
          }
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
          if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
            *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
          }
          else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
          }
          else {
            *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
          }
          *(int *)(iVar2 + 0xc) = iVar1;
          *(int *)(iVar1 + 4) = iVar2;
          piVar4 = *(int **)(piVar5[1] + 8);
        }
        if (piVar4 != (int *)0x0) break;
        *piVar5 = 0;
        piVar5 = (int *)piVar5[1];
      }
      if (((piVar4[3] != 0) && (*(int *)piVar4[3] != 1)) ||
         ((piVar4[2] != 0 && (*(int *)piVar4[2] != 1)))) break;
      *piVar4 = 0;
      piVar5 = (int *)piVar5[1];
    }
    if ((piVar4[2] == 0) || (*(int *)piVar4[2] == 1)) {
      if (piVar4[3] != 0) {
        *(undefined4 *)piVar4[3] = 1;
      }
      *piVar4 = 0;
      iVar1 = piVar4[3];
      piVar4[3] = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 8) != 0) {
        *(int **)(*(int *)(iVar1 + 8) + 4) = piVar4;
      }
      *(int *)(iVar1 + 4) = piVar4[1];
      if (piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar1;
      }
      else if (piVar4 == *(int **)(piVar4[1] + 8)) {
        *(int *)(piVar4[1] + 8) = iVar1;
      }
      else {
        *(int *)(piVar4[1] + 0xc) = iVar1;
      }
      *(int **)(iVar1 + 8) = piVar4;
      piVar4[1] = iVar1;
      piVar4 = *(int **)(piVar5[1] + 8);
    }
    if (piVar4 != (int *)0x0) {
      *piVar4 = *(int *)piVar5[1];
      *(undefined4 *)piVar5[1] = 1;
      if (piVar4[2] != 0) {
        *(undefined4 *)piVar4[2] = 1;
      }
      iVar1 = piVar5[1];
      iVar2 = *(int *)(iVar1 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) != 0) {
        *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
      }
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
      if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
      }
      else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
      }
      else {
        *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
      }
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int *)(iVar1 + 4) = iVar2;
    }
LAB_0042b8b0:
    *piVar5 = 1;
  }
  piVar6[3] = *(int *)(param_2 + 0x18);
  *(int **)(param_2 + 0x18) = piVar6;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = local_70;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b8f8  FUN_0042b8f8   (13 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042b8f8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b908  FUN_0042b908   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0042b908(int param_1)

{
  for (; *(int *)(param_1 + 8) != 0; param_1 = *(int *)(param_1 + 8)) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b928  FUN_0042b928   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0042b928(int param_1)

{
  for (; *(int *)(param_1 + 0xc) != 0; param_1 = *(int *)(param_1 + 0xc)) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b948  FUN_0042b948   (99 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042b948(int param_1)

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
// 0x0042b9ac  FUN_0042b9ac   (63 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042b9ac(int param_1)

{
  while (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x10);
    operator_delete();
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b9ec  FUN_0042b9ec   (26 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042b9ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  *(undefined4 *)(param_1 + 0xe8) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ba08  FUN_0042ba08   (11 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0042ba08(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ba14  FUN_0042ba14   (127 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0042ba14(int param_1)

{
  undefined1 local_18 [8];
  int local_10;
  int local_8;
  
  local_8 = 0;
  local_10 = *(int *)(*(int *)(param_1 + 0x9c) + 8);
  while( true ) {
    if (*(int *)(param_1 + 0x9c) == local_10) break;
    local_8 = local_8 + *(int *)(local_10 + 0x14);
    FUN_0042ba94((int)local_18);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ba94  FUN_0042ba94   (99 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042ba94(int param_1)

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
// 0x0042baf8  FUN_0042baf8   (30 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0042baf8(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004308e4(param_1,param_2);
  return (int)puVar1 + 9;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bb18  FUN_0042bb18   (462 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042bb18(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a4 [4];
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_7c;
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_4c;
  undefined4 *local_44;
  undefined4 *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined4 *local_14;
  int local_10 [3];
  
  __InitExceptBlockLDTC(0x4f278c);
  local_3c = (int *)param_1[0x16];
  piVar1 = (int *)param_1[0x15];
  piVar2 = FUN_0042bce8(local_3c,local_3c,piVar1);
  local_40 = (undefined4 *)param_1[0x16];
  param_1[0x16] = param_1[0x16] + (((int)local_3c - (int)piVar1) / 0xc) * -0xc;
  FUN_00429fb8(param_1 + 0x14,piVar2,local_40);
  local_28 = 8;
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  local_1c = local_1c + 1;
  if (param_1[0x16] == param_1[0x1a]) {
    FUN_00429ffc((int)(param_1 + 0x14),(int *)param_1[0x16],local_10);
  }
  else {
    local_44 = (undefined4 *)param_1[0x16];
    local_14 = local_44;
    if (local_44 != (undefined4 *)0x0) {
      local_28 = 0x14;
      FUN_00430560(local_44,local_10);
    }
    local_28 = 8;
    param_1[0x16] = param_1[0x16] + 0xc;
  }
  local_1c = local_1c + -1;
  FUN_004305f4(local_10);
  param_1[0x1c] = 0;
  local_4c = param_1[0xf];
  local_5c = *(int *)(local_4c + 8);
  FUN_0042af64(local_74,(int)(param_1 + 6),local_64,local_60,local_5c);
  (**(code **)(**(int **)(*param_1 + 0x44) + 0x14))();
  local_7c = param_1[0x27];
  local_8c = *(int *)(local_7c + 8);
  FUN_0042a474(local_a4,(int)(param_1 + 0x1e),local_94,local_90,local_8c);
  param_1[0x41] = -1;
  param_1[0x42] = 2;
  param_1[0x43] = -1;
  param_1[0x44] = -1;
  (**(code **)(param_1[3] + 0x24))();
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bce8  FUN_0042bce8   (50 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0042bce8(int *param_1,int *param_2,int *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 3) {
    FUN_004305b4(param_3,param_1);
    param_3 = param_3 + 3;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bd1c  MatchListWindows::vf9   (29 bytes)   [rtti:vtable virtual slot 9]
void __cdecl MatchListWindows::vf9(int *param_1,byte param_2)

{
  InvalidateRect(*(HWND *)(*param_1 + 0xc),(RECT *)0x0,(uint)param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bd3c  FUN_0042bd3c   (111 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042bd3c(int *param_1,int *param_2,char param_3)

{
  uint uVar1;
  
  if (param_3 == '\0') {
    uVar1 = 8;
  }
  else {
    uVar1 = 0;
  }
  FUN_004a7aa0(*param_1,(HWND)0x0,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],
               uVar1 | 0x214);
  FUN_0042ba08((int)param_1);
  (**(code **)(**(int **)(*param_1 + 0x44) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bdac  MatchListWindows::vf10   (67 bytes)   [rtti:vtable virtual slot 10]
void __cdecl MatchListWindows::vf10(int *param_1,LPMSG param_2)

{
  if (param_2->message == 0x20a) {
    param_2->message = 0x115;
    param_2->wParam = (uint)((int)param_2->wParam < 0);
    param_2->lParam = 0;
  }
  OWL::TWindow::vf10(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bdf0  FUN_0042bdf0   (339 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042bdf0(int *param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  tagRECT *ptVar3;
  LONG *pLVar4;
  tagRECT local_44;
  int local_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  tagPOINT local_c;
  
  if (param_2 != '\0') {
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = 0;
    local_44.bottom = 0;
    FUN_004a7a6c(*param_1,&local_44);
    ptVar3 = &local_44;
    pLVar4 = local_34;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pLVar4 = ptVar3->left;
      ptVar3 = (tagRECT *)&ptVar3->top;
      pLVar4 = pLVar4 + 1;
    }
    iVar2 = FUN_0042ba08((int)param_1);
    if (iVar2 * param_1[0x40] - (local_34[3] - local_34[1]) != 0 &&
        local_34[3] - local_34[1] <= iVar2 * param_1[0x40]) {
      (**(code **)(**(int **)(*param_1 + 0x44) + 0x14))();
      local_c.x = local_34[2] - local_34[0];
      local_c.y = 0;
      MapWindowPoints(*(HWND *)(*param_1 + 0xc),*(HWND *)(*(int *)param_1[0x38] + 0xc),&local_c,1);
      local_14 = GetSystemMetrics(2);
      local_18 = local_c.y + (local_34[3] - local_34[1]);
      local_1c = local_c.x + local_14;
      local_20 = local_c.y;
      local_24 = local_c.x;
      local_10 = local_34[3] - local_34[1];
      (**(code **)(*(int *)(*(int *)param_1[0x38] + 8) + 0x6c))();
    }
    if ((param_1[0x45] < param_1[0x47]) && (param_1[0x46] < param_1[0x48])) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
      param_1[0x45] = 0;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[0x48] = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bf44  MatchListWindows::vf11   (10 bytes)   [rtti:vtable virtual slot 11]
char * __stdcall MatchListWindows::vf11(void)

{
  return "MATCHLIST";
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bf50  MatchListWindows::vf12   (3183 bytes)   [rtti:vtable virtual slot 12]
void __cdecl MatchListWindows::vf12(int *param_1,int *param_2)

{
  undefined1 uVar1;
  HWND pHVar2;
  HDC pHVar3;
  UINT UVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  BOOL BVar6;
  uint *puVar7;
  int iVar8;
  tagRECT *ptVar9;
  LONG *pLVar10;
  LONG *pLVar11;
  undefined4 *in_FS_OFFSET;
  byte bVar12;
  LPCSTR pCVar13;
  tagSIZE *ptVar14;
  RECT local_27c;
  POINT local_26c;
  int local_264;
  LONG local_260;
  int local_25c;
  int local_258;
  LONG local_254;
  int local_250;
  LONG local_24c;
  LONG local_248;
  RECT local_244;
  POINT local_234;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  LONG local_1fc [4];
  tagRECT local_1ec;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  uint *local_1c0;
  uint *local_1bc;
  uint local_1b8;
  LONG local_1b4;
  int local_1b0;
  LONG local_1ac;
  int local_1a8;
  LONG local_1a4;
  int local_1a0;
  LONG local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  LONG local_180;
  int local_17c;
  LONG local_178;
  int local_174;
  LONG local_170;
  int local_16c;
  LONG local_168;
  int local_164;
  int local_160;
  int *local_15c;
  int *local_158;
  char local_152;
  undefined1 local_151;
  tagPOINT local_150;
  int local_148;
  tagSIZE local_140;
  LPCSTR local_138;
  int local_134;
  int local_130;
  LONG local_12c;
  undefined2 local_126;
  int local_124;
  int local_114;
  uint local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  LONG local_8c;
  int local_88;
  tagSIZE local_84;
  tagSIZE local_7c;
  LONG local_74;
  int local_70;
  UINT local_6c;
  uint local_68;
  DWORD local_64;
  DWORD local_60;
  DWORD local_5c;
  DWORD local_58;
  DWORD local_54;
  DWORD local_50;
  char local_49;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  uint local_24 [2];
  uint local_1c [2];
  uint local_14 [2];
  uint local_c [2];
  
  bVar12 = 0;
  __InitExceptBlockLDTC(0x4f27f8);
  local_1ec.left = 0;
  local_1ec.top = 0;
  local_1ec.right = 0;
  local_1ec.bottom = 0;
  FUN_004a7a6c(*param_1,&local_1ec);
  ptVar9 = &local_1ec;
  pLVar10 = local_1fc;
  for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pLVar10 = ptVar9->left;
    ptVar9 = (tagRECT *)((int)ptVar9 + ((uint)bVar12 * -2 + 1) * 4);
    pLVar10 = pLVar10 + (uint)bVar12 * -2 + 1;
  }
  pLVar10 = local_1fc;
  pLVar11 = &local_1dc;
  for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pLVar11 = *pLVar10;
    pLVar10 = pLVar10 + (uint)bVar12 * -2 + 1;
    pLVar11 = pLVar11 + (uint)bVar12 * -2 + 1;
  }
  pHVar2 = GetFocus();
  local_49 = pHVar2 == *(HWND *)(*param_1 + 0xc);
  local_54 = GetSysColor(5);
  if (local_49 == '\0') {
    iVar8 = 0xf;
  }
  else {
    iVar8 = 0xd;
  }
  local_50 = local_54;
  local_5c = GetSysColor(iVar8);
  local_58 = local_5c;
  if (local_49 == '\0') {
    local_64 = param_1[0x3c];
  }
  else {
    local_64 = GetSysColor(0xe);
  }
  local_60 = local_64;
  pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  UVar4 = GetTextAlign(pHVar3);
  local_6c = UVar4 & 0xffffffe7 | 1;
  local_68 = local_6c;
  iVar8 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar8 != *param_2) {
    SetTextAlign((HDC)*param_2,local_6c);
  }
  UVar4 = local_6c;
  pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  SetTextAlign(pHVar3,UVar4);
  iVar8 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar8 != *param_2) {
    SetBkMode((HDC)*param_2,2);
  }
  iVar8 = 2;
  pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  SetBkMode(pHVar3,iVar8);
  if (param_1[0x3f] != 0) {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
  }
  local_7c.cx = 0;
  local_7c.cy = 0;
  ptVar14 = &local_7c;
  iVar8 = 1;
  pCVar13 = &DAT_004f223c;
  pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  GetTextExtentPoint32A(pHVar3,pCVar13,iVar8,ptVar14);
  local_74 = local_7c.cx;
  local_70 = local_7c.cy;
  param_1[0x40] = local_7c.cy;
  if (param_1[0x3e] != 0) {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
  }
  local_84.cx = 0;
  local_84.cy = 0;
  ptVar14 = &local_84;
  iVar8 = 1;
  pCVar13 = &DAT_004f223c;
  pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  GetTextExtentPoint32A(pHVar3,pCVar13,iVar8,ptVar14);
  local_8c = local_84.cx;
  local_88 = local_84.cy;
  local_74 = local_84.cx;
  local_70 = local_84.cy;
  if (param_1[0x40] < local_84.cy) {
    param_1[0x40] = local_84.cy;
    *(LONG *)(*(int *)(*param_1 + 0x44) + 0x2c) = local_84.cy;
  }
  *(int *)(*(int *)(*param_1 + 0x44) + 0x2c) = param_1[0x40];
  local_90 = (undefined4 *)param_1[0x32];
  local_94 = (undefined4 *)param_1[0x31];
  local_98 = FUN_0042cbf0(local_90,(undefined4 *)param_1[0x32],local_94);
  local_9c = param_1[0x32];
  iVar8 = (int)local_90 - (int)local_94;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 3;
  }
  param_1[0x32] = param_1[0x32] + (iVar8 >> 2) * -4;
  FUN_0042a45c(param_1 + 0x30,(int)local_98,local_9c);
  local_a0 = 0;
  local_a4 = 0;
  if (0 < param_1[0x40]) {
    local_a0 = *(int *)(*(int *)(*param_1 + 0x44) + 0xc) / param_1[0x40];
    local_a4 = -(*(int *)(*(int *)(*param_1 + 0x44) + 0xc) % param_1[0x40]);
  }
  local_a8 = FUN_0042ba08((int)param_1);
  local_ac = local_a0;
  do {
    if ((local_a8 <= local_ac) || (local_1d0 - local_1d8 <= local_a4)) {
      iVar8 = FUN_0042ba08((int)param_1);
      if (iVar8 == 0) {
        pHVar2 = GetFocus();
        if (pHVar2 == *(HWND *)(*param_1 + 0xc)) {
          local_244.bottom = param_1[0x40];
          local_244.right = local_1d4 - local_1dc;
          local_244.left = 0;
          local_244.top = 0;
          local_164 = local_244.right;
          local_160 = local_244.bottom;
          _vector_new_ldtc_(&local_26c.x,8,5,1,(undefined*)FUN_0042cbc0);
          local_26c.x = local_244.left;
          local_26c.y = local_244.top;
          local_168 = local_244.top;
          local_16c = local_244.right;
          local_174 = local_244.right;
          local_170 = local_244.top;
          local_178 = local_244.top;
          local_264 = local_244.right + -1;
          local_180 = local_244.top;
          local_260 = local_244.top;
          local_258 = local_244.bottom + -1;
          local_25c = local_244.right + -1;
          local_198 = local_244.bottom;
          local_19c = local_244.left;
          local_1a4 = local_244.left;
          local_1a0 = local_244.bottom;
          local_250 = local_244.bottom + -1;
          local_1ac = local_244.left;
          local_1b4 = local_244.left;
          local_254 = local_244.left;
          local_24c = local_244.left;
          local_248 = local_244.top;
          local_38 = 0x14;
          local_1b8 = 0x1000002;
          local_1b0 = local_250;
          local_1a8 = local_250;
          local_194 = local_25c;
          local_190 = local_258;
          local_18c = local_25c;
          local_188 = local_258;
          local_184 = local_264;
          local_17c = local_264;
          puVar7 = FUN_0049b6a8(local_14,&local_1b8,1,0);
          local_2c = local_2c + 2;
          FUN_0048d8f4(param_2,puVar7);
          local_2c = local_2c + -2;
          OWL::TGdiObject::_dtor(local_14,0);
          Polyline((HDC)*param_2,&local_26c,5);
          FUN_00494470(&local_244.left,-1,-1);
          local_38 = 0x20;
          local_1bc = FUN_004ab84c(local_1c,&local_50,'\x01');
          local_2c = local_2c + 2;
          FillRect((HDC)*param_2,&local_244,(HBRUSH)*local_1bc);
          local_2c = local_2c + -2;
          OWL::TBrush::_dtor(local_1c,2);
          local_a4 = local_a4 + param_1[0x40];
        }
      }
      if (local_a4 < local_1d0 - local_1d8) {
        local_38 = 0x2c;
        local_1c0 = FUN_004ab84c(local_24,&local_50,'\x01');
        local_2c = local_2c + 2;
        local_27c.bottom = local_1d0 - local_1d8;
        local_27c.right = local_1d4 - local_1dc;
        local_1cc = local_a4;
        local_27c.left = 0;
        local_27c.top = local_a4;
        local_1c8 = local_27c.right;
        local_1c4 = local_27c.bottom;
        FillRect((HDC)*param_2,&local_27c,(HBRUSH)*local_1c0);
        local_2c = local_2c + -2;
        OWL::TBrush::_dtor(local_24,2);
      }
      *in_FS_OFFSET = local_48;
      return;
    }
    puVar5 = FUN_004308e4((int)param_1,local_ac);
    pCVar13 = (LPCSTR)((int)puVar5 + 9);
    uVar1 = FUN_0042ed6c((int)param_1,local_ac);
    local_b0 = CONCAT31(extraout_var,uVar1);
    local_b4 = FUN_004307e4((int)param_1,local_ac);
    local_200 = local_a4 + param_1[0x40];
    local_204 = (local_1d4 - local_1dc) + -2;
    local_b8 = local_a4;
    local_20c = 1;
    local_208 = local_a4;
    if (local_ac == param_1[0x44]) {
      pHVar2 = GetFocus();
      if (pHVar2 == *(HWND *)(*param_1 + 0xc)) {
        _vector_new_ldtc_(&local_234.x,8,5,1,(undefined*)FUN_0042cbc0);
        local_234.x = local_20c;
        local_234.y = local_208;
        local_bc = local_208;
        local_c0 = local_204;
        local_c8 = local_204;
        local_c4 = local_208;
        local_cc = local_208;
        local_22c = local_204 + -1;
        local_d4 = local_208;
        local_228 = local_208;
        local_220 = local_200 + -1;
        local_224 = local_204 + -1;
        local_ec = local_200;
        local_f0 = local_20c;
        local_f8 = local_20c;
        local_f4 = local_200;
        local_218 = local_200 + -1;
        local_100 = local_20c;
        local_108 = local_20c;
        local_21c = local_20c;
        local_214 = local_20c;
        local_210 = local_208;
        local_38 = 8;
        local_10c = 0x1000002;
        local_104 = local_218;
        local_fc = local_218;
        local_e8 = local_224;
        local_e4 = local_220;
        local_e0 = local_224;
        local_dc = local_220;
        local_d8 = local_22c;
        local_d0 = local_22c;
        puVar7 = FUN_0049b6a8(local_c,&local_10c,1,0);
        local_2c = local_2c + 2;
        FUN_0048d8f4(param_2,puVar7);
        local_2c = local_2c + -2;
        OWL::TGdiObject::_dtor(local_c,0);
        Polyline((HDC)*param_2,&local_234,5);
        FUN_00494470(&local_20c,-1,-1);
      }
    }
    if (local_b4 == 0) {
      local_114 = param_1[0x3c];
      (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    else {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    local_124 = local_a4;
    MoveToEx((HDC)*param_2,2,local_a4,(LPPOINT)0x0);
    local_126 = 6;
    if (pCVar13[local_b0] != '\0') {
      local_134 = local_b0;
      local_140.cx = 0;
      local_140.cy = 0;
      ptVar14 = &local_140;
      iVar8 = local_b0;
      local_138 = pCVar13;
      pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
      GetTextExtentPoint32A(pHVar3,pCVar13,iVar8,ptVar14);
      local_130 = local_140.cx;
      local_12c = local_140.cy;
      if (local_140.cx < local_204 - local_20c) {
        (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
        if (local_b4 == 0) {
          local_148 = param_1[0x3d];
          (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
        }
        local_20c = local_20c + local_130;
        local_126 = 4;
        if (param_1[0x3f] != 0) {
          (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
        }
      }
    }
    (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    if ((local_20c != 1) && (param_1[0x3e] != 0)) {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
    }
    local_150.x = 0;
    local_150.y = 0;
    BVar6 = GetCurrentPositionEx((HDC)*param_2,&local_150);
    local_151 = BVar6 != 0;
    if (local_204 < local_150.x) {
LAB_0042c793:
      if (param_1[0x32] == param_1[0x36]) {
        FUN_0042cc14((int)(param_1 + 0x30),(undefined4 *)param_1[0x32],&local_ac);
      }
      else {
        local_15c = (int *)param_1[0x32];
        *local_15c = local_ac;
        param_1[0x32] = param_1[0x32] + 4;
        local_158 = local_15c;
      }
    }
    else {
      if ((((local_20c < local_1dc) || (local_1d4 < local_204)) || (local_208 < local_1d8)) ||
         (local_1d0 < local_200)) {
        local_152 = '\0';
      }
      else {
        local_152 = '\x01';
      }
      if (local_152 == '\0') goto LAB_0042c793;
    }
    local_a4 = local_a4 + param_1[0x40];
    local_ac = local_ac + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cbc0  FUN_0042cbc0   (45 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042cbc0(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2c00);
  *param_1 = 0;
  param_1[1] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cbf0  FUN_0042cbf0   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042cbf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cc14  FUN_0042cc14   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042cc14(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4f2860);
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
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0042ce10(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_0042ce10(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_0042a45c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_0042cdec(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cdec  FUN_0042cdec   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042cdec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ce10  FUN_0042ce10   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042ce10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f28a0);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ce90  FUN_0042ce90   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042ce90(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cea8  MatchListWindows::vf13   (17 bytes)   [rtti:vtable virtual slot 13]
void __cdecl MatchListWindows::vf13(int *param_1)

{
  OWL::TWindow::vf30(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cebc  MatchListWindows::EvGetDlgCode   (24 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
uint __cdecl MatchListWindows::EvGetDlgCode(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004a5774(*param_1);
  return uVar1 | 0x81;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ced4  MatchListWindows::EvKeyDown   (1024 bytes)   [owl:response-table message-handler]
//   WM_KEYDOWN
void __cdecl MatchListWindows::EvKeyDown(int *param_1,int param_2)

{
  SHORT SVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  tagRECT *ptVar5;
  int *piVar6;
  LONG *pLVar7;
  int *piVar8;
  bool bVar9;
  int local_88 [8];
  int local_68 [4];
  int local_58 [4];
  int local_48 [4];
  LONG local_38 [4];
  tagRECT local_28;
  int local_18 [4];
  int local_8;
  
  SVar1 = GetKeyState(1);
  if (-1 < SVar1) {
    if (param_1[0x44] == -1) {
      param_1[0x44] = 0;
    }
    SVar1 = GetKeyState(0x10);
    if ((-1 < SVar1) || (param_1[0x43] != -1)) {
      if ((-1 < SVar1) && (param_1[0x43] != -1)) {
        param_1[0x43] = -1;
      }
    }
    else {
      param_1[0x43] = param_1[0x44];
    }
    bVar9 = false;
    local_8 = param_1[0x44];
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    FUN_004a7a6c(*param_1,&local_28);
    ptVar5 = &local_28;
    pLVar7 = local_48 + 4;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar7 = ptVar5->left;
      ptVar5 = (tagRECT *)&ptVar5->top;
      pLVar7 = pLVar7 + 1;
    }
    piVar6 = local_48 + 4;
    piVar8 = local_18;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    if (param_2 == 0x20) {
      bVar9 = true;
    }
    else if ((param_2 == 0x26) || (param_2 == 0x25)) {
      if ((param_1[0x44] != -1) && (0 < param_1[0x44])) {
        param_1[0x44] = param_1[0x44] + -1;
      }
      bVar9 = true;
    }
    else if ((param_2 == 0x28) || (param_2 == 0x27)) {
      iVar4 = param_1[0x44];
      if ((iVar4 != -1) && (iVar2 = FUN_0042ba08((int)param_1), iVar4 < iVar2 + -1)) {
        param_1[0x44] = param_1[0x44] + 1;
      }
      bVar9 = true;
    }
    else if ((param_2 == 0x24) || (param_2 == 0x23)) {
      iVar4 = FUN_0042ba08((int)param_1);
      if (0 < iVar4) {
        if (param_2 == 0x24) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_0042ba08((int)param_1);
          iVar4 = iVar4 + -1;
        }
        param_1[0x44] = iVar4;
      }
      bVar9 = true;
    }
    else if ((param_2 == 0x21) || (param_2 == 0x22)) {
      if ((0 < param_1[0x40]) && (iVar4 = FUN_0042ba08((int)param_1), iVar4 != 0)) {
        iVar4 = (local_18[3] - local_18[1]) / param_1[0x40];
        if (param_2 == 0x21) {
          param_1[0x44] = param_1[0x44] - (iVar4 + -1);
        }
        else {
          param_1[0x44] = param_1[0x44] + iVar4 + -1;
        }
        if (param_1[0x44] < 0) {
          param_1[0x44] = 0;
        }
        else {
          iVar4 = FUN_0042ba08((int)param_1);
          if (iVar4 <= param_1[0x44]) {
            iVar4 = FUN_0042ba08((int)param_1);
            param_1[0x44] = iVar4 + -1;
          }
        }
      }
      bVar9 = true;
    }
    else if (param_2 == 0x5d) {
      FUN_00430aec(param_1,(int *)0x0);
    }
    if (((bVar9) && (iVar4 = FUN_0042ba08((int)param_1), 0 < iVar4)) && (0 < param_1[0x40])) {
      local_48[0] = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      if (param_1[0x43] == -1) {
        SVar1 = GetKeyState(0x11);
        bVar9 = SVar1 < 0;
        if ((!bVar9) || (param_2 == 0x20)) {
          iVar4 = 1;
          if ((bVar9) && (iVar2 = FUN_004307e4((int)param_1,param_1[0x44]), iVar2 == 1)) {
            iVar4 = 0;
          }
          FUN_0042ed8c(local_58,param_1,param_1[0x44],1,iVar4,bVar9);
          piVar6 = local_58;
          piVar8 = local_48;
          for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar8 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar8 = piVar8 + 1;
          }
        }
      }
      else {
        iVar4 = param_1[0x44];
        if (iVar4 != local_8) {
          iVar2 = param_1[0x43];
          if (iVar4 < iVar2) {
            FUN_0042ed8c(local_88 + 4,param_1,param_1[0x44],(param_1[0x43] - param_1[0x44]) + 1,1,
                         '\0');
            piVar6 = local_88 + 4;
            piVar8 = local_48;
            for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar8 = piVar8 + 1;
            }
          }
          else {
            FUN_0042ed8c(local_68,param_1,iVar2,(iVar4 - iVar2) + 1,1,'\0');
            piVar6 = local_68;
            piVar8 = local_48;
            for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar8 = piVar8 + 1;
            }
          }
        }
      }
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      uVar3 = FUN_00430290(param_1,local_8,1,local_88);
      if ((char)uVar3 != '\0') {
        FUN_00494540(local_48,local_88);
      }
      uVar3 = FUN_00430290(param_1,param_1[0x44],1,local_88);
      if ((char)uVar3 != '\0') {
        FUN_00494540(local_48,local_88);
      }
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
      iVar4 = param_1[0x40];
      iVar2 = *(int *)(*(int *)(*param_1 + 0x44) + 0xc);
      if (param_1[0x44] < (iVar2 + iVar4 + -1) / iVar4) {
        (**(code **)(**(int **)(*param_1 + 0x44) + 0x2c))();
      }
      else if ((((iVar2 + (local_18[3] - local_18[1])) - iVar4) + 1) / iVar4 < param_1[0x44]) {
        (**(code **)(**(int **)(*param_1 + 0x44) + 0x2c))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d2d4  MatchListWindows::EvSysKeyDown   (51 bytes)   [owl:response-table message-handler]
//   WM_SYSKEYDOWN
void __cdecl MatchListWindows::EvSysKeyDown(int *param_1,int param_2)

{
  SHORT SVar1;
  
  if (param_2 == 0x79) {
    SVar1 = GetKeyState(0x10);
    if (SVar1 < 0) {
      FUN_00430aec(param_1,(int *)0x0);
      return;
    }
  }
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d308  MatchListWindows::EvLButtonDown   (566 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDOWN
void __cdecl MatchListWindows::EvLButtonDown(int *param_1,byte param_2,int param_3)

{
  HWND pHVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  tagRECT *ptVar6;
  LONG *pLVar7;
  bool bVar8;
  int local_78 [8];
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  int local_18 [4];
  int local_8;
  
  SetCapture(*(HWND *)(*param_1 + 0xc));
  SetTimer(*(HWND *)(*param_1 + 0xc),1,0x32,(TIMERPROC)0x0);
  pHVar2 = GetFocus();
  pHVar1 = *(HWND *)(*param_1 + 0xc);
  SetFocus(*(HWND *)(*param_1 + 0xc));
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  FUN_004a7a6c(*param_1,&local_28);
  ptVar6 = &local_28;
  pLVar7 = local_18;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pLVar7 = ptVar6->left;
    ptVar6 = (tagRECT *)&ptVar6->top;
    pLVar7 = pLVar7 + 1;
  }
  if (pHVar2 != pHVar1) {
    local_2c = param_1[0x40];
    local_30 = local_18[2] - local_18[0];
    local_38 = 0;
    local_34 = 0;
    (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
  }
  if (param_1[0x44] == -1) {
    param_1[0x44] = 0;
  }
  bVar8 = (param_2 & 4) != 0;
  if ((bVar8) && (param_1[0x43] == -1)) {
    param_1[0x43] = param_1[0x44];
  }
  else if ((!bVar8) && (param_1[0x43] != -1)) {
    param_1[0x43] = -1;
  }
  local_8 = param_1[0x44];
  iVar5 = 0;
  if (0 < param_1[0x40]) {
    iVar5 = (*(int *)(*(int *)(*param_1 + 0x44) + 0xc) + *(int *)(param_3 + 4)) / param_1[0x40];
  }
  iVar3 = FUN_0042ba08((int)param_1);
  if (iVar5 < iVar3) {
    if (((param_2 & 8) == 0) || (bVar8)) {
      if (bVar8) {
        iVar3 = 1;
      }
      else {
        iVar3 = 2;
      }
      param_1[0x42] = iVar3;
      iVar3 = iVar5;
      if (bVar8) {
        iVar3 = param_1[0x43];
      }
      param_1[0x41] = iVar3;
      FUN_00430438(param_1);
      local_40 = param_1[0x27];
      local_50 = *(int *)(local_40 + 8);
      FUN_0042a474(local_78 + 4,(int)(param_1 + 0x1e),local_58,local_54,local_50);
    }
    else {
      iVar3 = FUN_004307e4((int)param_1,iVar5);
      param_1[0x42] = (uint)(iVar3 != 1);
      param_1[0x41] = iVar5;
    }
    param_1[0x44] = iVar5;
    if (local_8 < iVar5) {
      iVar3 = iVar5 - local_8;
      iVar5 = local_8;
    }
    else {
      iVar3 = local_8 - iVar5;
    }
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    uVar4 = FUN_00430290(param_1,iVar5,iVar3 + 1,local_78);
    if ((char)uVar4 != '\0') {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d540  MatchListWindows::EvLButtonDblClk   (24 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDBLCLK
void __cdecl MatchListWindows::EvLButtonDblClk(int param_1)

{
  FUN_0045c520(*(int **)(param_1 + 0xe0));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d558  MatchListWindows::EvLButtonUp   (158 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONUP
void __cdecl MatchListWindows::EvLButtonUp(int *param_1)

{
  int iVar1;
  int local_24 [4];
  int local_14 [4];
  
  KillTimer(*(HWND *)(*param_1 + 0xc),1);
  ReleaseCapture();
  iVar1 = param_1[0x41];
  if (iVar1 != -1) {
    if (param_1[0x44] < iVar1) {
      FUN_0042ed8c(local_24,param_1,param_1[0x44],(param_1[0x41] - param_1[0x44]) + 1,param_1[0x42],
                   param_1[0x42] != 2);
    }
    else {
      FUN_0042ed8c(local_14,param_1,iVar1,(param_1[0x44] - iVar1) + 1,param_1[0x42],
                   param_1[0x42] != 2);
    }
    param_1[0x41] = -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d5f8  MatchListWindows::EvRButtonDown   (6 bytes)   [owl:response-table message-handler]
//   WM_RBUTTONDOWN
void __stdcall MatchListWindows::EvRButtonDown(int *param_1,byte param_2,int param_3)

{
  HWND pHVar1;
  SHORT SVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  tagRECT *ptVar6;
  LONG *pLVar7;
  int aiStack_74 [4];
  undefined4 auStack_64 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  tagRECT tStack_24;
  int aiStack_14 [4];
  
  SVar2 = GetKeyState(1);
  if (-1 < SVar2) {
    pHVar3 = GetFocus();
    pHVar1 = *(HWND *)(*param_1 + 0xc);
    SetFocus(*(HWND *)(*param_1 + 0xc));
    tStack_24.left = 0;
    tStack_24.top = 0;
    tStack_24.right = 0;
    tStack_24.bottom = 0;
    FUN_004a7a6c(*param_1,&tStack_24);
    ptVar6 = &tStack_24;
    pLVar7 = aiStack_14;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar7 = ptVar6->left;
      ptVar6 = (tagRECT *)&ptVar6->top;
      pLVar7 = pLVar7 + 1;
    }
    if (pHVar3 != pHVar1) {
      iStack_28 = param_1[0x40];
      iStack_2c = aiStack_14[2] - aiStack_14[0];
      uStack_34 = 0;
      uStack_30 = 0;
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
    if ((param_2 & 0xc) == 0) {
      iVar5 = 0;
      if (0 < param_1[0x40]) {
        iVar5 = (*(int *)(*(int *)(*param_1 + 0x44) + 0xc) + *(int *)(param_3 + 4)) / param_1[0x40];
      }
      iVar4 = FUN_0042ba08((int)param_1);
      if (iVar5 < iVar4) {
        iVar4 = FUN_004307e4((int)param_1,iVar5);
        if (iVar4 == 0) {
          FUN_00430438(param_1);
          iStack_3c = param_1[0x27];
          iStack_4c = *(int *)(iStack_3c + 8);
          FUN_0042a474(auStack_64,(int)(param_1 + 0x1e),uStack_54,uStack_50,iStack_4c);
          param_1[0x44] = iVar5;
          FUN_0042ed8c(aiStack_74,param_1,iVar5,1,1,'\0');
          (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d5fe  FUN_0042d5fe   (359 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_0042d5fe(void)

{
  HWND pHVar1;
  int *piVar2;
  SHORT SVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  piVar2 = *(int **)(unaff_EBP + 8);
  SVar3 = GetKeyState(1);
  if (-1 < SVar3) {
    pHVar4 = GetFocus();
    pHVar1 = *(HWND *)(*piVar2 + 0xc);
    SetFocus(*(HWND *)(*piVar2 + 0xc));
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_004a7a6c(*piVar2,(LPRECT)(unaff_EBP + -0x20));
    puVar7 = (undefined4 *)(unaff_EBP + -0x20);
    puVar8 = (undefined4 *)(unaff_EBP + -0x10);
    for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    if (pHVar4 != pHVar1) {
      iVar6 = piVar2[0x40];
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -8) - *(int *)(unaff_EBP + -0x10);
      *(int *)(unaff_EBP + -0x24) = iVar6;
      (**(code **)(*(int *)(*piVar2 + 8) + 0x6c))();
    }
    if ((*(byte *)(unaff_EBP + 0xc) & 0xc) == 0) {
      iVar6 = 0;
      if (0 < piVar2[0x40]) {
        iVar6 = (*(int *)(*(int *)(*piVar2 + 0x44) + 0xc) + *(int *)(*(int *)(unaff_EBP + 0x10) + 4)
                ) / piVar2[0x40];
      }
      iVar5 = FUN_0042ba08((int)piVar2);
      if (iVar6 < iVar5) {
        iVar5 = FUN_004307e4((int)piVar2,iVar6);
        if (iVar5 == 0) {
          FUN_00430438(piVar2);
          iVar5 = piVar2[0x27];
          *(int *)(unaff_EBP + -0x38) = iVar5;
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(iVar5 + 8);
          FUN_0042a474((undefined4 *)(unaff_EBP + -0x60),(int)(piVar2 + 0x1e),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(int *)(unaff_EBP + -0x48));
          piVar2[0x44] = iVar6;
          FUN_0042ed8c((int *)(unaff_EBP + -0x70),piVar2,iVar6,1,1,'\0');
          (**(code **)(*(int *)(*piVar2 + 8) + 0x6c))();
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d768  MatchListWindows::EvRButtonUp   (35 bytes)   [owl:response-table message-handler]
//   WM_RBUTTONUP
void __cdecl MatchListWindows::EvRButtonUp(int *param_1,undefined4 param_2,int *param_3)

{
  SHORT SVar1;
  
  SVar1 = GetKeyState(1);
  if (-1 < SVar1) {
    FUN_00430aec(param_1,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d78c  MatchListWindows::EvMouseMove   (6 bytes)   [owl:response-table message-handler]
//   WM_MOUSEMOVE
/* WARNING: Removing unreachable block (ram,0x0042d891) */
void __stdcall MatchListWindows::EvMouseMove(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  int aiStack_54 [5];
  undefined *puStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_28;
  int iStack_1c;
  undefined1 auStack_14 [8];
  undefined *puStack_c;
  
  __InitExceptBlockLDTC(0x4f28d4);
  if (param_1[0x41] != -1) {
    if ((param_2 & 1) == 0) {
      param_1[0x41] = -1;
    }
    else {
      iVar4 = 0;
      if (0 < param_1[0x40]) {
        iVar4 = (*(int *)(*(int *)(*param_1 + 0x44) + 0xc) + *(int *)(param_3 + 4)) / param_1[0x40];
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else {
        iVar1 = FUN_0042ba08((int)param_1);
        if (iVar1 <= iVar4) {
          iVar4 = FUN_0042ba08((int)param_1);
          iVar4 = iVar4 + -1;
        }
      }
      iVar1 = param_1[0x44];
      if (iVar4 != iVar1) {
        if (iVar4 < iVar1) {
          iVar2 = iVar1 - iVar4;
          iVar1 = iVar4;
        }
        else {
          iVar2 = iVar4 - iVar1;
        }
        aiStack_54[0] = 0;
        aiStack_54[1] = 0;
        aiStack_54[2] = 0;
        aiStack_54[3] = 0;
        uVar3 = FUN_00430290(param_1,iVar1,iVar2 + 1,aiStack_54);
        if ((char)uVar3 != '\0') {
          (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
        }
        param_1[0x44] = iVar4;
      }
      (**(code **)(**(int **)(*param_1 + 0x44) + 0x3c))();
    }
  }
  puStack_c = &DAT_00513d64;
  iStack_1c = iStack_1c + 1;
  uStack_28 = 0x20;
  iStack_3c = 0;
  if (0 < param_1[0x40]) {
    iStack_3c = (*(int *)(*(int *)(*param_1 + 0x44) + 0xc) + *(int *)(param_3 + 4)) / param_1[0x40];
  }
  iVar4 = FUN_0042d9a0((int *)param_1[0x31],(int *)param_1[0x32],&iStack_3c);
  if (iVar4 != param_1[0x32]) {
    puVar5 = FUN_004308e4((int)param_1,iStack_3c);
    FUN_004cf41c((int)auStack_14,(uint *)((int)puVar5 + 9));
  }
  FUN_0045e060(param_1[0x38],(int)auStack_14,*(undefined4 *)(*param_1 + 0xc),param_2,
               (undefined2 *)param_3,0);
  iStack_1c = iStack_1c + -1;
  if (puStack_c != (undefined *)0x0) {
    if (*(int *)(puStack_c + -0xc) != -1) {
      piVar6 = (int *)(puStack_c + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0042d98e;
    }
    puStack_40 = puStack_c + -0xc;
    operator_delete();
  }
LAB_0042d98e:
  *in_FS_OFFSET = uStack_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d792  FUN_0042d792   (525 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0042d891) */
void __stdcall FUN_0042d792(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  puVar1 = *(undefined2 **)(unaff_EBP + 0x10);
  piVar7 = *(int **)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x4f28d4);
  if (piVar7[0x41] != -1) {
    if ((*(byte *)(unaff_EBP + 0xc) & 1) == 0) {
      piVar7[0x41] = -1;
    }
    else {
      iVar5 = 0;
      if (0 < piVar7[0x40]) {
        iVar5 = (*(int *)(*(int *)(*piVar7 + 0x44) + 0xc) + *(int *)(puVar1 + 2)) / piVar7[0x40];
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else {
        iVar2 = FUN_0042ba08((int)piVar7);
        if (iVar2 <= iVar5) {
          iVar5 = FUN_0042ba08((int)piVar7);
          iVar5 = iVar5 + -1;
        }
      }
      iVar2 = piVar7[0x44];
      if (iVar5 != iVar2) {
        if (iVar5 < iVar2) {
          iVar3 = iVar2 - iVar5;
          iVar2 = iVar5;
        }
        else {
          iVar3 = iVar5 - iVar2;
        }
        *(undefined4 *)(unaff_EBP + -0x50) = 0;
        *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        *(undefined4 *)(unaff_EBP + -0x48) = 0;
        *(undefined4 *)(unaff_EBP + -0x44) = 0;
        uVar4 = FUN_00430290(piVar7,iVar2,iVar3 + 1,(int *)(unaff_EBP + -0x50));
        if ((char)uVar4 != '\0') {
          (**(code **)(*(int *)(*piVar7 + 8) + 0x6c))();
        }
        piVar7[0x44] = iVar5;
      }
      (**(code **)(**(int **)(*piVar7 + 0x44) + 0x3c))();
    }
  }
  *(undefined2 *)(unaff_EBP + -0x24) = 8;
  *(undefined4 *)(unaff_EBP + -8) = 0;
  *(undefined **)(unaff_EBP + -8) = &DAT_00513d64;
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -8);
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  *(undefined2 *)(unaff_EBP + -0x24) = 0x20;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (0 < piVar7[0x40]) {
    *(int *)(unaff_EBP + -0x38) =
         (*(int *)(*(int *)(*piVar7 + 0x44) + 0xc) + *(int *)(puVar1 + 2)) / piVar7[0x40];
  }
  iVar5 = FUN_0042d9a0((int *)piVar7[0x31],(int *)piVar7[0x32],(int *)(unaff_EBP + -0x38));
  if (iVar5 != piVar7[0x32]) {
    puVar6 = FUN_004308e4((int)piVar7,*(int *)(unaff_EBP + -0x38));
    FUN_004cf41c(unaff_EBP + -0x10,(uint *)((int)puVar6 + 9));
  }
  FUN_0045e060(piVar7[0x38],unaff_EBP + -0x10,*(undefined4 *)(*piVar7 + 0xc),
               *(undefined4 *)(unaff_EBP + 0xc),puVar1,0);
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
  if (*(int *)(unaff_EBP + -8) != 0) {
    if (*(int *)(*(int *)(unaff_EBP + -8) + -0xc) != -1) {
      piVar7 = (int *)(*(int *)(unaff_EBP + -8) + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar5 = *piVar7 + 1;
      }
      if (iVar5 != 0) goto LAB_0042d98e;
    }
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -8) + -0xc;
    operator_delete();
    *(undefined4 *)(unaff_EBP + -8) = 0;
    *(int *)(unaff_EBP + -0x40) = unaff_EBP + -0x10;
    *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 8);
  }
LAB_0042d98e:
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x34);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d9a0  FUN_0042d9a0   (31 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0042d9a0(int *param_1,int *param_2,int *param_3)

{
  for (; (param_2 != param_1 && (*param_3 != *param_1)); param_1 = param_1 + 1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d9c0  MatchListWindows::EvSetFocus   (150 bytes)   [owl:response-table message-handler]
//   WM_SETFOCUS
void __cdecl MatchListWindows::EvSetFocus(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_14 [4];
  
  FUN_004a5774(*param_1);
  FUN_0045c448(param_1[0x38],(int)param_1,1);
  if (param_1[0x44] == -1) {
    param_1[0x44] = 0;
    iVar1 = FUN_0042ba08((int)param_1);
    if (0 < iVar1) {
      FUN_0042ecfc(param_1);
    }
  }
  else {
    local_14[0] = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    uVar2 = FUN_00430290(param_1,param_1[0x44],1,local_14);
    if ((char)uVar2 != '\0') {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
  }
  FUN_00430438(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042da58  MatchListWindows::EvKillFocus   (124 bytes)   [owl:response-table message-handler]
//   WM_KILLFOCUS
void __cdecl MatchListWindows::EvKillFocus(int *param_1)

{
  undefined4 uVar1;
  int local_14 [4];
  
  OWL::TWindow::EvKillFocus(*param_1);
  FUN_0045c448(param_1[0x38],(int)param_1,0);
  if (param_1[0x44] != -1) {
    local_14[0] = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    uVar1 = FUN_00430290(param_1,param_1[0x44],1,local_14);
    if ((char)uVar1 != '\0') {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
  }
  FUN_00430438(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dad4  MatchListWindows::EvTimer   (64 bytes)   [owl:response-table message-handler]
//   WM_TIMER
void __cdecl MatchListWindows::EvTimer(int *param_1)

{
  tagPOINT local_c;
  
  local_c.x = 0;
  local_c.y = 0;
  GetCursorPos(&local_c);
  ScreenToClient(*(HWND *)(*param_1 + 0xc),&local_c);
  MatchListWindows::EvMouseMove(param_1,1,(int)&local_c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042db14  MatchListWindows::EvVScroll   (200 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl MatchListWindows::EvVScroll(int *param_1,int param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  LONG *pLVar4;
  LONG local_34 [4];
  tagRECT local_24;
  undefined4 local_14 [4];
  
  if (*(int *)(*param_1 + 0x44) != 0) {
    if ((param_2 == 3) || (param_2 == 2)) {
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      FUN_004a7a6c(*param_1,&local_24);
      ptVar2 = &local_24;
      pLVar3 = local_34;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pLVar3 = ptVar2->left;
        ptVar2 = (tagRECT *)&ptVar2->top;
        pLVar3 = pLVar3 + 1;
      }
      pLVar3 = local_34;
      pLVar4 = local_14;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pLVar4 = *pLVar3;
        pLVar3 = pLVar3 + 1;
        pLVar4 = pLVar4 + 1;
      }
      (**(code **)(**(int **)(*param_1 + 0x44) + 0x2c))();
    }
    else {
      (**(code **)(**(int **)(*param_1 + 0x44) + 0x24))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dbdc  FUN_0042dbdc   (60 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042dbdc(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4, undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041ea74(param_2);
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  uVar1 = FUN_0041ea74(param_3);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = param_4;
  *(undefined4 *)(param_1 + 0xf4) = param_5;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dc18  FUN_0042dc18   (2032 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl FUN_0042dc18(int *param_1,uint *param_2,uint *param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_EDI;
  undefined4 *puVar9;
  undefined4 *in_FS_OFFSET;
  int local_174 [5];
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_13c;
  undefined4 local_134;
  undefined4 local_130;
  int local_12c;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  int local_10c;
  undefined4 local_104;
  undefined4 local_100;
  int local_fc;
  undefined4 local_ec;
  int *local_d4;
  int local_d0;
  undefined4 *local_cc;
  undefined4 *local_c8;
  int *local_c4;
  int local_c0;
  uint local_bc;
  undefined4 *local_b8;
  int local_b4;
  int *local_b0;
  int *local_ac;
  uint local_a8;
  int local_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  uint *local_98;
  uint *local_94;
  uint *local_90;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  int local_78;
  char *local_74;
  uint local_70;
  uint *local_6c;
  int *local_60;
  int local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  undefined4 *local_34;
  int local_30 [3];
  undefined4 *local_24;
  int local_20 [3];
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4f296c);
  local_5c = FUN_0042ba08((int)param_1);
  if (local_5c == 0x7ffffff8) {
    *in_FS_OFFSET = local_58;
    return local_58;
  }
  pcVar2 = strlen(param_2);
  if ((param_3 == (uint *)0x0) && (*(int *)(*(int *)(param_4 + 8) + -4) == 0)) {
    local_60 = (int *)operator_new();
    if (local_60 == (int *)0x0) {
      *in_FS_OFFSET = local_58;
      return 0;
    }
    MatchListWindows::Entry::Entry(local_60,param_2,pcVar2,param_5);
    goto LAB_0042deb5;
  }
  local_48 = 8;
  std::string::string_from_cstr((int)local_14,param_2);
  local_3c = local_3c + 1;
  local_48 = 0x14;
  if (param_3 != (uint *)0x0) {
    local_6c = param_3;
    local_70 = local_c[-1];
    local_74 = strlen(param_3);
    FUN_004cfad4((int)local_14,local_70,0,(uint)local_6c,(uint)local_74,0,(uint)local_74);
  }
  local_78 = param_4;
  std::string::append((int)local_14,param_4);
  local_60 = (int *)operator_new();
  if (local_60 == (int *)0x0) {
    local_3c = local_3c + -1;
    if (local_c != (uint *)0x0) {
      if (local_c[-3] != 0xffffffff) {
        local_7c = local_c + -3;
        if (local_7c == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (local_7c == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *local_7c = *local_7c - 1;
          iVar5 = *local_7c + 1;
        }
        if (iVar5 != 0) goto LAB_0042dda4;
      }
      local_80 = local_c + -3;
      local_84 = local_c + -3;
      operator_delete();
    }
LAB_0042dda4:
    *in_FS_OFFSET = local_58;
    return local_58;
  }
  MatchListWindows::Entry::Entry(local_60,local_c,pcVar2,param_5);
  local_3c = local_3c + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_90 = local_c + -3;
      if (local_90 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (local_90 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *local_90 = *local_90 - 1;
        iVar5 = *local_90 + 1;
      }
      if (iVar5 != 0) goto LAB_0042de76;
    }
    local_94 = local_c + -3;
    local_98 = local_c + -3;
    operator_delete();
    local_9c = 0;
    local_a0 = local_14;
    local_c = (uint *)0x0;
    local_ec = 0;
  }
LAB_0042de76:
  local_48 = 0;
LAB_0042deb5:
  local_a4 = 0;
  if (param_1[0x39] == 0) {
    puVar3 = (undefined4 *)(((param_1[0x16] - param_1[0x15]) / 0xc + -1) * 0xc + param_1[0x15]);
    if (0x1ff < (int)puVar3[2]) {
      local_48 = 0x5c;
      local_30[0] = 0;
      local_30[1] = 0;
      local_30[2] = 0;
      local_c4 = local_30;
      local_3c = local_3c + 1;
      if (param_1[0x16] == param_1[0x1a]) {
        FUN_00429ffc((int)(param_1 + 0x14),(int *)param_1[0x16],local_c4);
      }
      else {
        local_c8 = (undefined4 *)param_1[0x16];
        local_34 = local_c8;
        if (local_c8 != (undefined4 *)0x0) {
          local_48 = 0x68;
          FUN_00430560(local_c8,local_c4);
        }
        local_48 = 0x5c;
        param_1[0x16] = param_1[0x16] + 0xc;
      }
      local_3c = local_3c + -1;
      FUN_004305f4(local_30);
      local_d4 = param_1 + 0x14;
      local_d0 = (param_1[0x16] - param_1[0x15]) / 0xc + -1;
      puVar3 = (undefined4 *)(local_d0 * 0xc + param_1[0x15]);
      local_cc = puVar3;
    }
    if (puVar3[1] == 0) {
      puVar3[1] = local_60;
      *puVar3 = local_60;
    }
    else {
      *(int **)puVar3[1] = local_60;
      puVar3[1] = local_60;
    }
    puVar3[2] = puVar3[2] + 1;
    local_a4 = param_1[0x1c];
    if (param_1[0x3a] != 0) {
      FUN_0042e408(&local_14c,param_1 + 6,(int *)&local_60);
      local_174[4] = local_14c;
      local_160 = local_148;
      local_15c = local_144;
      local_154 = local_13c;
    }
  }
  else {
    if (local_5c != 0) {
      local_a8 = 0;
      while( true ) {
        if ((uint)((param_1[0x16] - param_1[0x15]) / 0xc) <= local_a8) goto LAB_0042dfbb;
        unaff_EDI = (int *)(local_a8 * 0xc + param_1[0x15]);
        bVar1 = MatchListWindows::CompareEntries((int)local_60,unaff_EDI[1],param_1[0x39]);
        if (bVar1) break;
        local_a4 = local_a4 + unaff_EDI[2];
        local_a8 = local_a8 + 1;
      }
      local_ac = (int *)0x0;
      piVar6 = (int *)*unaff_EDI;
      while (piVar8 = piVar6, bVar1 = MatchListWindows::CompareEntries((int)local_60,(int)piVar8,param_1[0x39]), !bVar1)
      {
        local_a4 = local_a4 + 1;
        piVar6 = (int *)*piVar8;
        local_ac = piVar8;
      }
      if (local_ac == (int *)0x0) {
        *local_60 = *unaff_EDI;
        *unaff_EDI = (int)local_60;
      }
      else {
        *local_60 = *local_ac;
        *local_ac = (int)local_60;
      }
      unaff_EDI[2] = unaff_EDI[2] + 1;
LAB_0042dfbb:
      if ((uint)((param_1[0x16] - param_1[0x15]) / 0xc) <= local_a8) {
        local_a8 = local_a8 - 1;
        *(int **)unaff_EDI[1] = local_60;
        unaff_EDI[1] = (int)local_60;
        unaff_EDI[2] = unaff_EDI[2] + 1;
      }
      if (0x1ff < unaff_EDI[2]) {
        local_a8 = local_a8 + 1;
        local_48 = 0x38;
        local_20[0] = 0;
        local_20[1] = 0;
        local_20[2] = 0;
        local_b0 = local_20;
        local_3c = local_3c + 1;
        piVar6 = (int *)(local_a8 * 0xc + param_1[0x15]);
        local_b4 = ((int)piVar6 - param_1[0x15]) / 0xc;
        if ((param_1[0x16] == param_1[0x1a]) || (piVar6 != (int *)param_1[0x16])) {
          FUN_00429ffc((int)(param_1 + 0x14),piVar6,local_b0);
        }
        else {
          local_b8 = (undefined4 *)param_1[0x16];
          local_24 = local_b8;
          if (local_b8 != (undefined4 *)0x0) {
            local_48 = 0x44;
            FUN_00430560(local_b8,local_b0);
          }
          local_48 = 0x38;
          param_1[0x16] = param_1[0x16] + 0xc;
        }
        local_3c = local_3c + -1;
        FUN_004305f4(local_20);
        local_bc = local_a8;
        local_c0 = local_a8 - 1;
        puVar7 = (undefined4 *)(local_a8 * 0xc + param_1[0x15]);
        puVar9 = (undefined4 *)(local_c0 * 0xc + param_1[0x15]);
        puVar3 = (undefined4 *)*puVar9;
        iVar5 = 0;
        do {
          puVar3 = (undefined4 *)*puVar3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0xff);
        *puVar7 = *puVar3;
        puVar7[2] = 0x100;
        puVar7[1] = puVar9[1];
        puVar9[1] = puVar3;
        *puVar3 = 0;
        puVar9[2] = 0x100;
      }
      local_fc = *(int *)(param_1[0x27] + 8);
      while (local_10c = param_1[0x27], local_10c != local_fc) {
        piVar6 = (int *)(local_fc + 0x10);
        if (*piVar6 < local_a4) {
          if ((local_a4 < *piVar6) || (*piVar6 + *(int *)(local_fc + 0x14) <= local_a4)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            *(int *)(local_fc + 0x14) = *(int *)(local_fc + 0x14) + 1;
          }
        }
        else {
          *piVar6 = *piVar6 + 1;
        }
        local_124 = local_104;
        local_120 = local_100;
        local_11c = local_fc;
        FUN_0042aec0((int)&local_104);
        local_134 = local_124;
        local_130 = local_120;
        local_12c = local_11c;
      }
      if ((local_a4 <= param_1[0x44]) && ((param_1[0x41] != -1 || (param_1[0x43] != -1)))) {
        param_1[0x44] = param_1[0x44] + 1;
      }
      if (local_a4 <= param_1[0x41]) {
        param_1[0x41] = param_1[0x41] + 1;
      }
      if (local_a4 <= param_1[0x43]) {
        param_1[0x43] = param_1[0x43] + 1;
      }
      goto LAB_0042e396;
    }
    puVar3 = (undefined4 *)param_1[0x15];
    puVar3[1] = local_60;
    *puVar3 = local_60;
    puVar3[2] = 1;
  }
LAB_0042e396:
  param_1[0x1c] = param_1[0x1c] + 1;
  param_1[0x2c] = -2;
  local_174[0] = 0;
  local_174[1] = 0;
  local_174[2] = 0;
  local_174[3] = 0;
  uVar4 = FUN_00430290(param_1,local_a4,param_1[0x1c],local_174);
  if ((char)uVar4 != '\0') {
    FUN_00494540(param_1 + 0x45,local_174);
  }
  *in_FS_OFFSET = local_58;
  return local_58;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e408  FUN_0042e408   (513 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042e408(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_4c;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  int local_8;
  
  local_8 = param_2[9];
  iVar2 = *(int *)(local_8 + 4);
  uVar1 = 1;
  while (iVar2 != 0) {
    local_8 = iVar2;
    uVar1 = FUN_00430548(param_2 + 0xc,*param_3,*(int *)(iVar2 + 0x10));
    if ((char)uVar1 == '\0') {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((char)param_2[0xb] == '\0') {
    local_3c = local_8;
    if ((char)uVar1 != '\0') {
      local_4c = *(int *)(param_2[9] + 8);
      if (local_4c == local_8) {
        local_a = 1;
        FUN_0042e60c((int)&local_7c,param_2,0,local_8,param_3);
        *param_1 = local_7c;
        param_1[1] = local_78;
        param_1[2] = local_74;
        *(undefined1 *)(param_1 + 4) = local_a;
        return param_1;
      }
      FUN_0042e9d8((int)&local_44);
    }
    uVar1 = FUN_00430548(param_2 + 0xc,*(int *)(local_3c + 0x10),*param_3);
    if ((char)uVar1 == '\0') {
      *param_1 = local_44;
      param_1[1] = local_40;
      param_1[2] = local_3c;
      *(undefined1 *)(param_1 + 4) = 0;
    }
    else {
      local_b = 1;
      FUN_0042e60c((int)&local_a4,param_2,0,local_8,param_3);
      *param_1 = local_a4;
      param_1[1] = local_a0;
      param_1[2] = local_9c;
      *(undefined1 *)(param_1 + 4) = local_b;
    }
  }
  else {
    local_9 = 1;
    FUN_0042e60c((int)&local_34,param_2,0,local_8,param_3);
    *param_1 = local_34;
    param_1[1] = local_30;
    param_1[2] = local_2c;
    *(undefined1 *)(param_1 + 4) = local_9;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e60c  FUN_0042e60c   (763 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0042e60c(int param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar4 = FUN_0042e908(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if ((param_4 != param_2[9]) && (param_3 == 0)) {
    uVar5 = FUN_00430548(param_2 + 0xc,*param_5,*(int *)(param_4 + 0x10));
    if ((char)uVar5 == '\0') {
      *(undefined4 **)(param_4 + 0xc) = puVar4;
      if (param_4 == *(int *)(param_2[9] + 0xc)) {
        *(undefined4 **)(param_2[9] + 0xc) = puVar4;
      }
      goto LAB_0042e6c0;
    }
  }
  *(undefined4 **)(param_4 + 8) = puVar4;
  if (param_4 == param_2[9]) {
    *(undefined4 **)(param_2[9] + 4) = puVar4;
    *(undefined4 **)(param_2[9] + 0xc) = puVar4;
  }
  else if (param_4 == *(int *)(param_2[9] + 8)) {
    *(undefined4 **)(param_2[9] + 8) = puVar4;
  }
LAB_0042e6c0:
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
// 0x0042e908  FUN_0042e908   (165 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042e908(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2a0c);
  puVar1 = (undefined4 *)param_1[6];
  if (puVar1 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      FUN_00429928(param_1);
      puVar1 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x14;
    }
    else {
      puVar1 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x14;
    }
  }
  else {
    param_1[6] = *(int *)(param_1[6] + 0xc);
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[4] = *param_2;
  *in_FS_OFFSET = local_28;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e9d8  FUN_0042e9d8   (107 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042e9d8(int param_1)

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
// 0x0042ea44  FUN_0042ea44   (263 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_0042ea44(int param_1,uint *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_430 [2];
  int local_428;
  undefined4 local_410 [256];
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    local_10 = local_410;
    MatchListWindows::Entry::Entry(local_10,param_2,param_3,0);
    FUN_0042eb4c(local_430,param_1 + 0x18,(int *)&local_10);
    bVar4 = *(int *)(param_1 + 0x3c) != local_428;
  }
  else {
    iVar1 = FUN_0042ba08(param_1);
    if (0 < iVar1) {
      for (uVar2 = 0; uVar2 < (uint)((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54)) / 0xc);
          uVar2 = uVar2 + 1) {
        local_8 = (undefined4 *)(uVar2 * 0xc + *(int *)(param_1 + 0x54));
        iVar1 = FUN_00430a68(local_8[1],(byte *)param_2,(int)param_3,*(uint *)(param_1 + 0xe4));
        if (-1 < iVar1) {
          puVar3 = (undefined4 *)*local_8;
          while (local_c = FUN_00430a68((int)puVar3,(byte *)param_2,(int)param_3,
                                        *(uint *)(param_1 + 0xe4)), local_c < 0) {
            puVar3 = (undefined4 *)*puVar3;
          }
          return local_c == 0;
        }
      }
    }
    bVar4 = false;
  }
  return bVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eb4c  FUN_0042eb4c   (193 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042eb4c(undefined4 *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  int local_28;
  undefined4 local_20 [2];
  int local_18;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_2 + 0x24);
  iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 4);
  while (iVar2 != 0) {
    uVar1 = FUN_00430548(param_2 + 0x30,*(int *)(iVar2 + 0x10),*param_3);
    if ((char)uVar1 == '\0') {
      local_8 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  local_18 = local_8;
  local_28 = *(int *)(param_2 + 0x24);
  if (*(int *)(param_2 + 0x24) != local_8) {
    local_c = local_8;
    uVar1 = FUN_00430548(param_2 + 0x30,*param_3,*(int *)(local_8 + 0x10));
    if ((char)uVar1 == '\0') {
      puVar3 = local_20;
      goto LAB_0042ebed;
    }
  }
  puVar3 = local_40;
  local_10 = *(undefined4 *)(param_2 + 0x24);
  local_38 = *(undefined4 *)(param_2 + 0x24);
LAB_0042ebed:
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ec10  FUN_0042ec10   (142 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0042ec10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EDI;
  
  if (param_2 == 0x26) {
    unaff_EDI = param_1[0x44] + -1;
  }
  else if (param_2 == 0x28) {
    unaff_EDI = param_1[0x44] + 1;
  }
  else if (param_2 == 0x24) {
    unaff_EDI = 0;
  }
  else if (param_2 == 0x23) {
    iVar1 = FUN_0042ba08((int)param_1);
    unaff_EDI = iVar1 + -1;
  }
  if ((-1 < unaff_EDI) && (iVar1 = FUN_0042ba08((int)param_1), unaff_EDI < iVar1)) {
    if (param_3 == 0) {
      if (param_1[0x44] == -1) {
        if ((param_2 == 0x26) || (param_2 == 0x28)) {
          return 0;
        }
        param_1[0x44] = unaff_EDI;
      }
      MatchListWindows::EvKeyDown(param_1,param_2);
    }
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eca0  FUN_0042eca0   (92 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined1 __cdecl FUN_0042eca0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x9c) + 8) + 0x10);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x110);
  }
  puVar1 = FUN_004308e4(param_1,iVar2);
  FUN_004cf41c(param_3,(uint *)((int)puVar1 + 9));
  *param_4 = puVar1[1];
  return *(undefined1 *)(puVar1 + 2);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ecfc  FUN_0042ecfc   (54 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042ecfc(int *param_1)

{
  int local_14 [4];
  
  FUN_0042ed8c(local_14,param_1,0,1,1,'\0');
  (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ed34  FUN_0042ed34   (54 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042ed34(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int local_14 [4];
  
  cVar3 = '\0';
  iVar2 = 1;
  iVar1 = FUN_0042ba08((int)param_1);
  FUN_0042ed8c(local_14,param_1,0,iVar1,iVar2,cVar3);
  (**(code **)(param_1[3] + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ed6c  FUN_0042ed6c   (32 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined1 __cdecl FUN_0042ed6c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004308e4(param_1,param_2);
  return *(undefined1 *)(puVar1 + 2);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ed8c  FUN_0042ed8c   (3151 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0042ee37) */
/* WARNING: Removing unreachable block (ram,0x0042ee0b) */
int * __cdecl FUN_0042ed8c(int *param_1,int *param_2,int param_3,int param_4,int param_5,char param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  tagRECT *ptVar5;
  int *piVar6;
  LONG *pLVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 in_stack_fffffb44;
  undefined4 in_stack_fffffb48;
  undefined4 local_48c [4];
  int local_47c [5];
  undefined4 local_468;
  undefined4 *local_464;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 *local_454;
  undefined4 *local_444;
  undefined4 *local_434;
  undefined4 *local_424;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 *local_414;
  undefined4 local_40c;
  undefined4 local_408;
  int local_404;
  undefined4 local_3fc;
  undefined4 local_3f8;
  int local_3f4;
  int local_3e4;
  int local_3d4;
  int local_3c4;
  undefined4 local_3bc;
  undefined4 local_3b8;
  int local_3b4;
  int local_3ac [4];
  tagRECT local_39c;
  LONG local_38c;
  int local_388;
  int local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined1 local_36c;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined1 local_354;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined1 local_33c;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined1 local_324;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 local_30c;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined1 local_2f4;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined1 local_2dc;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined1 local_2c4;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined1 local_2ac;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined1 local_294;
  undefined4 local_28c;
  undefined4 local_288;
  int local_284;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  int local_264;
  int local_254;
  int local_244;
  undefined4 local_23c;
  undefined4 local_238;
  int local_234;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined1 local_21c;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_204;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1ec;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d4;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 local_1bc;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a4;
  undefined4 local_19c;
  undefined4 local_198;
  int local_194;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  int local_174;
  int local_164;
  int local_154;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  undefined4 local_134;
  undefined4 *local_12c;
  undefined4 *local_128;
  int local_124;
  int *local_120;
  char local_11a;
  char local_119;
  int local_118;
  int local_114;
  int local_110;
  int *local_10c;
  int *local_108;
  int local_104;
  int local_100;
  int *local_fc;
  int *local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int *local_e8;
  int local_e4;
  int local_e0;
  int *local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int local_bc;
  int local_b8;
  int *local_b4;
  int local_b0;
  int *local_ac;
  int local_a8;
  int local_a4;
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [4];
  undefined4 local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar9 = 0;
  __InitExceptBlockLDTC(0x4f2aa0);
  local_80 = 0x14;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_c = local_98;
  local_8 = local_94;
  local_3c[0] = 1;
  local_2c = 0;
  local_134 = 0;
  local_1c = 0;
  local_20 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_9c = 0;
  FUN_00429a74(local_3c);
  puVar1 = local_20 + 6;
  local_a0 = local_20;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  *local_20 = 0;
  local_20[1] = 0;
  local_20[2] = local_20;
  local_20[3] = local_20;
  local_3c[0] = 0x80;
  local_80 = 0x2c;
  local_20 = puVar1;
  local_18 = local_a0;
  if (param_6 == '\0') {
    local_80 = 0x74;
    local_110 = param_4;
    local_114 = param_3;
    local_10c = &local_6c;
    local_6c = param_3;
    local_68 = param_4;
    local_74 = local_74 + 3;
    FUN_0042faf4(&local_364,local_3c,local_10c);
    local_37c = local_364;
    local_378 = local_360;
    local_374 = local_35c;
    local_36c = local_354;
    local_74 = local_74 + -1;
  }
  else if (param_5 == 1) {
    local_154 = *(int *)(param_2[0x27] + 8);
    local_144 = local_154;
    local_a4 = local_154;
    local_74 = local_74 + 2;
    while (local_174 = param_2[0x27], local_164 = local_174, local_a8 = local_174,
          local_174 != local_144) {
      if ((0 < param_4) &&
         (local_ac = (int *)(local_144 + 0x10), param_3 < *local_ac + *(int *)(local_144 + 0x14))) {
        local_80 = 0x2c;
        local_b0 = param_4;
        if (*(int *)(local_144 + 0x10) < param_4 + param_3) {
          local_b0 = *(int *)(local_144 + 0x10) - param_3;
        }
        if (0 < local_b0) {
          local_80 = 0x38;
          local_b8 = local_b0;
          local_b4 = &local_44;
          local_40 = local_b0;
          local_74 = local_74 + 1;
          local_bc = param_3;
          local_44 = param_3;
          FUN_0042faf4(&local_1b4,local_3c,local_b4);
          local_1cc = local_1b4;
          local_1c8 = local_1b0;
          local_1c4 = local_1ac;
          local_1bc = local_1a4;
          local_74 = local_74 + -1;
        }
        local_c0 = (int *)(local_144 + 0x10);
        local_b0 = (*local_c0 + *(int *)(local_144 + 0x14)) - param_3;
        param_3 = param_3 + local_b0;
        param_4 = param_4 - local_b0;
      }
      local_c4 = (int *)(local_144 + 0x10);
      FUN_0042faf4(&local_1e4,local_3c,local_c4);
      local_1fc = local_1e4;
      local_1f8 = local_1e0;
      local_1f4 = local_1dc;
      local_1ec = local_1d4;
      local_18c = local_14c;
      local_188 = local_148;
      local_184 = local_144;
      FUN_0042ba94((int)&local_14c);
      local_19c = local_18c;
      local_198 = local_188;
      local_194 = local_184;
    }
    if (0 < param_4) {
      local_80 = 0x44;
      local_c8 = &local_4c;
      local_74 = local_74 + 1;
      local_d0 = param_3;
      local_cc = param_4;
      local_4c = param_3;
      local_48 = param_4;
      FUN_0042faf4(&local_214,local_3c,local_c8);
      local_22c = local_214;
      local_228 = local_210;
      local_224 = local_20c;
      local_21c = local_204;
      local_74 = local_74 + -1;
    }
  }
  else {
    local_244 = *(int *)(param_2[0x27] + 8);
    local_234 = local_244;
    local_d4 = local_244;
    local_74 = local_74 + 2;
    while (local_264 = param_2[0x27], local_254 = local_264, local_264 != local_234) {
      if ((*(int *)(local_234 + 0x10) < param_3) ||
         (param_4 + param_3 <= *(int *)(local_234 + 0x10))) {
        if ((*(int *)(local_234 + 0x10) < param_3) &&
           (param_3 < *(int *)(local_234 + 0x10) + *(int *)(local_234 + 0x14))) {
          local_80 = 0x5c;
          local_ec = param_3 - *(int *)(local_234 + 0x10);
          local_f0 = *(int *)(local_234 + 0x10);
          local_e8 = &local_5c;
          local_74 = local_74 + 1;
          local_5c = local_f0;
          local_58 = local_ec;
          FUN_0042faf4(&local_2d4,local_3c,local_e8);
          local_2ec = local_2d4;
          local_2e8 = local_2d0;
          local_2e4 = local_2cc;
          local_2dc = local_2c4;
          local_f8 = (int *)(local_234 + 0x10);
          local_f4 = (*local_f8 + *(int *)(local_234 + 0x14)) - (param_4 + param_3);
          local_80 = 0x2c;
          iVar4 = local_74 + -1;
          if (0 < local_f4) {
            local_80 = 0x68;
            local_104 = param_4 + param_3;
            local_fc = &local_64;
            local_100 = local_f4;
            local_64 = local_104;
            local_60 = local_f4;
            FUN_0042faf4(&local_304,local_3c,local_fc);
            local_31c = local_304;
            local_318 = local_300;
            local_314 = local_2fc;
            local_30c = local_2f4;
            iVar4 = local_74 + -1;
          }
        }
        else {
          local_108 = (int *)(local_234 + 0x10);
          FUN_0042faf4(&local_334,local_3c,local_108);
          local_34c = local_334;
          local_348 = local_330;
          local_344 = local_32c;
          local_33c = local_324;
          iVar4 = local_74;
        }
      }
      else {
        local_d8 = (param_4 + param_3) - *(int *)(local_234 + 0x10);
        local_80 = 0x2c;
        iVar4 = local_74;
        if (local_d8 < *(int *)(local_234 + 0x14)) {
          local_80 = 0x50;
          local_e0 = *(int *)(local_234 + 0x14) - local_d8;
          local_e4 = *(int *)(local_234 + 0x10) + local_d8;
          local_dc = &local_54;
          local_74 = local_74 + 1;
          local_54 = local_e4;
          local_50 = local_e0;
          FUN_0042faf4(&local_2a4,local_3c,local_dc);
          local_2bc = local_2a4;
          local_2b8 = local_2a0;
          local_2b4 = local_29c;
          local_2ac = local_294;
          iVar4 = local_74 + -1;
        }
      }
      local_74 = iVar4;
      local_27c = local_23c;
      local_278 = local_238;
      local_274 = local_234;
      FUN_0042ba94((int)&local_23c);
      local_28c = local_27c;
      local_288 = local_278;
      local_284 = local_274;
    }
  }
  local_39c.left = 0;
  local_39c.top = 0;
  local_39c.right = 0;
  local_39c.bottom = 0;
  FUN_004a7a6c(*param_2,&local_39c);
  ptVar5 = &local_39c;
  pLVar7 = &local_38c;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pLVar7 = ptVar5->left;
    ptVar5 = (tagRECT *)((int)ptVar5 + ((uint)bVar9 * -2 + 1) * 4);
    pLVar7 = pLVar7 + (uint)bVar9 * -2 + 1;
  }
  local_80 = 0x2c;
  local_3ac[0] = 0;
  local_3ac[1] = 0;
  local_3ac[2] = 0;
  local_3ac[3] = 0;
  if (0 < param_2[0x40]) {
    iVar4 = *(int *)(*(int *)(*param_2 + 0x44) + 0xc) / param_2[0x40];
    local_118 = (*(int *)(*(int *)(*param_2 + 0x44) + 0xc) + (local_380 - local_388) + param_2[0x40]
                + -1) / param_2[0x40];
    if (iVar4 <= local_118) {
      do {
        local_119 = '\0';
        local_80 = 0x2c;
        local_11a = '\0';
        local_3c4 = *(int *)(param_2[0x27] + 8);
        local_3b4 = local_3c4;
        while (local_3e4 = param_2[0x27], local_3d4 = local_3e4, local_3e4 != local_3b4) {
          if ((iVar4 < *(int *)(local_3b4 + 0x10)) ||
             (*(int *)(local_3b4 + 0x10) + *(int *)(local_3b4 + 0x14) <= iVar4)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_119 = '\x01';
            break;
          }
          local_3fc = local_3bc;
          local_3f8 = local_3b8;
          local_3f4 = local_3b4;
          FUN_0042ba94((int)&local_3bc);
          local_40c = local_3fc;
          local_408 = local_3f8;
          local_404 = local_3f4;
        }
        local_424 = (undefined4 *)local_18[2];
        local_80 = 0x2c;
        local_414 = local_424;
        while( true ) {
          local_434 = local_18;
          local_444 = local_18;
          if (local_18 == local_414) break;
          if ((iVar4 < (int)local_414[4]) || ((int)(local_414[4] + local_414[5]) <= iVar4)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_11a = '\x01';
            break;
          }
          local_45c = local_41c;
          local_458 = local_418;
          local_454 = local_414;
          FUN_0042ba94((int)&local_41c);
          local_47c[4] = local_45c;
          local_468 = local_458;
          local_464 = local_454;
        }
        if (local_119 != local_11a) {
          local_47c[0] = 0;
          local_47c[1] = 0;
          local_47c[2] = 0;
          local_47c[3] = 0;
          local_80 = 0x2c;
          uVar3 = FUN_00430290(param_2,iVar4,1,local_47c);
          if ((char)uVar3 != '\0') {
            FUN_00494540(local_3ac,local_47c);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= local_118);
    }
  }
  local_120 = param_2 + 0x1e;
  FUN_00430180(local_120,local_3c);
  piVar6 = local_3ac;
  piVar8 = param_1;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + (uint)bVar9 * -2 + 1;
    piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
  }
  local_74 = local_74 + -2;
  if (local_18 != (undefined4 *)0x0) {
    local_128 = local_18;
    local_124 = local_18[2];
    FUN_0042a474(local_48c,(int)local_3c,in_stack_fffffb44,in_stack_fffffb48,local_124);
    local_12c = local_18;
    local_18[3] = local_24;
    local_24 = local_18;
    FUN_0042af24((int)local_3c);
  }
  *in_FS_OFFSET = local_90;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042faf4  FUN_0042faf4   (518 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042faf4(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_10;
  int *local_c;
  int local_8;
  
  bVar1 = true;
  iVar2 = *(int *)(param_2[9] + 4);
  local_8 = param_2[9];
  while (iVar2 != 0) {
    local_c = param_3;
    bVar1 = *param_3 < *(int *)(iVar2 + 0x10);
    local_8 = iVar2;
    if (bVar1) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  if ((char)param_2[0xb] == '\0') {
    local_40 = local_8;
    if (bVar1) {
      local_50 = *(int *)(param_2[9] + 8);
      if (local_50 == local_8) {
        FUN_0042fcfc((int)&local_80,param_2,0,local_8,param_3);
        *param_1 = local_80;
        param_1[1] = local_7c;
        param_1[2] = local_78;
        *(undefined1 *)(param_1 + 4) = 1;
        return param_1;
      }
      FUN_00430114((int)&local_48);
    }
    local_10 = (int *)(local_40 + 0x10);
    if (*local_10 < *param_3) {
      FUN_0042fcfc((int)&local_a8,param_2,0,local_8,param_3);
      *param_1 = local_a8;
      param_1[1] = local_a4;
      param_1[2] = local_a0;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = local_40;
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  else {
    FUN_0042fcfc((int)&local_38,param_2,0,local_8,param_3);
    *param_1 = local_38;
    param_1[1] = local_34;
    param_1[2] = local_30;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fcfc  FUN_0042fcfc   (764 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0042fcfc(int param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = FUN_0042fff8(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if ((param_4 != param_2[9]) && (param_3 == 0)) {
    if (*(int *)(param_4 + 0x10) <= *param_5) {
      *(undefined4 **)(param_4 + 0xc) = puVar4;
      if (param_4 == *(int *)(param_2[9] + 0xc)) {
        *(undefined4 **)(param_2[9] + 0xc) = puVar4;
      }
      goto LAB_0042fdb1;
    }
  }
  *(undefined4 **)(param_4 + 8) = puVar4;
  if (param_4 == param_2[9]) {
    *(undefined4 **)(param_2[9] + 4) = puVar4;
    *(undefined4 **)(param_2[9] + 0xc) = puVar4;
  }
  else if (param_4 == *(int *)(param_2[9] + 8)) {
    *(undefined4 **)(param_2[9] + 8) = puVar4;
  }
LAB_0042fdb1:
  puVar4[1] = param_4;
  puVar5 = puVar4;
  while ((puVar5 != *(undefined4 **)(param_2[9] + 4) && (*(int *)puVar5[1] == 0))) {
    iVar1 = *(int *)(puVar5[1] + 4);
    if (*(int *)(iVar1 + 8) == puVar5[1]) {
      piVar2 = *(int **)(iVar1 + 0xc);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar5[1];
        if (puVar5 == (undefined4 *)puVar3[3]) {
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
          puVar5 = puVar3;
        }
        puVar3 = (undefined4 *)puVar5[1];
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
        *(undefined4 *)puVar5[1] = 1;
        *piVar2 = 1;
        puVar5 = *(undefined4 **)(puVar5[1] + 4);
        *puVar5 = 0;
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(puVar5[1] + 4) + 8);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar5[1];
        if (puVar5 == (undefined4 *)puVar3[2]) {
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
          puVar5 = puVar3;
        }
        puVar3 = (undefined4 *)puVar5[1];
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
        *(undefined4 *)puVar5[1] = 1;
        *piVar2 = 1;
        puVar5 = *(undefined4 **)(puVar5[1] + 4);
        *puVar5 = 0;
      }
    }
  }
  **(undefined4 **)(param_2[9] + 4) = 1;
  *(undefined4 **)(param_1 + 8) = puVar4;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fff8  FUN_0042fff8   (196 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0042fff8(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4f2b5c);
  puVar1 = (undefined4 *)param_1[6];
  if (puVar1 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      FUN_00429a74(param_1);
      puVar1 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x18;
    }
    else {
      puVar1 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x18;
    }
  }
  else {
    param_1[6] = *(int *)(param_1[6] + 0xc);
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430114  FUN_00430114   (107 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00430114(int param_1)

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
// 0x00430180  FUN_00430180   (161 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00430180(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  undefined4 local_14 [4];
  
  if (param_2 != param_1) {
    FUN_0042a474(local_14,(int)param_1,in_stack_ffffffc0,in_stack_ffffffc4,*(int *)(param_1[9] + 8))
    ;
    puVar2 = FUN_00430224(param_1,*(undefined4 **)(param_2[9] + 4),(undefined4 *)param_1[9]);
    iVar1 = param_1[9];
    *(undefined4 **)(iVar1 + 4) = puVar2;
    if (*(int *)(iVar1 + 4) == 0) {
      *(int *)(iVar1 + 8) = iVar1;
      *(int *)(iVar1 + 0xc) = iVar1;
    }
    else {
      uVar3 = FUN_0042ae80(*(int *)(param_1[9] + 4));
      iVar1 = param_1[9];
      *(undefined4 *)(iVar1 + 8) = uVar3;
      uVar3 = FUN_0042aea0(*(int *)(iVar1 + 4));
      *(undefined4 *)(param_1[9] + 0xc) = uVar3;
    }
    param_1[10] = param_2[10];
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430224  FUN_00430224   (105 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00430224(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  
  local_8 = param_2;
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[2]) {
    puVar1 = FUN_0042fff8(param_1,param_2 + 4);
    if (param_2 == local_8) {
      local_8 = puVar1;
    }
    param_3[2] = puVar1;
    puVar1[1] = param_3;
    *puVar1 = *param_2;
    puVar2 = FUN_00430224(param_1,(undefined4 *)param_2[3],puVar1);
    puVar1[3] = puVar2;
    param_3 = puVar1;
  }
  param_3[2] = 0;
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430290  FUN_00430290   (423 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00430290(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  tagRECT *ptVar5;
  int *piVar6;
  LONG *pLVar7;
  int local_68 [6];
  int local_50;
  int local_4c;
  tagRECT local_48;
  int local_38 [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_15;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (0 < param_1[0x40]) {
    local_48.left = 0;
    local_48.top = 0;
    local_48.right = 0;
    local_48.bottom = 0;
    FUN_004a7a6c(*param_1,&local_48);
    ptVar5 = &local_48;
    pLVar7 = local_38;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar7 = ptVar5->left;
      ptVar5 = (tagRECT *)&ptVar5->top;
      pLVar7 = pLVar7 + 1;
    }
    iVar4 = param_1[0x40];
    iVar1 = *(int *)(*(int *)(*param_1 + 0x44) + 0xc);
    iVar3 = iVar1 / iVar4;
    iVar4 = (iVar1 + (local_38[3] - local_38[1]) + iVar4 + -1) / iVar4;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    if (param_2 + param_3 + -1 <= iVar4) {
      iVar4 = param_2 + param_3 + -1;
    }
    if (iVar3 <= iVar4) {
      local_8 = iVar3 * param_1[0x40] - *(int *)(*(int *)(*param_1 + 0x44) + 0xc);
      local_c = ((iVar4 - iVar3) + 1) * param_1[0x40] + local_8;
      local_10 = local_38[2] - local_38[0];
      local_14 = local_8;
      local_68[4] = 0;
      local_68[5] = local_8;
      local_50 = local_10;
      local_4c = local_c;
      if ((((local_38[0] < local_10) && (0 < local_38[2])) && (local_38[1] < local_c)) &&
         (local_8 < local_38[3])) {
        local_15 = 1;
        bVar2 = true;
      }
      else {
        local_15 = 0;
        bVar2 = false;
      }
      if (bVar2) {
        if (local_38[3] < local_c) {
          local_c = local_38[3];
        }
        local_1c = local_c;
        if (local_38[2] < local_10) {
          local_10 = local_38[2];
        }
        local_20 = local_10;
        if (local_8 < local_38[1]) {
          local_8 = local_38[1];
        }
        local_24 = local_8;
        if (local_38[0] < 1) {
          local_38[0] = 0;
        }
        local_28 = local_38[0];
        local_68[0] = local_38[0];
        local_68[1] = local_8;
        local_68[2] = local_10;
        local_68[3] = local_c;
      }
      else {
        local_68[0] = 0;
        local_68[1] = 0;
        local_10 = 0;
        local_68[2] = 0;
        local_68[3] = 0;
      }
      piVar6 = local_68;
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_4 = *piVar6;
        piVar6 = piVar6 + 1;
        param_4 = param_4 + 1;
      }
      return CONCAT31((int3)((uint)local_10 >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430438  FUN_00430438   (6 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00430438(int *param_1)

{
  undefined4 uVar1;
  int aiStack_74 [5];
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_3c;
  int iStack_2c;
  int iStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_1c = *(int *)(param_1[0x27] + 8);
  iStack_c = iStack_1c;
  while( true ) {
    iStack_3c = param_1[0x27];
    if (iStack_3c == iStack_c) break;
    aiStack_74[0] = 0;
    aiStack_74[1] = 0;
    aiStack_74[2] = 0;
    aiStack_74[3] = 0;
    iStack_2c = iStack_3c;
    uVar1 = FUN_00430290(param_1,*(int *)(iStack_c + 0x10),*(int *)(iStack_c + 0x14),aiStack_74);
    if ((char)uVar1 != '\0') {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
    uStack_54 = uStack_14;
    uStack_50 = uStack_10;
    iStack_4c = iStack_c;
    FUN_0042ba94((int)&uStack_14);
    aiStack_74[4] = uStack_54;
    uStack_60 = uStack_50;
    iStack_5c = iStack_4c;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043043e  FUN_0043043e   (176 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_0043043e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  uVar4 = *(undefined4 *)(piVar1[0x27] + 8);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  *(undefined4 *)(unaff_EBP + -8) = uVar4;
  while( true ) {
    iVar2 = piVar1[0x27];
    *(int *)(unaff_EBP + -0x28) = iVar2;
    *(int *)(unaff_EBP + -0x38) = iVar2;
    iVar3 = *(int *)(unaff_EBP + -8);
    if (iVar2 == iVar3) break;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    uVar4 = FUN_00430290(piVar1,*(int *)(iVar3 + 0x10),*(int *)(iVar3 + 0x14),
                         (int *)(unaff_EBP + -0x70));
    if ((char)uVar4 != '\0') {
      (**(code **)(*(int *)(*piVar1 + 8) + 0x6c))();
    }
    *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0xc);
    *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -8);
    FUN_0042ba94(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + -0x50);
    *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x4c);
    *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x48);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004304f0  MatchListWindows::Entry::Entry   (85 bytes)   [notes+analysis]
//   constructor(text, wordLength, linkIndex): next=NULL, link index, length byte at +8, text copied to +9
void __cdecl MatchListWindows::Entry::Entry(undefined4 *param_1,uint *param_2,char *param_3,undefined4 param_4)

{
  char *pcVar1;
  
  *param_1 = 0;
  param_1[1] = param_4;
  pcVar1 = strlen(param_2);
  if (0xff < (int)pcVar1) {
    pcVar1 = (char *)0xff;
  }
  if ((int)pcVar1 < (int)param_3) {
    param_3 = pcVar1;
  }
  *(char *)(param_1 + 2) = (char)param_3;
  FUN_004dcc40((undefined4 *)((int)param_1 + 9),param_2,pcVar1);
  pcVar1[(int)param_1 + 9] = '\0';
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430548  FUN_00430548   (23 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00430548(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = MatchListWindows::CompareEntries(param_2,param_3,3);
  return CONCAT31(extraout_var,bVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00430560  FUN_00430560   (83 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00430560(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2b98);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004305b4  FUN_004305b4   (63 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004305b4(int *param_1,int *param_2)

{
  if (param_2 != param_1) {
    if (*param_2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004305f4  FUN_004305f4   (39 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004305f4(undefined4 *param_1)

{
  while ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*param_1;
    operator_delete();
  }
  param_1[1] = *param_1;
  param_1[2] = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043061c  FUN_0043061c   (89 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0043061c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  int local_48;
  int local_44;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2bac);
  *param_1 = param_2 + 0x78;
  iVar1 = *(int *)(*(int *)(param_2 + 0x9c) + 8);
  param_1[2] = local_48;
  param_1[3] = local_44;
  param_1[4] = iVar1;
  FUN_00430730(param_1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430678  FUN_00430678   (183 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00430678(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)(*param_1 + 0x24) == param_1[4]) {
    iVar3 = -1;
  }
  else {
    iVar3 = param_1[6];
    param_1[6] = param_1[6] + 1;
    iVar1 = *(int *)(param_1[4] + 0x10);
    if ((param_1[6] < iVar1) || (iVar1 + *(int *)(param_1[4] + 0x14) <= param_1[6])) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      FUN_0042ba94((int)(param_1 + 2));
      if (*(int *)(*param_1 + 0x24) != param_1[4]) {
        param_1[6] = *(int *)(param_1[4] + 0x10);
      }
    }
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430730  FUN_00430730   (180 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00430730(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_24 [6];
  undefined4 local_c;
  
  local_c = *(undefined4 *)(*(int *)(*param_1 + 0x24) + 8);
  local_24[2] = local_c;
  piVar2 = local_24;
  piVar3 = param_1 + 2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  for (; (*(int *)(*param_1 + 0x24) != param_1[4] &&
         (iVar1 = *(int *)(param_1[4] + 0x14), -1 < param_2 - iVar1)); param_2 = param_2 - iVar1) {
    FUN_0042ba94((int)(param_1 + 2));
  }
  if (*(int *)(*param_1 + 0x24) != param_1[4]) {
    param_1[6] = param_2 + *(int *)(param_1[4] + 0x10);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004307e4  FUN_004307e4   (254 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_004307e4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 local_14 [8];
  int local_c;
  
  if (*(int *)(param_1 + 0x104) != -1) {
    if (*(int *)(param_1 + 0x104) < *(int *)(param_1 + 0x110)) {
      iVar2 = *(int *)(param_1 + 0x104);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x110);
    }
    if (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0x104)) {
      iVar3 = *(int *)(param_1 + 0x104);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x110);
    }
    if ((iVar2 <= param_2) && (param_2 <= iVar3)) {
      if (*(int *)(param_1 + 0x108) == 0) {
        return 0;
      }
      return 1;
    }
  }
  local_c = *(int *)(*(int *)(param_1 + 0x9c) + 8);
  while( true ) {
    if (*(int *)(param_1 + 0x9c) == local_c) {
      return 0;
    }
    if ((param_2 < *(int *)(local_c + 0x10)) ||
       (*(int *)(local_c + 0x10) + *(int *)(local_c + 0x14) <= param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    FUN_0042ba94((int)local_14);
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004308e4  FUN_004308e4   (232 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004308e4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == *(int *)(param_1 + 0xb0)) {
    puVar2 = *(undefined4 **)(param_1 + 0xb8);
  }
  else {
    if (param_2 != *(int *)(param_1 + 0xb0) + 1) {
      *(int *)(param_1 + 0xb0) = param_2;
      puVar2 = (undefined4 *)0x0;
      iVar3 = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      while( true ) {
        if ((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54)) / 0xc <= *(int *)(param_1 + 0xb4))
        goto LAB_004309be;
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0xb4) * 0xc + *(int *)(param_1 + 0x54));
        if ((iVar3 <= param_2) && (param_2 < puVar1[2] + iVar3)) break;
        iVar3 = iVar3 + puVar1[2];
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      }
      puVar2 = (undefined4 *)*puVar1;
      iVar3 = param_2 - iVar3;
      while (0 < iVar3) {
        puVar2 = (undefined4 *)*puVar2;
        iVar3 = iVar3 + -1;
      }
LAB_004309be:
      *(undefined4 **)(param_1 + 0xb8) = puVar2;
      return puVar2;
    }
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    iVar3 = **(int **)(param_1 + 0xb8);
    *(int *)(param_1 + 0xb8) = iVar3;
    if (iVar3 == 0) {
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      *(undefined4 *)(param_1 + 0xb8) =
           *(undefined4 *)(*(int *)(param_1 + 0xb4) * 0xc + *(int *)(param_1 + 0x54));
    }
    puVar2 = *(undefined4 **)(param_1 + 0xb8);
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004309cc  MatchListWindows::CompareEntries   (156 bytes)   [notes+analysis]
//   ordering predicate for the sort modes: modes > 2 compare by length first; odd/even selects direction
bool __cdecl MatchListWindows::CompareEntries(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (2 < (int)param_3) {
    uVar1 = FUN_0043c6a4((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8));
    uVar2 = FUN_0043c6a4((byte *)(param_2 + 9),(uint)*(byte *)(param_2 + 8));
    if (uVar2 != uVar1) {
      if ((int)param_3 < 5) {
        return uVar1 < uVar2;
      }
      return uVar2 < uVar1;
    }
  }
  iVar3 = FUN_0043c624((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8),(byte *)(param_2 + 9),
                       (uint)*(byte *)(param_2 + 8));
  if ((param_3 & 1) == 0) {
    bVar4 = 0 < iVar3;
  }
  else {
    bVar4 = iVar3 < 0;
  }
  return bVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430a68  FUN_00430a68   (130 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00430a68(int param_1,byte *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (2 < (int)param_4) {
    iVar1 = FUN_0043c6a4((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8));
    iVar2 = FUN_0043c6a4(param_2,param_3);
    iVar1 = iVar1 - iVar2;
    if (iVar1 != 0) {
      if ((int)param_4 < 5) {
        return iVar1;
      }
      return -iVar1;
    }
  }
  iVar2 = FUN_0043c624((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8),param_2,param_3);
  if ((param_4 & 1) == 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430aec  FUN_00430aec   (362 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00430aec(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  tagPOINT local_48;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  undefined4 local_1c [3];
  undefined4 local_10;
  HMENU local_c;
  
  __InitExceptBlockLDTC(0x4f2be0);
  local_48.x = 0;
  local_48.y = 0;
  if (param_2 != (int *)0x0) {
    local_48.x = *param_2;
    local_48.y = param_2[1];
  }
  iVar1 = FUN_0042ba14((int)param_1);
  if (iVar1 == 0) {
    (*(LPCSTR *)&DAT_0051ac84) = (LPCSTR)0x19f0;
  }
  else {
    (*(LPCSTR *)&DAT_0051ac84) = (LPCSTR)0x1a04;
  }
  local_30 = 0x14;
  iVar1 = 1;
  (*(LPCSTR *)&DAT_0051ac88) = (*(LPCSTR *)&DAT_0051ac84);
  piVar2 = FUN_00497b98(local_1c,*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),(*(LPCSTR *)&DAT_0051ac84));
  local_24 = local_24 + 1;
  FUN_00497fac(&local_10,piVar2,iVar1);
  local_24 = local_24 + 1;
  OWL::TMenu::_dtor(local_1c,2);
  local_30 = 8;
  ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_48);
  iVar3 = GetSystemMetrics(0);
  iVar1 = local_48.x;
  if (local_48.x < 1) {
    iVar1 = 0;
  }
  if (iVar1 < iVar3) {
    if (local_48.x < 1) {
      local_48.x = 0;
    }
  }
  else {
    local_48.x = GetSystemMetrics(0);
  }
  iVar3 = GetSystemMetrics(1);
  iVar1 = local_48.y;
  if (local_48.y < 1) {
    iVar1 = 0;
  }
  if (iVar1 < iVar3) {
    if (local_48.y < 1) {
      local_48.y = 0;
    }
  }
  else {
    local_48.y = GetSystemMetrics(1);
  }
  hWnd = (HWND)FUN_00454458((int *)param_1[0x38]);
  TrackPopupMenu(local_c,2,local_48.x,local_48.y,0,hWnd,(RECT *)0x0);
  local_24 = local_24 + -2;
  OWL::TMenu::_dtor(&local_10,0);
  *in_FS_OFFSET = local_40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430c58  MatchListWindows::Selection::~Selection   (25 bytes)   [rtti:dtor destructor]
//   written in code as MatchListWindows::Selection::_dtor
void __cdecl MatchListWindows::Selection::_dtor(int param_1,byte param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430d9c  MatchListWindows::EntryHead::~EntryHead   (34 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as MatchListWindows::EntryHead::_dtor
void __cdecl MatchListWindows::EntryHead::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_004305f4(param_1);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430e60  std::set<MatchListWindows::Selection,std::less<MatchListWindows::Selection>>::~set   (125 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::set_MatchListWindows_Selection_std_less_MatchListWindows_Selection::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::set_MatchListWindows_Selection_std_less_MatchListWindows_Selection::_dtor(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  int local_c;
  
  __InitExceptBlockLDTC(0x4f2c08);
  if (param_1 != 0) {
    local_c = local_c + -1;
    if (*(int *)(param_1 + 0x24) != 0) {
      local_2c = *(undefined4 *)(param_1 + 0x24);
      FUN_0042a474(local_3c,param_1,in_stack_ffffff98,in_stack_ffffff9c,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0042af24(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431158  __rwstd::__rb_tree<MatchListWindows::Selection,MatchListWindows::Selection,__rwstd::__ident<MatchListWindows::Selection,MatchListWindows::Selection>,std::less<MatchListWindows::Selection>>::~__rb_tree   (114 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as __rwstd::rb_tree_MatchListWindows_Selection_MatchListWindows_Selection_rwstd_ident_MatchListWindows_Selection_MatchListWindows_Selection_std_less_MatchListWindows_Selection::_dtor
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::rb_tree_MatchListWindows_Selection_MatchListWindows_Selection_rwstd_ident_MatchListWindows_Selection_MatchListWindows_Selection_std_less_MatchListWindows_Selection::_dtor(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 local_38 [4];
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2d08);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_0042a474(local_38,param_1,in_stack_ffffff9c,in_stack_ffffffa0,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0042af24(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431308  std::set<const MatchListWindows::Entry *,MatchListWindows::EntryIndexComparator>::~set   (125 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::set_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::set_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator::_dtor(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  int local_c;
  
  __InitExceptBlockLDTC(0x4f2d10);
  if (param_1 != 0) {
    local_c = local_c + -1;
    if (*(int *)(param_1 + 0x24) != 0) {
      local_2c = *(undefined4 *)(param_1 + 0x24);
      FUN_0042af64(local_3c,param_1,in_stack_ffffff98,in_stack_ffffff9c,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0042b9ac(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431388  std::vector<int>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_int::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_int::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0042a45c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004313c0  std::vector<MatchListWindows::EntryHead>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_MatchListWindows_EntryHead::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchListWindows_EntryHead::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_00429fb8(param_1,*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004313f8  __rwstd::__rb_tree<const MatchListWindows::Entry *,const MatchListWindows::Entry *,__rwstd::__ident<const MatchListWindows::Entry *,const MatchListWindows::Entry *>,MatchListWindows::EntryIndexComparator>::~__rb_tree   (94 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::rb_tree_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_rwstd_ident_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator::_dtor
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::rb_tree_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_rwstd_ident_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator::_dtor(int param_1,byte param_2)

{
  int iVar1;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  undefined4 local_14 [4];
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_0042af64(local_14,param_1,in_stack_ffffffc0,in_stack_ffffffc4,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0042b9ac(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431458  FUN_00431458   (25 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00431458(int param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x1144) = (char)param_2;
  *(int *)(param_1 + 0x1148) = *(int *)(param_1 + 0x1148) + 1;
  return param_2;
}

} // namespace tea
