// name: FUN_0042dc94
// address: 0x42dc94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042dc94(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47c86c);
  piVar1 = (int *)(*(code *)*param_2)();
  *param_3 = piVar1[1];
  FUN_0042d5b8(param_1 + 2,*param_3);
  if (param_1[3] != 0) {
    FUN_0042db04(param_1);
  }
  (**(code **)(*piVar1 + 4))();
  FUN_0045680c();
  *in_FS_OFFSET = local_2c;
  return;
}

