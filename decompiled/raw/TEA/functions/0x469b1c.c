// name: FUN_00469b1c
// address: 0x469b1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00469b1c(char param_1)

{
  if (DAT_004fcbec == '\0') {
    if (param_1 == '\0') {
      DAT_004fcbe8 = FUN_00468bc8();
    }
    else {
      DAT_004fcbe8 = 1;
    }
    DAT_004fcbec = DAT_004fcbec + '\x01';
  }
  return DAT_004fcbe8;
}

