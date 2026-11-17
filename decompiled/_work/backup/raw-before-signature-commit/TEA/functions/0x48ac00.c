// name: FUN_0048ac00
// address: 0x48ac00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0048ac00(void)

{
  undefined *puVar1;
  
  if (DAT_00504fcc == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b156,(int)puVar1,s_SymGetSymFromAddr_00505226);
    DAT_00504fcc = DAT_00504fcc + '\x01';
  }
  (*DAT_0051b156)();
  return;
}

