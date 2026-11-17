// name: FUN_0046a000
// address: 0x46a000
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0046a000(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_00489074;
  iVar2 = 0x32;
  while (iVar2 != 0) {
    if ((*(ushort *)((int)piVar1 + 0x12) & 0x300) == 0x300) {
      FUN_00469598(piVar1);
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return;
}

