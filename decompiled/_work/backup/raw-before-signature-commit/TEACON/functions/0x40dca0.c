// name: FUN_0040dca0
// address: 0x40dca0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * FUN_0040dca0(undefined4 param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  char local_104 [256];
  
  uVar3 = (uint)*(byte *)(param_2 + 7);
  pbVar2 = (byte *)(param_2 + 8);
  FUN_0041ee4c((undefined4 *)local_104,0,(uint)*(byte *)(param_2 + 1));
  for (; *param_3 != 0xff; param_3 = param_3 + 1) {
    local_104[*param_3] = local_104[*param_3] + '\x01';
  }
  do {
    if ((int)uVar3 < 1) {
      return pbVar2;
    }
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 - 1;
  } while (local_104[bVar1] != '\0');
  return (byte *)0x0;
}

