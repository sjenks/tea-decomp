// name: FUN_0041f948
// address: 0x41f948
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0041f948(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0047970c == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c60e,(int)puVar1,s_SymGetSymFromAddr_00479966);
    DAT_0047970c = DAT_0047970c + '\x01';
  }
  uVar2 = (*DAT_0048c60e)();
  return uVar2;
}

