// name: FUN_0041b630
// address: 0x41b630
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041b630(int param_1)

{
  if (DAT_004785f1 == '\0') {
    FUN_0044ff60((int *)&DAT_0048c384,param_1,s_InitCommonControls_00478977);
    DAT_004785f1 = DAT_004785f1 + '\x01';
  }
  (*DAT_0048c384)();
  return;
}

