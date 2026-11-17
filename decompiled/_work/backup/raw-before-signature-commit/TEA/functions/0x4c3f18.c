// name: FUN_004c3f18
// address: 0x4c3f18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004c3f18(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5a) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uint)**(ushort **)(param_1 + 0x5a) + *(int *)(param_1 + 0x5a);
  }
  return iVar1;
}

