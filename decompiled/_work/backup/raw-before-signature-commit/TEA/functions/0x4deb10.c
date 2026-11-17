// name: FUN_004deb10
// address: 0x4deb10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004deb10(LPCSTR param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = FUN_004deae4();
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_004dea38(piVar1,param_1,param_2,0);
  }
  return piVar2;
}

