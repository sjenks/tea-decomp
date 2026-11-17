// name: FUN_0043dee0
// address: 0x43dee0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043dee0(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[2],(int *)&DAT_0047fbe0,param_2,param_3);
  if ((((char)uVar1 == '\0') &&
      (uVar1 = FUN_0044ca68((undefined4 *)*param_1,param_2,param_3), (char)uVar1 == '\0')) &&
     (uVar1 = FUN_00428de4(param_1 + 1,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

