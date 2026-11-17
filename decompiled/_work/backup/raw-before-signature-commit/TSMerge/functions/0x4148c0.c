// name: FUN_004148c0
// address: 0x4148c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004148c0(void)

{
  undefined *puVar1;
  
  if (DAT_00465957 == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b62,(int)puVar1,s_SymLoadModule_00465ba4);
    DAT_00465957 = DAT_00465957 + '\x01';
  }
  (*DAT_00476b62)();
  return;
}

