// name: FUN_0043c6d4
// address: 0x43c6d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043c6d4(byte param_1)

{
  undefined4 uVar1;
  
  if (((&DAT_004f50d8)[param_1] == '\0') && ((param_1 < 0x30 || (0x39 < param_1)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

