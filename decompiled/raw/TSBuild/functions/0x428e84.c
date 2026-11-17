// name: FUN_00428e84
// address: 0x428e84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428e84(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47b870);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_0047ba24;
    *(undefined ***)param_1[1] = &PTR_LAB_0047ba3c;
    *(undefined ***)param_1[2] = &PTR_LAB_0047ba48;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047ba54;
    FUN_0045681c();
    iVar1 = param_1[6];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x55);
      FUN_0045680c();
    }
    param_1[6] = 0;
    FUN_00429500((int)param_1);
    iVar1 = param_1[7];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      FUN_0045680c();
    }
    param_1[7] = 0;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_00435f74((undefined4 *)((int)param_1 + 0x41),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_0041e99c((undefined4 *)((int)param_1 + 0x39),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

