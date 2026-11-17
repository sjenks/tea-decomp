// name: FUN_004251dc
// address: 0x4251dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004251dc(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[4],(int *)&DAT_0047af2c,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = FUN_00435b8c((undefined4 *)*param_1,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

