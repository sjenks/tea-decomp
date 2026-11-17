// name: FUN_004502b0
// address: 0x4502b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004502b0(void)

{
  undefined *puVar1;
  
  if (DAT_00482c53 == '\0') {
    puVar1 = FUN_00450210();
    FUN_0044ff60((int *)&DAT_0048cd79,(int)puVar1,s_DestroyIcon_00482d34);
    DAT_00482c53 = DAT_00482c53 + '\x01';
  }
  (*DAT_0048cd79)();
  return;
}

