// name: FUN_0045f860
// address: 0x45f860
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * FUN_0045f860(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  uVar2 = (uint)*param_2;
  pbVar5 = param_2 + 1;
  do {
    uVar3 = uVar2 - 1;
    if ((int)uVar2 < 1) {
      return pbVar5;
    }
    pbVar4 = pbVar5 + 1;
    bVar1 = *pbVar5;
    uVar2 = uVar3;
    pbVar5 = pbVar4;
  } while ((*(char *)(param_3 + (uint)bVar1) != '\0') ||
          (bVar6 = param_4 < 0, param_4 = param_4 + 1, bVar6));
  return (byte *)0x0;
}

