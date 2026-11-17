// name: FUN_00432d4c
// address: 0x432d4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00432d4c(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_004179f4(param_1[2],(int *)&DAT_0046be04,param_2,param_3);
  if ((((char)uVar1 == '\0') &&
      (uVar1 = FUN_004418d4((undefined4 *)*param_1,param_2,param_3), (char)uVar1 == '\0')) &&
     (uVar1 = FUN_0041dc70(param_1 + 1,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

