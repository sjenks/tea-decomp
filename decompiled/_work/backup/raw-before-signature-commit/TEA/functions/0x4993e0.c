// name: FUN_004993e0
// address: 0x4993e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004993e0(int *param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x5084a4);
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_00499468(iVar1,'\x01');
      if (*(int *)(iVar1 + 9) != 0) {
        FUN_004cc744();
      }
      FUN_004cc0bc();
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

