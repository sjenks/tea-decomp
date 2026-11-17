// name: FUN_0041f860
// address: 0x41f860
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0041f860(void)

{
  undefined *puVar1;
  
  if (DAT_00479709 == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c602,(int)puVar1,s_SymFunctionTableAccess_00479930);
    DAT_00479709 = DAT_00479709 + '\x01';
  }
  (*DAT_0048c602)();
  return;
}

