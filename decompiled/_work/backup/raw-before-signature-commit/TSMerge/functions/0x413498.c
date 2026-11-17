// name: FUN_00413498
// address: 0x413498
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_00413498(void)

{
  if (0x20 < DAT_00476b28) {
    if (DAT_0046543c == '\0') {
      FUN_00444dcc((int *)&DAT_00476b2d,0x476b20,s_OpenThemeData_00465485);
      FUN_00444dcc((int *)&DAT_00476b31,0x476b20,s_CloseThemeData_00465493);
      FUN_00444dcc((int *)&DAT_00476b35,0x476b20,s_DrawThemeBackground_004654a2);
      DAT_0046543c = DAT_0046543c + '\x01';
    }
    return &DAT_00476b2d;
  }
  return (undefined *)0x0;
}

