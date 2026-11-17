// name: FUN_004211b8
// address: 0x4211b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004211b8(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x479ff8);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&PTR_FUN_0047a018;
    param_1[1] = (int)&PTR_LAB_0047a08c;
    *(undefined ***)param_1[4] = &PTR_LAB_0047a0ac;
    *(undefined ***)param_1[5] = &PTR_LAB_0047a0b8;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047a0c4;
    FUN_00425710(param_1,0);
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
  *in_FS_OFFSET = local_28;
  return;
}

