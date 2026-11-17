// name: FUN_0041f9e8
// address: 0x41f9e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0041f9e8(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0047970e == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c616,(int)puVar1,s_SymUnDName_0047998d);
    DAT_0047970e = DAT_0047970e + '\x01';
  }
  uVar2 = (*DAT_0048c616)();
  return uVar2;
}

