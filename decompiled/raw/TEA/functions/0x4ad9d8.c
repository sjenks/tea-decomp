// name: FUN_004ad9d8
// address: 0x4ad9d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ad9d8(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50c960);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_0050c860;
    *(undefined ***)param_1[1] = &PTR_LAB_0050c88c;
    *(undefined ***)param_1[2] = &PTR_LAB_0050c898;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050c8a4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 9,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 7,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

