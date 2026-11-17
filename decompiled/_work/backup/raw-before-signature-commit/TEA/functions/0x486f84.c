// name: FUN_00486f84
// address: 0x486f84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00486f84(void)

{
  undefined *puVar1;
  
  if (DAT_00503eea == '\0') {
    puVar1 = FUN_004870d0();
    FUN_004c1b80((int *)&DAT_0051af54,(int)puVar1,s_ImageList_LoadImageA_0050420d);
    DAT_00503eea = DAT_00503eea + '\x01';
  }
  (*DAT_0051af54)();
  return;
}

