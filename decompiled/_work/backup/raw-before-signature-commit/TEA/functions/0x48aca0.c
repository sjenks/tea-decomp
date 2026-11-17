// name: FUN_0048aca0
// address: 0x48aca0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0048aca0(void)

{
  undefined *puVar1;
  
  if (DAT_00504fce == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b15e,(int)puVar1,s_SymUnDName_0050524d);
    DAT_00504fce = DAT_00504fce + '\x01';
  }
  (*DAT_0051b15e)();
  return;
}

