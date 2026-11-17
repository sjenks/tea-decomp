// name: FUN_0044511c
// address: 0x44511c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0044511c(void)

{
  undefined *puVar1;
  
  if (DAT_0046ee77 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772d1,(int)puVar1,s_DestroyIcon_0046ef58);
    DAT_0046ee77 = DAT_0046ee77 + '\x01';
  }
  (*DAT_004772d1)();
  return;
}

