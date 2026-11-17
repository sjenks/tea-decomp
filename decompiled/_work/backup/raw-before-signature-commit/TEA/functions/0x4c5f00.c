// name: FUN_004c5f00
// address: 0x4c5f00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c5f00(uint param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_004dce64(0x5112bc);
  piVar1 = FUN_004c5cf8(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  FUN_0048ee7c(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

