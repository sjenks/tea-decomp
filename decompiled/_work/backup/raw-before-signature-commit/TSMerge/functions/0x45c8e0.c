// name: FUN_0045c8e0
// address: 0x45c8e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045c8e0(int *param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)*param_1;
  *param_1 = *param_1 + 1;
  iVar2 = (int)*pcVar1;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  return iVar2;
}

