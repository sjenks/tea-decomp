// name: FUN_0049bbf0
// address: 0x49bbf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049bbf0(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508ab0);
  if (param_1 != (int *)0x0) {
    FUN_00497bf4((undefined4 *)((int)param_1 + 0x86),0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x11;
    FUN_004a52c0(param_1,0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x11;
    if ((param_2 & 2) != 0) {
      FUN_00489c54((undefined4 *)((int)param_1 + 0x9f),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

