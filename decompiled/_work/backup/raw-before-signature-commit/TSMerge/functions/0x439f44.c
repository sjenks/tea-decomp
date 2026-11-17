// name: FUN_00439f44
// address: 0x439f44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char __cdecl FUN_00439f44(int param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_0043a240((undefined4 *)(param_1 + 8),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      cVar1 = FUN_00439f90(param_1,6,param_2 & 0xff,(undefined4 *)0x0);
      return cVar1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x18))();
  } while (cVar1 != '\0');
  return '\0';
}

