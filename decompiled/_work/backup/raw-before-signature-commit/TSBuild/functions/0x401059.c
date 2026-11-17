// name: __GetExceptDLLinfo
// address: 0x401059
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __GetExceptDLLinfo(undefined4 *param_1)

{
                    /* 0x1059  1  __GetExceptDLLinfo */
  _DAT_00488f84 = FUN_00401140();
  _DAT_00488f84 = _DAT_00488f84 + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_00488f70;
  return;
}

