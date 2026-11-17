// name: FUN_004df280
// address: 0x4df280
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004df280(int param_1)

{
  if (param_1 < 0) {
    if (-param_1 < DAT_00517ac0) {
      _DAT_00518bd0 = -param_1;
      _DAT_0051c1c0 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (param_1 < 299) goto LAB_004df296;
  param_1 = 1;
LAB_004df296:
  _DAT_0051c1c0 = param_1;
  _DAT_00518bd0 = (int)(char)(&DAT_005178c4)[param_1];
  return 0xffffffff;
}

