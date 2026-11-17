// name: FUN_004b6408
// address: 0x4b6408
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004b6408(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_004a5774(*param_1);
  cVar1 = FUN_004b7060(param_1,'\0');
  if (cVar1 == '\0') {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}

