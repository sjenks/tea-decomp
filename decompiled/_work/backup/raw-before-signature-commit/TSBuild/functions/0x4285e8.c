// name: FUN_004285e8
// address: 0x4285e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004285e8(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47b740);
  if (param_1 != 0) {
    FUN_00427ed8(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      FUN_00456e94();
    }
    FUN_004209d0(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

