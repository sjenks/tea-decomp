// name: FUN_00460272
// address: 0x460272
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00460272(int param_1)

{
  int iVar1;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  if (**(short **)(param_1 + 4) == 0x25ff) {
    iVar1 = **(int **)(*(int *)(param_1 + 4) + 2);
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
  }
  iVar1 = FUN_00455cf4((byte *)(iVar1 + -8),(byte *)s___BCCxh1_00476893,8);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(param_1 + 0x10);
}

