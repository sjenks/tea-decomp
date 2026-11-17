// name: FUN_0040da14
// address: 0x40da14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0040da14(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_00434688;
  do {
    *puVar1 = 0xfe;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 10);
  DAT_00434684 = 1;
  return;
}

