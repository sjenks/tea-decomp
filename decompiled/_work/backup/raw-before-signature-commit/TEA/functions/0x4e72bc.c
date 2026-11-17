// name: FUN_004e72bc
// address: 0x4e72bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl
FUN_004e72bc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined3 extraout_var;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_8;
  
  if ((param_1 < 0x46) || (0x8a < param_1)) {
    local_8 = -1;
  }
  else {
    iVar6 = param_5 + param_6 / 0x3c;
    iVar4 = param_4 + iVar6 / 0x3c;
    uVar8 = param_3 + iVar4 / 0x18;
    uVar5 = iVar4 % 0x18;
    uVar9 = param_1 + param_2 / 0xc;
    pcVar1 = &DAT_00518e90 + param_2 % 0xc;
    iVar4 = param_2 % 0xc;
    while (iVar7 = iVar4, pcVar3 = pcVar1, (int)*pcVar3 <= (int)uVar8) {
      if (((uVar9 & 3) == 0) && (iVar7 == 1)) {
        if ((int)uVar8 < 0x1d) break;
        iVar4 = -0x1d;
      }
      else {
        iVar4 = -(int)*pcVar3;
      }
      uVar8 = uVar8 + iVar4;
      pcVar1 = pcVar3 + 1;
      iVar4 = iVar7 + 1;
      if (0xb < iVar7 + 1) {
        uVar9 = uVar9 + 1;
        pcVar1 = pcVar3 + -0xb;
        iVar4 = iVar7 + -0xb;
      }
    }
    iVar4 = uVar9 - 0x44;
    if (iVar4 < 0) {
      iVar4 = uVar9 - 0x41;
    }
    iVar4 = iVar4 >> 2;
    if (((uVar9 & 3) == 0) && (iVar7 < 2)) {
      iVar4 = iVar4 + -1;
    }
    local_8 = (iVar4 + (uVar9 - 0x46) * 0x16d + (&DAT_00518e9c)[iVar7] + uVar8) * 0x15180 +
              uVar5 * 0xe10 + (iVar6 % 0x3c) * 0x3c + param_6 % 0x3c + DAT_00518fb4;
    if (param_7 == -1) {
      if ((DAT_00518fb8 != 0) &&
         (bVar2 = FUN_004e71a8(uVar5,uVar8,iVar7 + 1,uVar9 - 0x46),
         CONCAT31(extraout_var,bVar2) != 0)) {
        local_8 = local_8 + -0xe10;
      }
    }
    else {
      if (param_7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xe10;
      }
      local_8 = local_8 - iVar6;
    }
    if (local_8 < 1) {
      local_8 = -1;
    }
  }
  return local_8;
}

