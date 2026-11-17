// name: FUN_004a857c
// address: 0x4a857c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a857c(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_14 [4];
  
  FUN_004dce64(0x50b38c);
  piVar1 = FUN_004a82e0(local_14,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  FUN_0048ee7c(local_14,0);
  *in_FS_OFFSET = local_38;
  return;
}

