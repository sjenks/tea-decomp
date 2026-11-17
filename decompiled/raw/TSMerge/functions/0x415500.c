// name: FUN_00415500
// address: 0x415500
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00415500(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465eae == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c39,(int)puVar1,s_GetOpenFileNameA_00465f0f);
    DAT_00465eae = DAT_00465eae + '\x01';
  }
  uVar2 = (*DAT_00476c39)();
  return uVar2;
}

