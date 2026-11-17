// name: FUN_00423348
// address: 0x423348
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00423348(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x468b38);
  if (param_1 != 0) {
    FUN_00421ed4(param_1,'\x01');
    if (*(int *)(param_1 + 9) != 0) {
      FUN_0044b954();
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

