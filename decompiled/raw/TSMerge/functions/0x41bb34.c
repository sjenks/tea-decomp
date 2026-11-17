// name: FUN_0041bb34
// address: 0x41bb34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041bb34(int param_1)

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

