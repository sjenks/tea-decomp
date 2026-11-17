// name: FUN_0045fb68
// address: 0x45fb68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int FUN_0045fb68(undefined4 param_1,byte *param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *local_14;
  
  iVar4 = 0;
  local_14 = param_2;
  do {
    bVar1 = *local_14;
    if (bVar1 != 0) {
      pbVar3 = FUN_00468b04(iVar4);
      bVar2 = *pbVar3;
      if (bVar2 != 0xfe) {
        if (param_3[bVar2] < bVar1) {
          param_4 = param_4 + ((uint)bVar1 - (uint)param_3[bVar2]);
          if (0 < param_4) {
            return 0;
          }
          param_3[bVar2] = 0;
        }
        else {
          param_3[bVar2] = param_3[bVar2] - bVar1;
        }
      }
    }
    iVar4 = iVar4 + 1;
    local_14 = local_14 + 1;
  } while (iVar4 < 10);
  iVar4 = FUN_0045fa1c(param_1,(int)param_2,param_3,0,param_4,param_5);
  return iVar4;
}

