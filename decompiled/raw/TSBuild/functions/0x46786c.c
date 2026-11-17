// name: FUN_0046786c
// address: 0x46786c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0046786c(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) {
      return 0;
    }
    bVar1 = *param_1;
    if (bVar1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)(bVar1 < *param_2) | 1;
}

