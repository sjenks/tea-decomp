// name: FUN_0045b42c
// address: 0x45b42c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0045b42c(uint param_1,int param_2)

{
  ushort in_FPUControlWord;
  
  if (param_2 != 0) {
    DAT_00475c2c = param_1;
  }
  return param_1 & param_2 | (uint)in_FPUControlWord & ~param_2;
}

