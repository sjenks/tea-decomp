// name: FUN_00472fe6
// address: 0x472fe6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00472fe6(int param_1)

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
  iVar1 = FUN_004678d8((byte *)(iVar1 + -8),(byte *)s___BCCxh1_0048b333,8);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(param_1 + 0x10);
}

