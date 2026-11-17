// name: FUN_00457c6c
// address: 0x457c6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00457c6c(int param_1)

{
  if (param_1 < 0) {
    if (-param_1 < DAT_00474dfc) {
      _DAT_00475dd8 = -param_1;
      _DAT_00477b88 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (param_1 < 299) goto LAB_00457c82;
  param_1 = 1;
LAB_00457c82:
  _DAT_00477b88 = param_1;
  _DAT_00475dd8 = (int)(char)(&DAT_00474c0c)[param_1];
  return 0xffffffff;
}

