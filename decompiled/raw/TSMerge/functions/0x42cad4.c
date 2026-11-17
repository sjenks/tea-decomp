// name: FUN_0042cad4
// address: 0x42cad4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042cad4(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
  }
  if (((*(byte *)(param_1 + 0x74) & 0x10) != 0) &&
     (piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x1b) + 0x34))(),
     piVar1 != (int *)0x0)) {
    if (*(int *)(*piVar1 + 0x14) == 0) {
      (**(code **)(*(int *)(*piVar1 + 8) + 0x34))();
    }
    if (*(int *)(*piVar1 + 0xc) == 0) {
      FUN_0042d484(*piVar1,0,0x8000000,0);
      (**(code **)(*(int *)(*piVar1 + 8) + 0x10))();
    }
  }
  FUN_0042cfd0(param_1);
  (**(code **)(*(int *)(param_1 + 8) + 0x5c))();
  return;
}

