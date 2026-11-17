// name: FUN_0041f178
// address: 0x41f178
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0041f178(char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    uVar1 = FUN_0042428c((int)*param_1);
    uVar2 = FUN_0042428c((int)*param_2);
    if (((char)uVar1 != (char)uVar2) || ((char)uVar1 == '\0')) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uVar1 & 0xff) - (uVar2 & 0xff);
}

