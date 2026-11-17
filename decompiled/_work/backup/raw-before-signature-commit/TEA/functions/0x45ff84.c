// name: FUN_0045ff84
// address: 0x45ff84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void FUN_0045ff84(char *param_1,byte *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  DAT_0051ac60 = DAT_0051ac60 + 1;
  FUN_004dc844(&DAT_0051a860,0,0x400);
  cVar1 = *param_1;
  pbVar3 = (byte *)(param_1 + 1);
  if ((cVar1 == -0xb) || (cVar1 == -10)) {
    while (0 < param_3) {
      (&DAT_0051a860)[*param_2] = (&DAT_0051a860)[*param_2] + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
    if (cVar1 == -0xb) {
      pbVar4 = (byte *)(param_1 + 2);
      uVar2 = (uint)*pbVar3;
      while (0 < (int)uVar2) {
        (&DAT_0051a860)[*pbVar4] = (&DAT_0051a860)[*pbVar4] + -1;
        pbVar4 = pbVar4 + 1;
        uVar2 = uVar2 - 1;
      }
    }
    else {
      for (; *pbVar3 < 0xf0; pbVar3 = pbVar3 + 2) {
        (&DAT_0051a860)[pbVar3[1]] = (&DAT_0051a860)[pbVar3[1]] - (uint)*pbVar3;
      }
    }
  }
  return;
}

