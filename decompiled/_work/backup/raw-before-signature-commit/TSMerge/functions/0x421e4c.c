// name: FUN_00421e4c
// address: 0x421e4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421e4c(int *param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x4688ac);
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_00421ed4(iVar1,'\x01');
      if (*(int *)(iVar1 + 9) != 0) {
        FUN_0044b954();
      }
      FUN_0044b2cc();
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

