// name: FUN_0041a068
// address: 0x41a068
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041a068(undefined4 *param_1,int *param_2,undefined *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  param_2[2] = (int)param_1;
  uVar2 = FUN_004179f4(param_1[4],(int *)&DAT_00467150,param_2,param_3);
  if (((char)uVar2 == '\0') &&
     (cVar1 = FUN_0042a9f8((undefined4 *)*param_1,param_2,param_3), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

