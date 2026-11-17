// name: FUN_0040e5b4
// address: 0x40e5b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int FUN_0040e5b4(undefined4 param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte local_11;
  
  pbVar5 = (byte *)(param_2 + param_4);
  while ((param_4 < 10 &&
         ((local_11 = *pbVar5, local_11 == 0 || (pcVar1 = FUN_0040d9c8(param_4), *pcVar1 != -2)))))
  {
    param_4 = param_4 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_4 < 10) {
    for (pbVar5 = param_3; pbVar5 < param_3 + param_6; pbVar5 = pbVar5 + 1) {
      if (*pbVar5 != 0) {
        iVar2 = FUN_0040d9e4((char)pbVar5 - (char)param_3);
        if (iVar2 == 0) {
          iVar2 = (uint)local_11 - (uint)*pbVar5;
          if (iVar2 < 1) {
            *pbVar5 = *pbVar5 - local_11;
          }
          else {
            if (0 < param_5 + iVar2) goto LAB_0040e6c2;
            param_5 = param_5 + iVar2;
            *pbVar5 = 0;
          }
          pcVar1 = FUN_0040d9c8(param_4);
          *pcVar1 = (char)pbVar5 - (char)param_3;
          iVar3 = FUN_0040e5b4(param_1,param_2,param_3,param_4 + 1,param_5,param_6);
          puVar4 = FUN_0040d9c8(param_4);
          *puVar4 = 0xfe;
          *pbVar5 = local_11 - (char)iVar2;
          if (0 < iVar2) {
            param_5 = param_5 - iVar2;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
      }
LAB_0040e6c2:
    }
    if ((int)(param_5 + (uint)local_11) < 1) {
      iVar2 = FUN_0040e5b4(param_1,param_2,param_3,param_4 + 1,param_5 + (uint)local_11,param_6);
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = (*(code *)(&PTR_FUN_0042c990)[*(byte *)(param_2 + 10)])
                      (param_1,param_2 + 0xb,param_3,param_5,param_6);
  }
  return iVar2;
}

