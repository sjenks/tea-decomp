// name: FUN_004102ac
// address: 0x4102ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004102ac(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ec8d4);
  while (param_2 != 0) {
    *param_1 = *param_3;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

