// name: FUN_00439b48
// address: 0x439b48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00439b48(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  
  FUN_00467ba8(0x47ece0);
  if (param_1 == (undefined4 *)0x0) goto LAB_00439db3;
  *(undefined ***)((int)param_1 + 0x1b) = &PTR_FUN_0047ebf8;
  param_1[1] = &PTR_LAB_0047ec4c;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_0047ec5c;
  *(undefined ***)*param_1 = &PTR_LAB_0047ec7c;
  FUN_0043bb40((int)param_1);
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
  piVar1 = (int *)FUN_0043a224((int)param_1,0);
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
  FUN_0041c740(*(undefined4 **)((int)param_1 + 0x6b));
  if (*(int *)((int)param_1 + 0x3d) != 0) {
    if (*(int *)(*(int *)((int)param_1 + 0x3d) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)((int)param_1 + 0x3d) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00439d81;
    }
    FUN_0045680c();
    *(undefined4 *)((int)param_1 + 0x3d) = 0;
  }
LAB_00439d81:
  FUN_0044ee8c(param_1 + 1,0);
  if ((param_2 & 1) != 0) {
    FUN_0045680c();
  }
LAB_00439db3:
  *in_FS_OFFSET = local_50;
  return;
}

