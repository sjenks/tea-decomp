// name: FUN_0044d0c8
// address: 0x44d0c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0044d0c8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_2 != param_1) {
    param_3 = param_3 + -4;
    param_2 = param_2 + -4;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return param_3;
}

