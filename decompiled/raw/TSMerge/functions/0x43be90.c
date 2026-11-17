// name: FUN_0043be90
// address: 0x43be90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_0043be90(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_00455f04(0x46d90c);
  if (param_2 != (uint *)param_1[0x18]) {
    FUN_0044b2dc();
    if (param_2 == (uint *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0041fd2c(param_2);
    }
    param_1[0x18] = iVar2;
  }
  FUN_00444058((int)local_24,*(int *)(*param_1 + 0x70),0x7f26);
  local_c = (int *)0x0;
  if (local_1c[-3] == -1 || local_1c[-3] + 1 < 0) {
    uVar1 = local_1c[-1];
    local_c = FUN_0044d2a4(local_14,uVar1,uVar1);
    local_c = local_c + 3;
    FUN_004559d0(local_c,local_1c,uVar1);
  }
  else {
    local_c = local_1c;
    piVar3 = local_1c + -3;
    if (piVar3 != &DAT_00471d5c) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
      if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043bffe;
    }
    FUN_0044b2cc();
    local_1c = (int *)0x0;
  }
LAB_0043bffe:
  iVar2 = (**(code **)(*(int *)(*param_1 + 8) + 0x38))();
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar3 = local_c + -3;
      if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043c091;
    }
    FUN_0044b2cc();
    iVar2 = 0;
  }
LAB_0043c091:
  *in_FS_OFFSET = local_48;
  return iVar2;
}

