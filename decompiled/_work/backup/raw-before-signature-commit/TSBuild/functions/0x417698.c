// name: FUN_00417698
// address: 0x417698
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00417698(byte *param_1,int param_2,byte *param_3,int param_4)

{
  uint in_ECX;
  undefined4 uStack_8;
  
  uStack_8 = in_ECX;
  while( true ) {
    while ((param_2 != 0 &&
           (in_ECX = (uint)(byte)(&DAT_00477368)[*param_1], (&DAT_00477368)[*param_1] == 0))) {
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    }
    while ((param_4 != 0 &&
           (uStack_8 = (uint)(byte)(&DAT_00477368)[*param_3] << 0x18, (&DAT_00477368)[*param_3] == 0
           ))) {
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    }
    if ((param_2 == 0) || (param_4 == 0)) break;
    if ((byte)in_ECX != uStack_8._3_1_) {
      return (in_ECX & 0xff) - (uint)uStack_8._3_1_;
    }
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
    param_3 = param_3 + 1;
  }
  if (param_2 != 0) {
    return 1;
  }
  if (param_4 == 0) {
    return 0;
  }
  return -1;
}

