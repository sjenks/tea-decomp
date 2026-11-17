// name: FUN_0042e05c
// address: 0x42e05c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042e05c(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_14 [4];
  
  FUN_00455f04(0x46ab48);
  piVar1 = FUN_0042ddc0(local_14,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  FUN_00418068(local_14,0);
  *in_FS_OFFSET = local_38;
  return;
}

