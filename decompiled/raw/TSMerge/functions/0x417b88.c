// name: FUN_00417b88
// address: 0x417b88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_00417b88(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x4667f8);
  *param_1 = &PTR_FUN_00461fe8;
  *param_1 = &PTR_FUN_004668c4;
  _DAT_0046677c = _DAT_0046677c + 1;
  iVar1 = FUN_0044b300();
  if (iVar1 != 0) {
    puVar2 = (uint *)(**(code **)(*param_2 + 4))();
    FUN_0044d11c(iVar1,puVar2);
  }
  param_1[1] = iVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

