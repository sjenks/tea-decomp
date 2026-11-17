// name: FUN_004379bc
// address: 0x4379bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004379bc(int param_1)

{
  if ((((*(uint *)(param_1 + 0x5c) & 0xf0000000) == 0x80000000) &&
      (*(int *)(param_1 + 0x5c) != DAT_0048c654)) && (*(int *)(param_1 + 0x5c) != DAT_0048c658)) {
    FUN_0046a5c8(&DAT_0048cb05,(byte *)s__s__X_0047e2a4);
    return &DAT_0048cb05;
  }
  return s_OWL_Window_0047e1de;
}

