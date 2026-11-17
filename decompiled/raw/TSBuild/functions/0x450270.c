// name: FUN_00450270
// address: 0x450270
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00450270(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00482c52 == '\0') {
    puVar1 = FUN_00450210();
    FUN_0044ff60((int *)&DAT_0048cd75,(int)puVar1,s_LoadIconA_00482d00);
    DAT_00482c52 = DAT_00482c52 + '\x01';
  }
  uVar2 = (*DAT_0048cd75)();
  return uVar2;
}

