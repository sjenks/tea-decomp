// name: FUN_004b5a64
// address: 0x4b5a64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char __cdecl FUN_004b5a64(int param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_004b5d60((undefined4 *)(param_1 + 8),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      cVar1 = FUN_004b5ab0(param_1,6,param_2 & 0xff,(undefined4 *)0x0);
      return cVar1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x18))();
  } while (cVar1 != '\0');
  return '\0';
}

