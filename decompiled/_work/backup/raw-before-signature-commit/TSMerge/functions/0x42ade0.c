// name: FUN_0042ade0
// address: 0x42ade0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042ade0(undefined4 *param_1,uint param_2)

{
  code *dwNewLong;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x46a8a0);
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = &PTR_FUN_00468fdc;
    *(undefined ***)*param_1 = &PTR_LAB_0046906c;
    *(undefined ***)param_1[1] = &PTR_LAB_00469078;
    if (param_1[3] != 0) {
      if (param_1[0x10] == 0) {
        dwNewLong = DefWindowProcA;
      }
      else {
        dwNewLong = (code *)param_1[0x10];
      }
      SetWindowLongA((HWND)param_1[3],-4,(LONG)dwNewLong);
    }
    FUN_004238e8((int)param_1);
    param_1[0x1a] = 0;
    FUN_0042b930(*(int *)((int)param_1 + 0x82));
    FUN_0042d0cc((int)param_1,FUN_0042a49c);
    if ((param_1[3] != 0) && ((*(byte *)(param_1 + 0x1d) & 1) == 0)) {
      (**(code **)(param_1[2] + 0x18))();
    }
    if (param_1[5] != 0) {
      (**(code **)(*(int *)(param_1[5] + 8) + 0x80))();
    }
    if (param_1[0x1b] != 0) {
      FUN_00430968(param_1[0x1b],(int)param_1);
    }
    if ((short)((uint)param_1[0xc] >> 0x10) != 0) {
      FUN_0044b2dc();
    }
    FUN_0042b218((int)param_1,0);
    if ((short)((uint)param_1[4] >> 0x10) != 0) {
      FUN_0044b2dc();
    }
    param_1[4] = 0;
    if ((param_1[0x16] != 0) && (param_1[0x14] != 0)) {
      FUN_0042d6f8((int)param_1,0,0);
    }
    if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x18])();
    }
    if ((param_2 & 2) != 0) {
      FUN_00413978((undefined4 *)((int)param_1 + 0x8e),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

