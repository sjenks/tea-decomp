// name: FUN_00422750
// address: 0x422750
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

ushort __cdecl FUN_00422750(uint param_1,ushort param_2)

{
  if (0xff < param_1) {
    return 0;
  }
  if ((*(int *)(PTR_DAT_0043330c + 8) == 0) && (*(int *)(PTR_DAT_0043330c + 0x10) != 0)) {
    return param_2 & *(ushort *)(*(int *)(PTR_DAT_0043330c + 0x10) + 2 + param_1 * 2);
  }
  return *(ushort *)(&DAT_00432c2a + (short)param_1 * 2) & param_2;
}

