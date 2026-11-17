// name: FUN_004a8edc
// address: 0x4a8edc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a8edc(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  
  FUN_004dce64(0x50b748);
  if (param_1 == (undefined4 *)0x0) goto LAB_004a9147;
  *(undefined ***)((int)param_1 + 0x1b) = &PTR_FUN_0050b660;
  param_1[1] = &PTR_LAB_0050b6b4;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_0050b6c4;
  *(undefined ***)*param_1 = &PTR_LAB_0050b6e4;
  FUN_004aaef4((int)param_1);
  if (*(int *)((int)param_1 + 0x53) != 0) {
    (**(code **)(*(int *)((int)param_1 + 0x53) + 0x11))();
    if (*(undefined4 **)((int)param_1 + 0x53) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x53))();
    }
  }
  if (*(int *)((int)param_1 + 0x4e) != 0) {
    (**(code **)(*(int *)((int)param_1 + 0x4e) + 0x15))();
    if (*(undefined4 **)((int)param_1 + 0x4e) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x4e))();
    }
  }
  piVar1 = (int *)FUN_004a95d8((int)param_1,0);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 8) + 0x18))();
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 8))();
    }
    if (*(int *)((int)param_1 + 0x31) != 0) {
      (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x31) + 0xc))();
    }
  }
  if (*(int *)((int)param_1 + 0x27) != 0) {
    (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x27) + 8))();
  }
  FUN_00487e60(*(undefined4 **)((int)param_1 + 0x6b));
  if (*(int *)((int)param_1 + 0x3d) != 0) {
    if (*(int *)(*(int *)((int)param_1 + 0x3d) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)((int)param_1 + 0x3d) + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_004a9115;
    }
    FUN_004cc0bc();
    *(undefined4 *)((int)param_1 + 0x3d) = 0;
  }
LAB_004a9115:
  FUN_004c0aac(param_1 + 1,0);
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_004a9147:
  *in_FS_OFFSET = local_50;
  return;
}

