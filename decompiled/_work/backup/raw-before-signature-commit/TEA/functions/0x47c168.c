// name: FUN_0047c168
// address: 0x47c168
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0047c168(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_0050171c;
  while( true ) {
    if (*piVar1 == 0) {
      return 0;
    }
    if (param_1 == piVar1[1]) break;
    piVar1 = piVar1 + 3;
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),(char)piVar1[2]);
}

