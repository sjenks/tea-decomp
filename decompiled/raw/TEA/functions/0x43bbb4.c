// name: FUN_0043bbb4
// address: 0x43bbb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043bbb4(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[2],(int *)&DAT_004f4bf8,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = FUN_00426498(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

