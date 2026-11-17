// name: FUN_004216a0
// address: 0x4216a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004216a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0041b280(*(int **)(param_2 + 0x5b0));
  uVar2 = FUN_0041b280(*(int **)(param_2 + 0x5b8));
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return param_1;
}

