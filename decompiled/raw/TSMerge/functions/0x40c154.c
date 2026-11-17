// name: FUN_0040c154
// address: 0x40c154
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040c154(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int local_cc;
  undefined1 *local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  undefined1 *local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined1 *local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined4 local_80;
  undefined2 local_70;
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  FUN_00455f04(0x46356c);
  local_70 = 8;
  FUN_0040e920(local_c,0x4768ac,0,0);
  iVar1 = param_1 + 0x18;
  local_64 = local_64 + 1;
  local_70 = 0x20;
  FUN_0044d11c((int)local_1c,(uint *)s_MergePrimaryInput_00463401);
  local_64 = local_64 + 1;
  FUN_0040ea30((int)local_c,(int)local_1c,iVar1);
  local_64 = local_64 + -1;
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c25c;
    }
    local_8c = local_14 + -0xc;
    local_90 = local_14 + -0xc;
    FUN_0044b2cc();
    local_94 = 0;
    local_98 = local_1c;
    local_14 = 0;
  }
LAB_0040c25c:
  iVar1 = param_1 + 0x28;
  local_70 = 0x38;
  FUN_0044d11c((int)local_2c,(uint *)s_MergeSecondaryInput_00463413);
  local_64 = local_64 + 1;
  FUN_0040ea30((int)local_c,(int)local_2c,iVar1);
  local_64 = local_64 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c32a;
    }
    local_a4 = local_24 + -0xc;
    local_a8 = local_24 + -0xc;
    FUN_0044b2cc();
    local_ac = 0;
    local_b0 = local_2c;
    local_24 = 0;
  }
LAB_0040c32a:
  iVar1 = param_1 + 0x38;
  local_70 = 0x50;
  FUN_0044d11c((int)local_3c,(uint *)s_MergeOutput_00463427);
  local_64 = local_64 + 1;
  FUN_0040ea30((int)local_c,(int)local_3c,iVar1);
  local_64 = local_64 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c3f8;
    }
    local_bc = local_34 + -0xc;
    local_c0 = local_34 + -0xc;
    FUN_0044b2cc();
    local_c4 = 0;
    local_c8 = local_3c;
    local_34 = 0;
  }
LAB_0040c3f8:
  piVar2 = &local_cc;
  local_cc = 0;
  local_70 = 0x68;
  FUN_0044d11c((int)local_4c,(uint *)s_MergeOperation_00463433);
  local_64 = local_64 + 1;
  FUN_0040eaa4((int)local_c,(int)local_4c,piVar2);
  local_64 = local_64 + -1;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar2 = (int *)(local_44 + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c4d1;
    }
    FUN_0044b2cc();
    local_44 = 0;
  }
LAB_0040c4d1:
  *(int *)(param_1 + 0x10) = local_cc % 5;
  local_cc = 0;
  piVar2 = &local_cc;
  local_70 = 0x80;
  FUN_0044d11c((int)local_5c,(uint *)s_MergeConversion_00463442);
  local_64 = local_64 + 1;
  FUN_0040eaa4((int)local_c,(int)local_5c,piVar2);
  local_64 = local_64 + -1;
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar2 = (int *)(local_54 + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c5bb;
    }
    FUN_0044b2cc();
    local_54 = 0;
  }
LAB_0040c5bb:
  local_70 = 0x14;
  *(int *)(param_1 + 0x14) = local_cc % 5;
  local_64 = local_64 + -1;
  FUN_0040ea04((int)local_c,2);
  *in_FS_OFFSET = local_80;
  return;
}

