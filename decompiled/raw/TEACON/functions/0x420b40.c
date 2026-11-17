// name: FUN_00420b40
// address: 0x420b40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00420b40(LPCSTR param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = FUN_00420b14();
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_00420a68(piVar1,param_1,param_2,0);
  }
  return piVar2;
}

