// name: FUN_004c225c
// address: 0x4c225c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c225c(undefined4 param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_004dce64(0x51071c);
  piVar1 = FUN_004c1fa8(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  FUN_0048ee7c(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

