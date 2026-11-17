// name: FUN_00444004
// address: 0x444004
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00444004(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x20))();
    if (iVar3 != 0) {
      if (iVar3 != *(int *)((int)piVar2 + 0x22)) {
        FUN_00444da8((int)piVar2,iVar3);
      }
      cVar1 = (**(code **)(*piVar2 + 0x14))();
      if (cVar1 != '\0') {
        (**(code **)(*(int *)(param_1 + 8) + 0x50))();
      }
    }
  }
  return;
}

