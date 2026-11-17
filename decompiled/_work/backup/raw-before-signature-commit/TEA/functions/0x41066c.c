// name: FUN_0041066c
// address: 0x41066c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041066c(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ec908);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0040c938(*(int *)(param_1 + 4),3);
    }
    FUN_0040957c(param_1 + 0x10,*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18));
    FUN_004cc0bc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

