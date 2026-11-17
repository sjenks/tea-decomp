// name: FUN_004202d8
// address: 0x4202d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004202d8(short param_1)

{
  if (((param_1 == 1) || (param_1 == 4)) || (param_1 == 8)) {
    return 1 << ((byte)param_1 & 0x1f);
  }
  if (((param_1 != 0x10) && (param_1 != 0x18)) && (param_1 != 0x20)) {
    return -1;
  }
  return 0;
}

