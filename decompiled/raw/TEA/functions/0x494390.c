// name: FUN_00494390
// address: 0x494390
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00494390(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5073dc);
  if (param_1 != 0) {
    FUN_00493a94(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      FUN_004cc744();
    }
    FUN_0048c8b0(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

