// name: FUN_0042e388
// address: 0x42e388
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042e388(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47c8e4);
  if (param_1 != 0) {
    FUN_0042d068(param_1,'\x01');
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

