// name: FUN_0047c140
// address: 0x47c140
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0047c140(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    uVar2 = uVar2 << 3 ^ (int)cVar1;
  }
  return uVar2 % 0x209;
}

