// name: FUN_0040dd14
// address: 0x40dd14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * FUN_0040dd14(undefined4 param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte local_104 [256];
  
  pbVar1 = (byte *)(param_2 + 6);
  FUN_0041ee4c((undefined4 *)local_104,0,(uint)*(byte *)(param_2 + 1));
  for (; *param_3 != 0xff; param_3 = param_3 + 1) {
    local_104[*param_3] = local_104[*param_3] + 1;
  }
  do {
    pbVar2 = pbVar1 + 1;
    pbVar1 = pbVar1 + 2;
    if (0xef < *pbVar2) {
      return pbVar1;
    }
  } while (*pbVar2 <= local_104[*pbVar1]);
  return (byte *)0x0;
}

