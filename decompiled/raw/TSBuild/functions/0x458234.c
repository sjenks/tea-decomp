// name: FUN_00458234
// address: 0x458234
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00458234(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_00458274((int)param_2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}

