// name: FUN_00473ba8
// address: 0x473ba8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00473ba8(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ff2fc);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x19;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x19;
    FUN_00498528(param_1,0);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x19;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x19;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      FUN_004a52c0((undefined4 *)((int)param_1 + 0x7b),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      FUN_00489c54((undefined4 *)((int)param_1 + 0x73),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

