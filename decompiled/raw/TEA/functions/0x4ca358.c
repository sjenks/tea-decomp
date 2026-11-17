// name: FUN_004ca358
// address: 0x4ca358
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004ca358(void)

{
  DAT_00511ff8 = DAT_00511ff8 + 1;
  if (DAT_00511ff8 < 0x8000) {
    DAT_00511ff8 = 0x8000;
  }
  return;
}

