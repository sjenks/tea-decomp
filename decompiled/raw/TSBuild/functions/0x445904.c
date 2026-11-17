// name: FUN_00445904
// address: 0x445904
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00445904(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_00436428(*param_1);
  cVar1 = FUN_0044655c(param_1,'\0');
  if (cVar1 == '\0') {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}

