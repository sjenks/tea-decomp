// name: FUN_0044ca68
// address: 0x44ca68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044ca68(undefined4 *param_1,int *param_2,undefined *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  param_2[2] = (int)param_1;
  uVar2 = FUN_00422b68(param_1[1],(int *)&DAT_00482838,param_2,param_3);
  if (((char)uVar2 == '\0') &&
     (cVar1 = FUN_00435b8c((undefined4 *)*param_1,param_2,param_3), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

