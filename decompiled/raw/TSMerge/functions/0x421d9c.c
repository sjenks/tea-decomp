// name: FUN_00421d9c
// address: 0x421d9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00421d9c(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x468870);
  iVar1 = FUN_0044b300();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 1) = 0;
    *(undefined4 *)(iVar1 + 5) = 0;
    *(undefined4 *)(iVar1 + 9) = 0;
    FUN_00421ae0(iVar1,0x1e);
  }
  *param_1 = iVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

