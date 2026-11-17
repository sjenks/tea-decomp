// name: FUN_00425710
// address: 0x425710
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00425710(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_00467ba8(0x47b128);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&PTR_FUN_0047b35c;
    param_1[1] = (int)&PTR_LAB_0047b3d0;
    *(undefined ***)param_1[4] = &PTR_LAB_0047b3f0;
    *(undefined ***)param_1[5] = &PTR_LAB_0047b3fc;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047b408;
    if ((uint *)param_1[7] != (uint *)0x0) {
      FUN_004284a8((uint *)param_1[7],0);
      FUN_0045680c();
    }
    if (*(undefined4 **)((int)param_1 + 0x37) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x37))();
    }
    FUN_00424fa0(param_1 + 1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      FUN_00435f74((undefined4 *)((int)param_1 + 0x5d),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      FUN_0041e99c((undefined4 *)((int)param_1 + 0x55),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

