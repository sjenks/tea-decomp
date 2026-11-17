// name: FUN_004d2278
// address: 0x4d2278
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004d2278(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_34 [8];
  undefined4 *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x514890);
  local_2c = FUN_004d2320(param_1);
  FUN_004ce7c4(local_34);
  local_18 = 8;
  iVar1 = FUN_004ce7ec((int)local_2c);
  uVar2 = FUN_004ce7f8(local_34,iVar1);
  FUN_004d2574(local_34,uVar2,param_2);
  *in_FS_OFFSET = local_28;
  return local_2c;
}

