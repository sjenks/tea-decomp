// name: FUN_00434ba4
// address: 0x434ba4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00434ba4(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f3140);
  if (param_1 != 0) {
    FUN_004cc264(param_1 + 8,0x10,0x100,1,FUN_00402880);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

