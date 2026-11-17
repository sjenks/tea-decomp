// name: FUN_00421244
// address: 0x421244
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00421244(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_00432078;
  iVar2 = 0x32;
  while (iVar2 != 0) {
    if ((*(ushort *)((int)piVar1 + 0x12) & 0x300) == 0x300) {
      FUN_0042088c(piVar1);
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return;
}

