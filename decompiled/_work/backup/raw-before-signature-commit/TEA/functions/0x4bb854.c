// name: FUN_004bb854
// address: 0x4bb854
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004bb854(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *(int *)(param_1 + 8) != 0; param_1 = param_1 + 0xc) {
    iVar1 = iVar1 + *(int *)(param_1 + 8) * *(int *)(param_1 + 4);
  }
  return iVar1;
}

