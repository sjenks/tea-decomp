// name: FUN_0042c828
// address: 0x42c828
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0042c828(int param_1)

{
  if ((((*(uint *)(param_1 + 0x5c) & 0xf0000000) == 0x80000000) &&
      (*(int *)(param_1 + 0x5c) != DAT_00476bac)) && (*(int *)(param_1 + 0x5c) != DAT_00476bb0)) {
    FUN_00457ef4(&DAT_0047705d,(byte *)s__s__X_0046a4c8);
    return &DAT_0047705d;
  }
  return s_OWL_Window_0046a402;
}

