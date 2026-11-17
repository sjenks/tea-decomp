// name: FUN_00415538
// address: 0x415538
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00415538(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465eb2 == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c49,(int)puVar1,s_ReplaceTextA_00465f44);
    DAT_00465eb2 = DAT_00465eb2 + '\x01';
  }
  uVar2 = (*DAT_00476c49)();
  return uVar2;
}

