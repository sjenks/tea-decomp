// name: FUN_0048e99c
// address: 0x48e99c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_0048e99c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x50617c);
  *param_1 = &PTR_FUN_004eac60;
  *param_1 = &PTR_FUN_00506248;
  _DAT_00506100 = _DAT_00506100 + 1;
  iVar1 = FUN_004cc0f0();
  if (iVar1 != 0) {
    puVar2 = (uint *)(**(code **)(*param_2 + 4))();
    FUN_004cf628(iVar1,puVar2);
  }
  param_1[1] = iVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

