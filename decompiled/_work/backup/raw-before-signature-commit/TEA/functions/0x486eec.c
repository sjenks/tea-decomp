// name: FUN_00486eec
// address: 0x486eec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00486eec(int param_1)

{
  if (DAT_00503eb9 == '\0') {
    FUN_004c1b80((int *)&DAT_0051aecc,param_1,s_InitCommonControls_0050423f);
    DAT_00503eb9 = DAT_00503eb9 + '\x01';
  }
  (*DAT_0051aecc)();
  return;
}

