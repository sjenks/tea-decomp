// name: FUN_0041b958
// address: 0x41b958
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_0041b958(void)

{
  if (DAT_00478b84 == '\0') {
    _DAT_0048c484 = 0x94;
    GetVersionExA((LPOSVERSIONINFOA)&DAT_0048c484);
    DAT_00478b84 = DAT_00478b84 + '\x01';
  }
  return &DAT_0048c484;
}

