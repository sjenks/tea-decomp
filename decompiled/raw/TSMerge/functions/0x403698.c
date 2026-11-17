// name: FUN_00403698
// address: 0x403698
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00403698(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_d8;
  int local_b4 [44];
  
  FUN_00455f04(0x461d70);
  piVar1 = FUN_00434494(local_b4,0,*param_1,(uint *)0xc8,0);
  (**(code **)(piVar1[3] + 0x14))();
  FUN_00434760(local_b4,2);
  *in_FS_OFFSET = local_d8;
  return;
}

