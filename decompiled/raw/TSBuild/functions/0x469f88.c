// name: FUN_00469f88
// address: 0x469f88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00469f88(int param_1)

{
  if (param_1 < 0) {
    if (-param_1 < DAT_004897f4) {
      _DAT_0048a878 = -param_1;
      _DAT_0048d638 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (param_1 < 299) goto LAB_00469f9e;
  param_1 = 1;
LAB_00469f9e:
  _DAT_0048d638 = param_1;
  _DAT_0048a878 = (int)(char)(&DAT_004895f8)[param_1];
  return 0xffffffff;
}

