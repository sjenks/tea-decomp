// name: FUN_0041acb0
// address: 0x41acb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041acb0(char param_1)

{
  if (DAT_00477e78 == '\0') {
    if (param_1 == '\0') {
      DAT_00477e74 = FUN_00419d5c();
    }
    else {
      DAT_00477e74 = 1;
    }
    DAT_00477e78 = DAT_00477e78 + '\x01';
  }
  return DAT_00477e74;
}

