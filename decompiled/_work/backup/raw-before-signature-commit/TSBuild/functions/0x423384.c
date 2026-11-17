// name: FUN_00423384
// address: 0x423384
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00423384(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_00467ba8(0x47a834);
  piVar1 = FUN_00423088(local_10,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  FUN_004231dc(local_10,2);
  *in_FS_OFFSET = local_34;
  return;
}

