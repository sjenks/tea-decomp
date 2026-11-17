// name: FUN_0045c448
// address: 0x45c448
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045c448(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 <= iVar2) break;
    if (param_2 == *(int *)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x6b4)) + 8)) {
      if ((param_3 == 1) && (iVar2 != *(int *)(param_1 + 0x6d0))) {
        (**(code **)(*(int *)(**(int **)(*(int *)(*(int *)(param_1 + 0x6d0) * 4 +
                                                 *(int *)(param_1 + 0x6b4)) + 4) + 8) + 0x68))();
        *(int *)(param_1 + 0x6d0) = iVar2;
        (**(code **)(*(int *)(**(int **)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x6b4)) + 4) + 8) +
                    0x68))();
        if (*(int *)(param_1 + 100) != 2) {
          FUN_0045c6d4(param_1,*(int *)(param_1 + 100));
        }
      }
      else {
        (**(code **)(*(int *)(**(int **)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x6b4)) + 4) + 8) +
                    0x68))();
      }
      return;
    }
    iVar2 = iVar2 + 1;
  }
  return;
}

