// name: FUN_00410934
// address: 0x410934
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_00410934(void)

{
  if (DAT_00464dd0 == '\0') {
    _DAT_004769dc = 0x94;
    GetVersionExA((LPOSVERSIONINFOA)&DAT_004769dc);
    DAT_00464dd0 = DAT_00464dd0 + '\x01';
  }
  return &DAT_004769dc;
}

