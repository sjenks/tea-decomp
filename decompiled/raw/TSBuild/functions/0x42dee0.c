// name: FUN_0042dee0
// address: 0x42dee0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042dee0(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (iVar1 != 2) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

