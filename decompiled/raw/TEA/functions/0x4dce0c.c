// name: FUN_004dce0c
// address: 0x4dce0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004dce0c(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

