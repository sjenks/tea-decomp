// name: FUN_00445198
// address: 0x445198
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00445198(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0046ee79 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772d9,(int)puVar1,s_GetMenuStringA_0046ef3c);
    DAT_0046ee79 = DAT_0046ee79 + '\x01';
  }
  uVar2 = (*DAT_004772d9)();
  return uVar2;
}

