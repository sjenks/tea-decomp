// name: FUN_00455acc
// address: 0x455acc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined2 * __cdecl FUN_00455acc(undefined2 *param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}

