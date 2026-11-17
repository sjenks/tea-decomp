// name: FUN_0048c394
// address: 0x48c394
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0048c394(void)

{
  undefined *puVar1;
  
  if (DAT_005057db == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b22d,(int)puVar1,s_PageSetupDlgA_0050584c);
    DAT_005057db = DAT_005057db + '\x01';
  }
  (*DAT_0051b22d)();
  return;
}

