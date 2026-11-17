// name: FUN_004c3f38
// address: 0x4c3f38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004c3f38(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5a) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x5a) + 2) + *(int *)(param_1 + 0x5a);
  }
  return iVar1;
}

