// name: FUN_0044409c
// address: 0x44409c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044409c(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (piVar2 != (int *)0x0) {
    if (*(int *)((int)piVar2 + 0x2e) == 0) {
      (**(code **)(*(int *)(param_1 + 8) + 0x40))();
    }
    else {
      if (((*(byte *)(param_1 + 0x18) & 0x10) == 0) &&
         (cVar1 = (**(code **)(*piVar2 + 0x28))(piVar2,*piVar2,param_1), cVar1 == '\0')) {
        (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
        return;
      }
      (**(code **)(*piVar2 + 0x14))();
    }
  }
  return;
}

