// name: FUN_004e91c2
// address: 0x4e91c2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004e91c2(int param_1)

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
  iVar1 = FUN_004dcb2c((byte *)(iVar1 + -8),(byte *)s___BCCxh1_0051984f,8);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(param_1 + 0x10);
}

