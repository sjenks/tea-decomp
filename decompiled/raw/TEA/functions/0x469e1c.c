// name: FUN_00469e1c
// address: 0x469e1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00469e1c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte local_5;
  
  pbVar4 = *(byte **)(param_1 + 8);
  pbVar5 = *(byte **)(param_2 + 8);
  *param_3 = 0;
  do {
    while ((local_5 = *pbVar4, local_5 != 0 && (iVar1 = FUN_0043c6d4(local_5), iVar1 == 0))) {
      pbVar4 = pbVar4 + 1;
    }
    while ((bVar3 = *pbVar5, bVar3 != 0 && (iVar1 = FUN_0043c6d4(bVar3), iVar1 == 0))) {
      pbVar5 = pbVar5 + 1;
    }
    if (local_5 == 0) {
      if (bVar3 == 0) {
        return 0;
      }
      return -1;
    }
    if (bVar3 == 0) {
      return 1;
    }
    if ((((char)local_5 < '1') || ('9' < (char)local_5)) &&
       (((char)bVar3 < '1' || ('9' < (char)bVar3)))) {
      if ((&DAT_004f50d8)[local_5] != '\0') {
        local_5 = (&DAT_004f50d8)[local_5];
      }
      if ((&DAT_004f50d8)[bVar3] != '\0') {
        bVar3 = (&DAT_004f50d8)[bVar3];
      }
      if (bVar3 != local_5) {
        return (int)(char)local_5 - (int)(char)bVar3;
      }
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    }
    else {
      iVar1 = FUN_004e39d0((char *)pbVar4);
      iVar2 = FUN_004e39d0((char *)pbVar5);
      if (iVar1 - iVar2 != 0) {
        return iVar1 - iVar2;
      }
      do {
        pbVar4 = pbVar4 + 1;
        if ((char)*pbVar4 < '0') break;
      } while ((char)*pbVar4 < ':');
      do {
        pbVar5 = pbVar5 + 1;
        if ((char)*pbVar5 < '0') break;
      } while ((char)*pbVar5 < ':');
    }
    *param_3 = *param_3 + 1;
  } while( true );
}

