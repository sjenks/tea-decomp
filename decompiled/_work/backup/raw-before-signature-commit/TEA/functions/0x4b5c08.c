// name: FUN_004b5c08
// address: 0x4b5c08
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004b5c08(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    piVar3 = (int *)0x0;
    do {
      piVar3 = (int *)FUN_004b5d60((undefined4 *)(param_1 + 8),(int)piVar3);
      if (piVar3 == (int *)0x0) {
        puVar2 = FUN_004b5b68(param_1,7,0,(undefined4 *)0x0);
        return puVar2 != (undefined4 *)0x0;
      }
      cVar1 = (**(code **)(*piVar3 + 0x28))();
    } while (cVar1 == '\0');
  }
  return true;
}

