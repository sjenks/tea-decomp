// name: FUN_00422b00
// address: 0x422b00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00422b00(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x468a90);
  piVar1 = (int *)(*(code *)*param_2)();
  *param_3 = piVar1[1];
  FUN_00422424(param_1 + 2,*param_3);
  if (param_1[3] != 0) {
    FUN_00422970(param_1);
  }
  (**(code **)(*piVar1 + 4))();
  FUN_0044b2cc();
  *in_FS_OFFSET = local_2c;
  return;
}

