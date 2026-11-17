// name: FUN_00468b50
// address: 0x468b50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00468b50(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_0051ac68;
  do {
    *puVar1 = 0xfe;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 10);
  DAT_0051ac64 = 1;
  return;
}

