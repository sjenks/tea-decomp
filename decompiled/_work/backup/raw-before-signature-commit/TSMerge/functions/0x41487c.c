// name: FUN_0041487c
// address: 0x41487c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0041487c(void)

{
  undefined *puVar1;
  
  if (DAT_00465956 == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b5e,(int)puVar1,s_SymGetModuleInfo_00465b93);
    DAT_00465956 = DAT_00465956 + '\x01';
  }
  (*DAT_00476b5e)();
  return;
}

