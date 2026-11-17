// name: FUN_004028c0
// address: 0x4028c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004028c0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_d8;
  int local_b4 [44];
  
  FUN_00467ba8(0x474a78);
  piVar1 = FUN_0043f628(local_b4,0,*param_1,(uint *)0xc8,0);
  (**(code **)(piVar1[3] + 0x14))();
  FUN_0043f8f4(local_b4,2);
  *in_FS_OFFSET = local_d8;
  return;
}

