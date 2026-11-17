// name: FUN_0042cfe0
// address: 0x42cfe0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042cfe0(int *param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47c688);
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_0042d068(iVar1,'\x01');
      if (*(int *)(iVar1 + 9) != 0) {
        FUN_00456e94();
      }
      FUN_0045680c();
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

