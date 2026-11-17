// name: FUN_004a7590
// address: 0x4a7590
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004a7590(int param_1,undefined *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x7a) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
    do {
      iVar1 = *(int *)(iVar3 + 0x7e);
      cVar2 = (*(code *)param_2)();
      if (cVar2 != '\0') {
        return iVar3;
      }
    } while ((iVar3 != *(int *)(param_1 + 0x7a)) && (iVar3 = iVar1, *(int *)(param_1 + 0x7a) != 0));
  }
  return 0;
}

