// name: FUN_0041f8a0
// address: 0x41f8a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0041f8a0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0047970a == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c606,(int)puVar1,s_SymGetModuleInfo_00479947);
    DAT_0047970a = DAT_0047970a + '\x01';
  }
  uVar2 = (*DAT_0048c606)();
  return uVar2;
}

