// name: FUN_004dcbf8
// address: 0x4dcbf8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004dcbf8(char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    uVar1 = FUN_004e3054((int)*param_1);
    uVar2 = FUN_004e3054((int)*param_2);
    if (((char)uVar1 != (char)uVar2) || ((char)uVar1 == '\0')) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uVar1 & 0xff) - (uVar2 & 0xff);
}

