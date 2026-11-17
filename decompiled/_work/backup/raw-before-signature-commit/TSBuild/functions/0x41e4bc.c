// name: FUN_0041e4bc
// address: 0x41e4bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0041e4bc(void)

{
  if (0x20 < DAT_0048c5d0) {
    if (DAT_004791f0 == '\0') {
      FUN_0044ff60((int *)&DAT_0048c5d5,0x48c5c8,s_OpenThemeData_00479239);
      FUN_0044ff60((int *)&DAT_0048c5d9,0x48c5c8,s_CloseThemeData_00479247);
      FUN_0044ff60((int *)&DAT_0048c5dd,0x48c5c8,s_DrawThemeBackground_00479256);
      DAT_004791f0 = DAT_004791f0 + '\x01';
    }
    return &DAT_0048c5d5;
  }
  return (undefined *)0x0;
}

