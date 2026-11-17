// name: FUN_004556fc
// address: 0x4556fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004556fc(void)

{
  DAT_004841a4 = DAT_004841a4 + 1;
  if (DAT_004841a4 < 0x8000) {
    DAT_004841a4 = 0x8000;
  }
  return;
}

