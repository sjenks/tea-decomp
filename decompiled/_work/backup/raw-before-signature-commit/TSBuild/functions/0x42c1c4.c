// name: FUN_0042c1c4
// address: 0x42c1c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042c1c4(uint param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_00467ba8(0x47c2f8);
  piVar1 = FUN_0042bfc4(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  FUN_004231dc(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

