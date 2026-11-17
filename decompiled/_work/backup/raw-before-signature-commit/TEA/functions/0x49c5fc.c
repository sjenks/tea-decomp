// name: FUN_0049c5fc
// address: 0x49c5fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0049c5fc(undefined4 *param_1,int *param_2,undefined *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  param_2[2] = (int)param_1;
  uVar2 = FUN_0048e808(*param_1,(int *)&DAT_00508bc0,param_2,param_3);
  if (((char)uVar2 == '\0') && (cVar1 = FUN_004a4d44(param_1,param_2,param_3), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

