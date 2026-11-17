// name: FUN_0042efb8
// address: 0x42efb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042efb8(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x11;
  uVar2 = FUN_00421918();
  (**(code **)(*(int *)(param_1 + 0x1b) + 0x44))(uVar2,*(int *)(param_1 + 0x1b),iVar3,param_1);
  if (*(int *)(param_1 + 0x2b) != 0) {
    puVar1 = (uint *)(**(int **)(param_1 + 0x2b) + 0x74);
    *puVar1 = *puVar1 | 0x10;
    (**(code **)(*(int *)(**(int **)(param_1 + 0x2b) + 8) + 0x10))();
    (**(code **)(*(int *)(**(int **)(param_1 + 0x2b) + 8) + 100))();
    return;
  }
  FUN_00430c34();
  return;
}

