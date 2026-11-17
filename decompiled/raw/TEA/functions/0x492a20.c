// name: FUN_00492a20
// address: 0x492a20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00492a20(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x3f) != '\0') {
    (**(code **)(*(int *)(param_1 + 0x18) + 0x10))();
  }
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    (**(code **)(*piVar1 + 0x1c))();
  }
  return;
}

