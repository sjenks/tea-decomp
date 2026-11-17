// name: FUN_0041f998
// address: 0x41f998
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0041f998(void)

{
  undefined *puVar1;
  
  if (DAT_0047970d == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c612,(int)puVar1,s_UnDecorateSymbolName_00479978);
    DAT_0047970d = DAT_0047970d + '\x01';
  }
  (*DAT_0048c612)();
  return;
}

