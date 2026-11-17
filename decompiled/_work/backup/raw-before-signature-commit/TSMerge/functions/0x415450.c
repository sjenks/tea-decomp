// name: FUN_00415450
// address: 0x415450
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00415450(void)

{
  undefined *puVar1;
  
  if (DAT_00465eab == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c2d,(int)puVar1,s_CommDlgExtendedError_00465ec9);
    DAT_00465eab = DAT_00465eab + '\x01';
  }
  (*DAT_00476c2d)();
  return;
}

