// name: FUN_0049bca0
// address: 0x49bca0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0049bca0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  uVar2 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return param_1;
}

