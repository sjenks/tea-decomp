// name: FUN_004391f0
// address: 0x4391f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004391f0(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_14 [4];
  
  FUN_00467ba8(0x47e924);
  piVar1 = FUN_00438f54(local_14,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  FUN_004231dc(local_14,0);
  *in_FS_OFFSET = local_38;
  return;
}

