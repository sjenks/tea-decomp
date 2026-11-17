// name: FUN_0041f8e4
// address: 0x41f8e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0041f8e4(void)

{
  undefined *puVar1;
  
  if (DAT_0047970b == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c60a,(int)puVar1,s_SymLoadModule_00479958);
    DAT_0047970b = DAT_0047970b + '\x01';
  }
  (*DAT_0048c60a)();
  return;
}

