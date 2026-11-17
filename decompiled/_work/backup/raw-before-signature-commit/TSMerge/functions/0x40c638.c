// name: FUN_0040c638
// address: 0x40c638
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040c638(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_80;
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
  
  FUN_00455f04(0x463674);
  FUN_0040e920(local_c,0x4768ac,1,0);
  iVar1 = param_1 + 0x18;
  FUN_0044d11c((int)local_1c,(uint *)s_MergePrimaryInput_00463401);
  FUN_0040eaf8((int)local_c,(int)local_1c,iVar1);
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
      if (iVar1 != 0) goto LAB_0040c740;
    }
    FUN_0044b2cc();
    local_14 = 0;
  }
LAB_0040c740:
  iVar1 = param_1 + 0x28;
  FUN_0044d11c((int)local_2c,(uint *)s_MergeSecondaryInput_00463413);
  FUN_0040eaf8((int)local_c,(int)local_2c,iVar1);
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
      if (iVar1 != 0) goto LAB_0040c80e;
    }
    FUN_0044b2cc();
    local_24 = 0;
  }
LAB_0040c80e:
  iVar1 = param_1 + 0x38;
  FUN_0044d11c((int)local_3c,(uint *)s_MergeOutput_00463427);
  FUN_0040eaf8((int)local_c,(int)local_3c,iVar1);
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
      if (iVar1 != 0) goto LAB_0040c8dc;
    }
    FUN_0044b2cc();
    local_34 = 0;
  }
LAB_0040c8dc:
  FUN_0044d11c((int)local_4c,(uint *)s_MergeOperation_00463433);
  FUN_0040eb28((int)local_c,(int)local_4c);
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
      if (iVar1 != 0) goto LAB_0040c9aa;
    }
    FUN_0044b2cc();
    local_44 = 0;
  }
LAB_0040c9aa:
  FUN_0044d11c((int)local_5c,(uint *)s_MergeConversion_00463442);
  FUN_0040eb28((int)local_c,(int)local_5c);
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
      if (iVar1 != 0) goto LAB_0040ca68;
    }
    FUN_0044b2cc();
    local_54 = 0;
  }
LAB_0040ca68:
  FUN_0040ea04((int)local_c,2);
  *in_FS_OFFSET = local_80;
  return;
}

