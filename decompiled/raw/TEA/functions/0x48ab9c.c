// name: FUN_0048ab9c
// address: 0x48ab9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0048ab9c(void)

{
  undefined *puVar1;
  
  if (DAT_00504fcb == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b152,(int)puVar1,s_SymLoadModule_00505218);
    DAT_00504fcb = DAT_00504fcb + '\x01';
  }
  (*DAT_0051b152)();
  return;
}

