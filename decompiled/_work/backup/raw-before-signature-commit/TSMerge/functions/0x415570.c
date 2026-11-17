// name: FUN_00415570
// address: 0x415570
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00415570(void)

{
  undefined *puVar1;
  
  if (DAT_00465eb3 == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c4d,(int)puVar1,s_GetSaveFileNameA_00465f51);
    DAT_00465eb3 = DAT_00465eb3 + '\x01';
  }
  (*DAT_00476c4d)();
  return;
}

