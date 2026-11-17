// name: FUN_0041060c
// address: 0x41060c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041060c(int param_1)

{
  if (DAT_0046483d == '\0') {
    FUN_00444dcc((int *)&DAT_004768dc,param_1,s_InitCommonControls_00464bc3);
    DAT_0046483d = DAT_0046483d + '\x01';
  }
  (*DAT_004768dc)();
  return;
}

