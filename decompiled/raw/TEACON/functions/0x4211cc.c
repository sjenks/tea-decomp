// name: FUN_004211cc
// address: 0x4211cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004211cc(int param_1)

{
  if (param_1 < 0) {
    if (-param_1 < DAT_004327f8) {
      _DAT_004337d4 = -param_1;
      _DAT_00434e60 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (param_1 < 299) goto LAB_004211e2;
  param_1 = 1;
LAB_004211e2:
  _DAT_00434e60 = param_1;
  _DAT_004337d4 = (int)(char)(&DAT_004325fc)[param_1];
  return 0xffffffff;
}

