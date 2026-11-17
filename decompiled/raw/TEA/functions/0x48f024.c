// name: FUN_0048f024
// address: 0x48f024
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048f024(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_004dce64(0x5063dc);
  piVar1 = FUN_0048ed28(local_10,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  FUN_0048ee7c(local_10,2);
  *in_FS_OFFSET = local_34;
  return;
}

