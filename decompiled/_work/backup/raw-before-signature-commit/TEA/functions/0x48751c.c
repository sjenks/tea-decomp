// name: FUN_0048751c
// address: 0x48751c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_0048751c(void)

{
  if (DAT_00504514 == '\0') {
    _DAT_0051afcc = 0x94;
    GetVersionExA((LPOSVERSIONINFOA)&DAT_0051afcc);
    DAT_00504514 = DAT_00504514 + '\x01';
  }
  return &DAT_0051afcc;
}

