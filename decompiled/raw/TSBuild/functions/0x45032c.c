// name: FUN_0045032c
// address: 0x45032c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0045032c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00482c55 == '\0') {
    puVar1 = FUN_00450210();
    FUN_0044ff60((int *)&DAT_0048cd81,(int)puVar1,s_GetMenuStringA_00482d18);
    DAT_00482c55 = DAT_00482c55 + '\x01';
  }
  uVar2 = (*DAT_0048cd81)();
  return uVar2;
}

