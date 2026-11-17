// name: FUN_00405d64
// address: 0x405d64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00405d64(int param_1,int *param_2)

{
  *(int *)(*(int *)(param_1 + 0x1f90) + 0x2c) = *param_2;
  FUN_00418a48((int *)(param_1 + 0x8c8),param_2);
  FUN_00419418((int *)(param_1 + 0x1180),(int *)(*(int *)(param_1 + 0x1f90) + 0x130),param_2,0,
               0x3ff00000,0,0x3ff00000);
  FUN_00419418((int *)(param_1 + 0x1350),(int *)(*(int *)(param_1 + 0x1f90) + 0x170),param_2,0,
               0x3ff00000,0,0x3ff00000);
  FUN_0045d9e8(*(int *)(param_1 + 0x1f8c));
  return;
}

