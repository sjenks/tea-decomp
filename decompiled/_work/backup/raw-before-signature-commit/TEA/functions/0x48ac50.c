// name: FUN_0048ac50
// address: 0x48ac50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0048ac50(void)

{
  undefined *puVar1;
  
  if (DAT_00504fcd == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b15a,(int)puVar1,s_UnDecorateSymbolName_00505238);
    DAT_00504fcd = DAT_00504fcd + '\x01';
  }
  (*DAT_0051b15a)();
  return;
}

