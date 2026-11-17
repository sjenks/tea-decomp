// name: FUN_004828bc
// address: 0x4828bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004828bc(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  while ((param_1 != param_2 &&
         (uVar1 = FUN_004d40d0(param_1,0,*(uint *)(*(int *)(param_1 + 8) + -4),
                               *(byte **)(param_3 + 8),*(uint *)(*(int *)(param_3 + 8) + -4)),
         uVar1 != 0))) {
    param_1 = param_1 + 0x10;
  }
  return param_1;
}

