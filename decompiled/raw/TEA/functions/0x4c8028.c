// name: FUN_004c8028
// address: 0x4c8028
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c8028(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x511c74);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_00511e14;
    *(undefined ***)param_1[1] = &PTR_LAB_00511e28;
    *(undefined ***)param_1[2] = &PTR_LAB_00511e34;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511e40;
    if (*(uint **)((int)param_1 + 0x26) != (uint *)0x0) {
      FUN_00494064(*(uint **)((int)param_1 + 0x26),0);
      FUN_004cc0bc();
    }
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0xe,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

