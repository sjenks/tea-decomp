// name: FUN_0043444c
// address: 0x43444c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043444c(undefined4 *param_1,int *param_2,undefined *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  param_2[2] = (int)param_1;
  uVar2 = FUN_004179f4(param_1[1],(int *)&DAT_0046c064,param_2,param_3);
  if (((char)uVar2 == '\0') &&
     (cVar1 = FUN_0042a9f8((undefined4 *)*param_1,param_2,param_3), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

