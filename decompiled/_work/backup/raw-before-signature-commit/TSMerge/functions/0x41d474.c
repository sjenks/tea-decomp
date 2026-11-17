// name: FUN_0041d474
// address: 0x41d474
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041d474(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x467964);
  if (param_1 != 0) {
    FUN_0041cd64(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      FUN_0044b954();
    }
    FUN_004159ac(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

