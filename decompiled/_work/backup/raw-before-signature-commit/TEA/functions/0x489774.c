// name: FUN_00489774
// address: 0x489774
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_00489774(void)

{
  if (0x20 < DAT_0051b118) {
    if (DAT_00504ab0 == '\0') {
      FUN_004c1b80((int *)&DAT_0051b11d,0x51b110,s_OpenThemeData_00504af9);
      FUN_004c1b80((int *)&DAT_0051b121,0x51b110,s_CloseThemeData_00504b07);
      FUN_004c1b80((int *)&DAT_0051b125,0x51b110,s_DrawThemeBackground_00504b16);
      DAT_00504ab0 = DAT_00504ab0 + '\x01';
    }
    return &DAT_0051b11d;
  }
  return (undefined *)0x0;
}

