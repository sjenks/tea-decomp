// name: FUN_0042055c
// address: 0x42055c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0042055c(void)

{
  undefined *puVar1;
  
  if (DAT_00479c66 == '\0') {
    puVar1 = FUN_0042041c();
    FUN_0044ff60((int *)&DAT_0048c6f1,(int)puVar1,s_ReplaceTextA_00479cf8);
    DAT_00479c66 = DAT_00479c66 + '\x01';
  }
  (*DAT_0048c6f1)();
  return;
}

