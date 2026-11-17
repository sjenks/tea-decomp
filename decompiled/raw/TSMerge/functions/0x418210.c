// name: FUN_00418210
// address: 0x418210
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00418210(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_00455f04(0x466a58);
  piVar1 = FUN_00417f14(local_10,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  FUN_00418068(local_10,2);
  *in_FS_OFFSET = local_34;
  return;
}

