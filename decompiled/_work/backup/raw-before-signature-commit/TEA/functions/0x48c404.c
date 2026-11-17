// name: FUN_0048c404
// address: 0x48c404
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0048c404(void)

{
  undefined *puVar1;
  
  if (DAT_005057dd == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b235,(int)puVar1,s_PrintDlgA_0050585a);
    DAT_005057dd = DAT_005057dd + '\x01';
  }
  (*DAT_0051b235)();
  return;
}

