// name: FUN_0048ab18
// address: 0x48ab18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0048ab18(void)

{
  undefined *puVar1;
  
  if (DAT_00504fc9 == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b14a,(int)puVar1,s_SymFunctionTableAccess_005051f0);
    DAT_00504fc9 = DAT_00504fc9 + '\x01';
  }
  (*DAT_0051b14a)();
  return;
}

