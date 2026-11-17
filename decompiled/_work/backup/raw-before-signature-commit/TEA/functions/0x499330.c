// name: FUN_00499330
// address: 0x499330
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00499330(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x508468);
  iVar1 = FUN_004cc0f0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 1) = 0;
    *(undefined4 *)(iVar1 + 5) = 0;
    *(undefined4 *)(iVar1 + 9) = 0;
    FUN_00499074(iVar1,0x1e);
  }
  *param_1 = iVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

