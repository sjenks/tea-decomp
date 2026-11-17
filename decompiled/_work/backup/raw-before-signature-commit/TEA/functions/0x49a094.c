// name: FUN_0049a094
// address: 0x49a094
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049a094(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x508688);
  piVar1 = (int *)(*(code *)*param_2)();
  *param_3 = piVar1[1];
  FUN_004999b8(param_1 + 2,*param_3);
  if (param_1[3] != 0) {
    FUN_00499f04(param_1);
  }
  (**(code **)(*piVar1 + 4))();
  FUN_004cc0bc();
  *in_FS_OFFSET = local_2c;
  return;
}

