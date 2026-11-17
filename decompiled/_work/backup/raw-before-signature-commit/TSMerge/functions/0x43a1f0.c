// name: FUN_0043a1f0
// address: 0x43a1f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043a1f0(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_0043a240((undefined4 *)(param_1 + 8),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x10))();
  } while (cVar1 != '\0');
  return 0;
}

