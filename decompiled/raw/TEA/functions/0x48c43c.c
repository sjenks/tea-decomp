// name: FUN_0048c43c
// address: 0x48c43c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0048c43c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057de == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b239,(int)puVar1,s_ReplaceTextA_00505870);
    DAT_005057de = DAT_005057de + '\x01';
  }
  uVar2 = (*DAT_0051b239)();
  return uVar2;
}

