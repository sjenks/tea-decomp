// name: FUN_004a6d08
// address: 0x4a6d08
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004a6d08(int param_1)

{
  if ((((*(uint *)(param_1 + 0x5c) & 0xf0000000) == 0x80000000) &&
      (*(int *)(param_1 + 0x5c) != DAT_0051b19c)) && (*(int *)(param_1 + 0x5c) != DAT_0051b1a0)) {
    FUN_004e0344(&DAT_0051b659,(byte *)s__s__X_0050ace8);
    return &DAT_0051b659;
  }
  return s_OWL_Window_0050ac22;
}

