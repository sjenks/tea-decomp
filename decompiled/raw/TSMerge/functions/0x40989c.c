// name: FUN_0040989c
// address: 0x40989c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_0040989c(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,int param_7,
            undefined4 param_8,undefined4 *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  uint local_8;
  
  if (((int)param_5 < (int)param_4) || (param_7 < (int)param_4)) {
    if (param_7 < (int)param_5) {
      FUN_00409bd4(&local_8,0);
      FUN_00409bd4(&local_c,0);
      if ((int)param_5 < (int)param_4) {
        local_8 = (int)param_4 >> 1;
        if ((int)local_8 < 0) {
          local_8 = local_8 + ((param_4 & 1) != 0);
        }
        iVar3 = param_1 + local_8 * 0x10;
        iVar1 = FUN_00409be4(param_2,param_3,iVar3,param_9);
        iVar2 = iVar1 - param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        local_c = iVar2 >> 4;
      }
      else {
        local_c = (int)param_5 >> 1;
        if ((int)local_c < 0) {
          local_c = local_c + ((param_5 & 1) != 0);
        }
        iVar1 = param_2 + local_c * 0x10;
        iVar3 = FUN_00409cb8(param_1,param_2,iVar1,param_9);
        iVar2 = iVar3 - param_1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        local_8 = iVar2 >> 4;
      }
      iVar2 = FUN_00409d8c(iVar3,param_2,iVar1,param_4 - local_8,local_c,param_6,param_7);
      FUN_0040989c(param_1,iVar3,iVar2,local_8,local_c,param_6,param_7,0,param_9);
      FUN_0040989c(iVar2,iVar1,param_3,param_4 - local_8,param_5 - local_c,param_6,param_7,0,param_9
                  );
    }
    else {
      iVar1 = FUN_00409868(param_2,param_3,param_6);
      FUN_00409a8c(param_1,param_2,param_6,iVar1,param_3,param_9);
    }
  }
  else {
    iVar1 = FUN_00409868(param_1,param_2,param_6);
    FUN_004096a0(param_6,iVar1,param_2,param_3,param_1,param_9);
  }
  return;
}

