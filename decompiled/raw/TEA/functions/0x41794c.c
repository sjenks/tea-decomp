// name: FUN_0041794c
// address: 0x41794c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041794c(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ee090);
  if (param_1 != 0) {
    if (*(uint **)(param_1 + 0xc) != (uint *)0x0) {
      FUN_004ab9b4(*(uint **)(param_1 + 0xc),3);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

