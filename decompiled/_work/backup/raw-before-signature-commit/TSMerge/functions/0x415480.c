// name: FUN_00415480
// address: 0x415480
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00415480(void)

{
  undefined *puVar1;
  
  if (DAT_00465eac == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c31,(int)puVar1,s_FindTextA_00465ef7);
    DAT_00465eac = DAT_00465eac + '\x01';
  }
  (*DAT_00476c31)();
  return;
}

