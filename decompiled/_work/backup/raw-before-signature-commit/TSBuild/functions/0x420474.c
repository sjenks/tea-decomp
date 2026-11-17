// name: FUN_00420474
// address: 0x420474
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00420474(void)

{
  undefined *puVar1;
  
  if (DAT_00479c5f == '\0') {
    puVar1 = FUN_0042041c();
    FUN_0044ff60((int *)&DAT_0048c6d5,(int)puVar1,s_CommDlgExtendedError_00479c7d);
    DAT_00479c5f = DAT_00479c5f + '\x01';
  }
  (*DAT_0048c6d5)();
  return;
}

