// name: FUN_00410990
// address: 0x410990
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __stdcall FUN_00410990(void)

{
  undefined *puVar1;
  
  if (DAT_00464dd7 == '\0') {
    puVar1 = FUN_00410934();
    DAT_00464dd6 = *(int *)(puVar1 + 0x10) != 0;
    DAT_00464dd7 = DAT_00464dd7 + '\x01';
  }
  return DAT_00464dd6;
}

