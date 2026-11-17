// name: FUN_004149c4
// address: 0x4149c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004149c4(void)

{
  undefined *puVar1;
  
  if (DAT_0046595a == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b6e,(int)puVar1,s_SymUnDName_00465bd9);
    DAT_0046595a = DAT_0046595a + '\x01';
  }
  (*DAT_00476b6e)();
  return;
}

