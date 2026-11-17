// name: FUN_004616e0
// address: 0x4616e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004616e0(int *param_1,int *param_2,int param_3,int param_4,byte param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int unaff_EDI;
  int local_1c [3];
  int local_10 [3];
  
  if (((param_5 & 4) != 0) && ((param_5 & 8) != 0)) {
    if ((param_4 != 0) && (param_4 != 2)) {
      FUN_0045e370(param_1,-1);
      return param_1;
    }
    piVar1 = FUN_0045e370(local_1c,-1);
    (**(code **)(*param_2 + 0xc))();
    uVar2 = FUN_0045e464(local_10,piVar1);
    if ((char)uVar2 != '\0') {
      FUN_0045e370(param_1,-1);
      return param_1;
    }
    (**(code **)(*param_2 + 0xc))();
    return param_1;
  }
  if (((param_5 & 4) != 0) && (iVar3 = FUN_0045bef8((int)param_2), iVar3 != 0)) {
    iVar3 = FUN_0045bf04((int)param_2);
    iVar4 = FUN_0045de54((int)param_2);
    if (param_2[0xb] < iVar3 - iVar4) {
      iVar3 = FUN_0045bf04((int)param_2);
      iVar4 = FUN_0045de54((int)param_2);
      param_2[0xb] = iVar3 - iVar4;
    }
    iVar3 = FUN_0045de3c((int)param_2);
    iVar4 = FUN_0045de48((int)param_2);
    if (param_2[0xb] < iVar3 - iVar4) {
      iVar3 = FUN_0045de3c((int)param_2);
      iVar4 = FUN_0045de48((int)param_2);
      param_2[0xb] = iVar3 - iVar4;
    }
    if (param_4 == 0) {
      unaff_EDI = 0;
    }
    if (param_4 == 1) {
      iVar3 = FUN_0045bef8((int)param_2);
      iVar4 = FUN_0045de54((int)param_2);
      unaff_EDI = iVar3 - iVar4;
    }
    if (param_4 == 2) {
      unaff_EDI = param_2[0xb];
    }
    if (unaff_EDI < 0) {
      FUN_0045e370(param_1,-1);
      return param_1;
    }
    iVar3 = FUN_0045de54((int)param_2);
    uVar5 = iVar3 + unaff_EDI + param_3;
    uVar6 = FUN_0045bf04((int)param_2);
    if ((uVar5 <= uVar6) && (-1 < param_3 + unaff_EDI)) {
      uVar2 = FUN_0045bf04((int)param_2);
      iVar3 = FUN_0045de54((int)param_2);
      iVar3 = iVar3 + unaff_EDI + param_3;
      uVar7 = FUN_0045de54((int)param_2);
      FUN_0045bfec((int)param_2,uVar7,iVar3,uVar2);
      FUN_0045e370(param_1,unaff_EDI + param_3);
      return param_1;
    }
    FUN_0045e370(param_1,-1);
    return param_1;
  }
  if (((((param_5 & 4) != 0) && (iVar3 = FUN_0045bef8((int)param_2), iVar3 == 0)) &&
      (iVar3 = FUN_0045bf04((int)param_2), iVar3 == 0)) &&
     (iVar3 = FUN_0045de54((int)param_2), iVar3 == 0)) {
    FUN_0045e370(param_1,0);
    return param_1;
  }
  if ((((param_5 & 8) == 0) || (iVar3 = FUN_0045de3c((int)param_2), iVar3 == 0)) ||
     ((*(byte *)(param_2 + 1) & 1) != 0)) {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      if (((((param_5 & 8) != 0) && (iVar3 = FUN_0045de3c((int)param_2), iVar3 == 0)) &&
          (iVar3 = FUN_0045de60((int)param_2), iVar3 == 0)) &&
         (iVar3 = FUN_0045de48((int)param_2), iVar3 == 0)) {
        FUN_0045e370(param_1,0);
        return param_1;
      }
      FUN_0045e370(param_1,-1);
    }
    else {
      iVar3 = FUN_0045de3c((int)param_2);
      iVar4 = FUN_0045de48((int)param_2);
      FUN_0045e370(param_1,iVar3 - iVar4);
    }
    return param_1;
  }
  iVar3 = FUN_0045bf04((int)param_2);
  iVar4 = FUN_0045de54((int)param_2);
  if (param_2[0xb] < iVar3 - iVar4) {
    iVar3 = FUN_0045bf04((int)param_2);
    iVar4 = FUN_0045de54((int)param_2);
    param_2[0xb] = iVar3 - iVar4;
  }
  iVar3 = FUN_0045de3c((int)param_2);
  iVar4 = FUN_0045de48((int)param_2);
  if (param_2[0xb] < iVar3 - iVar4) {
    iVar3 = FUN_0045de3c((int)param_2);
    iVar4 = FUN_0045de48((int)param_2);
    param_2[0xb] = iVar3 - iVar4;
  }
  if (param_4 == 0) {
    unaff_EDI = 0;
  }
  if (param_4 == 1) {
    iVar3 = FUN_0045de3c((int)param_2);
    iVar4 = FUN_0045de48((int)param_2);
    unaff_EDI = iVar3 - iVar4;
  }
  if (param_4 == 2) {
    unaff_EDI = param_2[0xb];
  }
  iVar3 = FUN_0045de3c((int)param_2);
  iVar4 = FUN_0045de48((int)param_2);
  if (param_2[0xb] < iVar3 - iVar4) {
    iVar3 = FUN_0045de3c((int)param_2);
    iVar4 = FUN_0045de48((int)param_2);
    param_2[0xb] = iVar3 - iVar4;
  }
  if (param_3 + unaff_EDI < 0) {
LAB_004619cd:
    FUN_0045e370(param_1,-1);
    return param_1;
  }
  iVar3 = FUN_0045de48((int)param_2);
  uVar5 = iVar3 + unaff_EDI + param_3;
  uVar6 = FUN_0045de60((int)param_2);
  if (uVar6 < uVar5) goto LAB_004619cd;
  iVar3 = FUN_0045de3c((int)param_2);
  iVar4 = FUN_0045de48((int)param_2);
  FUN_0045c020((int)param_2,(param_3 + unaff_EDI) - (iVar3 - iVar4));
  iVar3 = FUN_0045de54((int)param_2);
  if (iVar3 != 0) {
    uVar5 = FUN_0045bef8((int)param_2);
    uVar6 = FUN_0045de3c((int)param_2);
    if (uVar5 <= uVar6) {
      uVar2 = FUN_0045de3c((int)param_2);
      uVar7 = FUN_0045bef8((int)param_2);
      uVar8 = FUN_0045de54((int)param_2);
      FUN_0045bfec((int)param_2,uVar8,uVar7,uVar2);
      goto LAB_00461a70;
    }
  }
  if (((param_2[1] & 8U) != 0) && ((param_2[1] & 4U) == 0)) {
    uVar2 = FUN_0045de3c((int)param_2);
    uVar7 = FUN_0045de3c((int)param_2);
    uVar8 = FUN_0045de48((int)param_2);
    FUN_0045bfec((int)param_2,uVar8,uVar7,uVar2);
  }
LAB_00461a70:
  FUN_0045e370(param_1,unaff_EDI + param_3);
  return param_1;
}

