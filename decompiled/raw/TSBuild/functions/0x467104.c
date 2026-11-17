// name: FUN_00467104
// address: 0x467104
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00467104(char *param_1,UINT param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 local_28;
  
  bVar7 = 0;
  FUN_00467ba8(0x48895c);
  pcVar5 = PTR_s_Error_004888f0;
  pbVar4 = (byte *)0x0;
  if (DAT_004888f4 == (int *)0x0) {
    DAT_004888f4 = FUN_004652a4(s_rwstderr_00488948);
  }
  if (DAT_004888f4 != (int *)0x0) {
    pbVar4 = (byte *)FUN_004653b0((int)DAT_004888f4,1,param_2,pcVar5);
  }
  if (pbVar4 == (byte *)0x0) {
    uVar2 = 0xffffffff;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar6 + -uVar2;
    pcVar6 = param_1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
      pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    }
  }
  else {
    FUN_0046a5f0(param_1,pbVar4,(uint *)&stack0x0000000c);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

