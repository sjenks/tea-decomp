// name: FUN_0049a8dc
// address: 0x49a8dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049a8dc(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508730);
  if (param_1 != 0) {
    FUN_00499468(param_1,'\x01');
    if (*(int *)(param_1 + 9) != 0) {
      FUN_004cc744();
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

