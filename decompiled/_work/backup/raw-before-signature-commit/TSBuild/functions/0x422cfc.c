// name: FUN_00422cfc
// address: 0x422cfc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_00422cfc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47a5d4);
  *param_1 = &PTR_FUN_00474e18;
  *param_1 = &PTR_FUN_0047a6a0;
  _DAT_0047a558 = _DAT_0047a558 + 1;
  iVar1 = FUN_00456840();
  if (iVar1 != 0) {
    puVar2 = (uint *)(**(code **)(*param_2 + 4))();
    FUN_00459d78(iVar1,puVar2);
  }
  param_1[1] = iVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

