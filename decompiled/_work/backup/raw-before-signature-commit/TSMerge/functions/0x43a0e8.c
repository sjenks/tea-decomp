// name: FUN_0043a0e8
// address: 0x43a0e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0043a0e8(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    piVar3 = (int *)0x0;
    do {
      piVar3 = (int *)FUN_0043a240((undefined4 *)(param_1 + 8),(int)piVar3);
      if (piVar3 == (int *)0x0) {
        puVar2 = FUN_0043a048(param_1,7,0,(undefined4 *)0x0);
        return puVar2 != (undefined4 *)0x0;
      }
      cVar1 = (**(code **)(*piVar3 + 0x28))();
    } while (cVar1 == '\0');
  }
  return true;
}

