// name: FUN_0045625c
// address: 0x45625c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045625c(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x48446c);
  if (param_1 != 0) {
    FUN_00455aec(param_1,'\x01');
    if (*(int *)(param_1 + 9) != 0) {
      FUN_00456e94();
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

