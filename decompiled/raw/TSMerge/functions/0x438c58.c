// name: FUN_00438c58
// address: 0x438c58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00438c58(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_0043a240((undefined4 *)(param_1 + 0x14),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x30))();
  } while (cVar1 != '\0');
  return 0;
}

