// name: FUN_00490f60
// address: 0x490f60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00490f60(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[4],(int *)&DAT_00506b58,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = FUN_004a4d44((undefined4 *)*param_1,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

