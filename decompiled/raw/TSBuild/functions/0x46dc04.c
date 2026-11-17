// name: FUN_0046dc04
// address: 0x46dc04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0046dc04(uint param_1,int param_2)

{
  ushort in_FPUControlWord;
  
  if (param_2 != 0) {
    DAT_0048a634 = param_1;
  }
  return param_1 & param_2 | (uint)in_FPUControlWord & ~param_2;
}

