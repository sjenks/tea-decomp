// name: FUN_0040fc8c
// address: 0x40fc8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0040fc8c(char param_1)

{
  if (DAT_004640c4 == '\0') {
    if (param_1 == '\0') {
      DAT_004640c0 = FUN_0040edc8();
    }
    else {
      DAT_004640c0 = 1;
    }
    DAT_004640c4 = DAT_004640c4 + '\x01';
  }
  return DAT_004640c0;
}

