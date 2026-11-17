// name: FUN_004e3a5c
// address: 0x4e3a5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004e3a5c(uint param_1,int param_2)

{
  ushort in_FPUControlWord;
  
  if (param_2 != 0) {
    DAT_00518984 = param_1;
  }
  return param_1 & param_2 | (uint)in_FPUControlWord & ~param_2;
}

