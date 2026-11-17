// name: FUN_0043a770
// address: 0x43a770
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0043a770(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_0042b294(*param_1);
  cVar1 = FUN_0043b3c8(param_1,'\0');
  if (cVar1 == '\0') {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}

