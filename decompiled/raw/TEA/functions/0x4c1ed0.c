// name: FUN_004c1ed0
// address: 0x4c1ed0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004c1ed0(void)

{
  undefined *puVar1;
  
  if (DAT_00510007 == '\0') {
    puVar1 = FUN_004c1e30();
    FUN_004c1b80((int *)&DAT_0051b8ed,(int)puVar1,s_DestroyIcon_005100e8);
    DAT_00510007 = DAT_00510007 + '\x01';
  }
  (*DAT_0051b8ed)();
  return;
}

