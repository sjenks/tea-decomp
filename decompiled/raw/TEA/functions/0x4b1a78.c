// name: FUN_004b1a78
// address: 0x4b1a78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b1a78(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50d0b0);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -10;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -10;
    FUN_004c8028((int *)((int)param_1 + 0x4a),0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 10;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 10;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x3a;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x3a;
    FUN_004bdc6c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x3a;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x3a;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x25,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x23,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

