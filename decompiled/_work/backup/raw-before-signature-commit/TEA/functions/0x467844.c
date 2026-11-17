// name: FUN_00467844
// address: 0x467844
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00467844(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4fc62c);
  if (*(uint **)(param_1 + 0xb4) != (uint *)0x0) {
    FUN_004ab9b4(*(uint **)(param_1 + 0xb4),3);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *in_FS_OFFSET = local_2c;
  return;
}

