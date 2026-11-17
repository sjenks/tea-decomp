// name: FUN_0048c2dc
// address: 0x48c2dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0048c2dc(void)

{
  undefined *puVar1;
  
  if (DAT_005057d8 == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b221,(int)puVar1,s_FindTextA_00505823);
    DAT_005057d8 = DAT_005057d8 + '\x01';
  }
  (*DAT_0051b221)();
  return;
}

