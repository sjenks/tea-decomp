// name: FUN_00427ccd
// address: 0x427ccd
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00427ccd(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    while (cVar1 = *param_1, param_1 = param_1 + 1, cVar1 != '\0') {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

