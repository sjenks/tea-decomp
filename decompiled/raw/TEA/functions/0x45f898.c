// name: FUN_0045f898
// address: 0x45f898
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * FUN_0045f898(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  
  while( true ) {
    bVar1 = *param_2;
    if (0xef < bVar1) {
      return param_2;
    }
    if ((*(byte *)(param_3 + (uint)param_2[1]) < bVar1) &&
       (param_4 = param_4 + ((uint)bVar1 - (uint)*(byte *)(param_3 + (uint)param_2[1])), 0 < param_4
       )) break;
    param_2 = param_2 + 2;
  }
  return (byte *)0x0;
}

