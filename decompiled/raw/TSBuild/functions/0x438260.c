// name: FUN_00438260
// address: 0x438260
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438260(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7a) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
    do {
      iVar1 = *(int *)(iVar2 + 0x7e);
      (*(code *)param_2)();
      if (iVar2 == *(int *)(param_1 + 0x7a)) {
        return;
      }
      iVar2 = iVar1;
    } while (*(int *)(param_1 + 0x7a) != 0);
  }
  return;
}

