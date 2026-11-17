// name: FUN_0045988c
// address: 0x45988c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045988c(uint *param_1,ushort param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  if (param_1[9] != 0) {
    FUN_0044b954();
  }
  param_1[9] = 0;
  if ((param_2 & 4) == 4) {
    uVar2 = FUN_0044b944();
    param_1[5] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_0045a354(param_1[1],(undefined2 *)param_1[5]);
    iVar3 = 0;
    if (CONCAT31(extraout_var,bVar1) != 0) {
      iVar3 = FUN_0045a014(param_1,(uint *)s_LC_MONETARY_00475765);
      iVar3 = CONCAT31(extraout_var,bVar1) * iVar3;
    }
  }
  if ((param_2 & 0x20) == 0x20) {
    uVar2 = FUN_0044b944();
    param_1[8] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_0045a4d4(param_1[1],(undefined4 *)param_1[8]);
    iVar4 = iVar3 * CONCAT31(extraout_var_00,bVar1);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_0045a014(param_1,(uint *)s_LC_TIME_00475771);
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 0x10) == 0x10) {
    uVar2 = FUN_0044b944();
    param_1[6] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_0045a930(param_1[1],(undefined4 *)param_1[6]);
    iVar4 = iVar3 * CONCAT31(extraout_var_01,bVar1);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_0045a014(param_1,(uint *)s_LC_NUMERIC_00475779);
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 1) == 1) {
    uVar2 = FUN_0044b944();
    param_1[7] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    iVar4 = FUN_0045a9b8();
    iVar4 = iVar3 * iVar4;
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_0045a014(param_1,(uint *)s_LC_COLLATE_00475784);
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 2) == 2) {
    uVar2 = FUN_0044b944();
    param_1[4] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      iVar3 = 0;
    }
    else {
      iVar4 = FUN_0045a26c(param_1[1],*param_1,(undefined4 *)param_1[4]);
      iVar4 = iVar3 * iVar4;
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = FUN_0045a014(param_1,(uint *)s_LC_CTYPE_0047578f);
        iVar3 = iVar4 * iVar3;
      }
    }
  }
  return iVar3;
}

