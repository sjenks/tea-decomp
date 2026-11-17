// name: FUN_004450dc
// address: 0x4450dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004450dc(void)

{
  undefined *puVar1;
  
  if (DAT_0046ee76 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772cd,(int)puVar1,s_LoadIconA_0046ef24);
    DAT_0046ee76 = DAT_0046ee76 + '\x01';
  }
  (*DAT_004772cd)();
  return;
}

