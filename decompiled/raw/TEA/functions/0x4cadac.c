// name: FUN_004cadac
// address: 0x4cadac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004cadac(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x512290);
  if (param_1 != 0) {
    FUN_004ca784(param_1,'\x01');
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

