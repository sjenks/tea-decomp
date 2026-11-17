// name: FUN_0048c474
// address: 0x48c474
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0048c474(void)

{
  undefined *puVar1;
  
  if (DAT_005057df == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b23d,(int)puVar1,s_GetSaveFileNameA_0050587d);
    DAT_005057df = DAT_005057df + '\x01';
  }
  (*DAT_0051b23d)();
  return;
}

