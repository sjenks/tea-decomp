// name: FUN_004559b0
// address: 0x4559b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

short * __cdecl FUN_004559b0(short *param_1,short param_2,int param_3)

{
  short *psVar1;
  undefined1 in_ZF;
  
  if (param_3 != 0) {
    do {
      psVar1 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      psVar1 = param_1 + 1;
      in_ZF = param_2 == *param_1;
      param_1 = psVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return psVar1 + -1;
    }
  }
  return (short *)0x0;
}

