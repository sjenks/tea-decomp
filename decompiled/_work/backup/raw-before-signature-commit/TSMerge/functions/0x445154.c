// name: FUN_00445154
// address: 0x445154
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00445154(void)

{
  undefined *puVar1;
  
  if (DAT_0046ee78 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772d5,(int)puVar1,s_GetClassInfoA_0046ef2e);
    DAT_0046ee78 = DAT_0046ee78 + '\x01';
  }
  (*DAT_004772d5)();
  return;
}

