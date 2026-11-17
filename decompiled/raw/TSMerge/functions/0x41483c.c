// name: FUN_0041483c
// address: 0x41483c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0041483c(void)

{
  undefined *puVar1;
  
  if (DAT_00465955 == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b5a,(int)puVar1,s_SymFunctionTableAccess_00465b7c);
    DAT_00465955 = DAT_00465955 + '\x01';
  }
  (*DAT_00476b5a)();
  return;
}

