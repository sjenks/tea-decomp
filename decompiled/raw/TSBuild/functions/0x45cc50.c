// name: FUN_0045cc50
// address: 0x45cc50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0045cc50(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_34 [8];
  undefined4 *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_00467ba8(0x486770);
  local_2c = FUN_0045ccf8(param_1);
  FUN_00458f14(local_34);
  local_18 = 8;
  iVar1 = FUN_00458f3c((int)local_2c);
  uVar2 = FUN_00458f48(local_34,iVar1);
  FUN_0045cf4c(local_34,uVar2,param_2);
  *in_FS_OFFSET = local_28;
  return local_2c;
}

