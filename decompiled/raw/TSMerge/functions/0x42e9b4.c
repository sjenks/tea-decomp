// name: FUN_0042e9b4
// address: 0x42e9b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042e9b4(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  
  FUN_00455f04(0x46af04);
  if (param_1 == (undefined4 *)0x0) goto LAB_0042ec1f;
  *(undefined ***)((int)param_1 + 0x1b) = &PTR_FUN_0046ae1c;
  param_1[1] = &PTR_LAB_0046ae70;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_0046ae80;
  *(undefined ***)*param_1 = &PTR_LAB_0046aea0;
  FUN_004309ac((int)param_1);
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
  piVar1 = (int *)FUN_0042f090((int)param_1,0);
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
  FUN_0041171c(*(undefined4 **)((int)param_1 + 0x6b));
  if (*(int *)((int)param_1 + 0x3d) != 0) {
    if (*(int *)(*(int *)((int)param_1 + 0x3d) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)((int)param_1 + 0x3d) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042ebed;
    }
    FUN_0044b2cc();
    *(undefined4 *)((int)param_1 + 0x3d) = 0;
  }
LAB_0042ebed:
  FUN_00443cf8(param_1 + 1,0);
  if ((param_2 & 1) != 0) {
    FUN_0044b2cc();
  }
LAB_0042ec1f:
  *in_FS_OFFSET = local_50;
  return;
}

