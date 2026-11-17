// name: FUN_00423044
// address: 0x423044
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00423044(uint *param_1,ushort param_2)

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
    FUN_00415600();
  }
  param_1[9] = 0;
  if ((param_2 & 4) == 4) {
    uVar2 = FUN_004155f0();
    param_1[5] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_00423b0c(param_1[1],(undefined2 *)param_1[5]);
    iVar3 = 0;
    if (CONCAT31(extraout_var,bVar1) != 0) {
      iVar3 = FUN_004237cc(param_1,(uint *)s_LC_MONETARY_00433161);
      iVar3 = CONCAT31(extraout_var,bVar1) * iVar3;
    }
  }
  if ((param_2 & 0x20) == 0x20) {
    uVar2 = FUN_004155f0();
    param_1[8] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_00423c8c(param_1[1],(undefined4 *)param_1[8]);
    iVar4 = iVar3 * CONCAT31(extraout_var_00,bVar1);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_004237cc(param_1,(uint *)s_LC_TIME_0043316d);
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 0x10) == 0x10) {
    uVar2 = FUN_004155f0();
    param_1[6] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_004240e8(param_1[1],(undefined4 *)param_1[6]);
    iVar4 = iVar3 * CONCAT31(extraout_var_01,bVar1);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_004237cc(param_1,(uint *)s_LC_NUMERIC_00433175);
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 1) == 1) {
    uVar2 = FUN_004155f0();
    param_1[7] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    iVar4 = FUN_00424170();
    iVar4 = iVar3 * iVar4;
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_004237cc(param_1,(uint *)s_LC_COLLATE_00433180);
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 2) == 2) {
    uVar2 = FUN_004155f0();
    param_1[4] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      iVar3 = 0;
    }
    else {
      iVar4 = FUN_00423a24(param_1[1],*param_1,(undefined4 *)param_1[4]);
      iVar4 = iVar3 * iVar4;
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = FUN_004237cc(param_1,(uint *)s_LC_CTYPE_0043318b);
        iVar3 = iVar4 * iVar3;
      }
    }
  }
  return iVar3;
}

