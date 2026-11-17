// name: FUN_00455eac
// address: 0x455eac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00455eac(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

