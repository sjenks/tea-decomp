// name: FUN_00461af4
// address: 0x461af4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00461af4(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  byte in_stack_00000018;
  int local_1c [3];
  int local_10 [3];
  
  iVar1 = FUN_0045e3f0((undefined4 *)&stack0x0000000c);
  if (((in_stack_00000018 & 4) != 0) && ((in_stack_00000018 & 8) != 0)) {
    piVar2 = FUN_0045e370(local_1c,-1);
    FUN_0045e414((undefined4 *)&stack0xffffffc4,(undefined4 *)&stack0x0000000c);
    (**(code **)(*param_2 + 0x10))();
    uVar3 = FUN_0045e464(local_10,piVar2);
    if ((char)uVar3 != '\0') {
      FUN_0045e370(param_1,-1);
      return param_1;
    }
    FUN_0045e414((undefined4 *)&stack0xffffffc8,(undefined4 *)&stack0x0000000c);
    (**(code **)(*param_2 + 0x10))();
    return param_1;
  }
  if (((in_stack_00000018 & 4) != 0) && (iVar4 = FUN_0045bef8((int)param_2), iVar4 != 0)) {
    if (iVar1 < 0) {
      FUN_0045e370(param_1,-1);
      return param_1;
    }
    iVar4 = FUN_0045de54((int)param_2);
    uVar5 = iVar4 + iVar1;
    uVar6 = FUN_0045bf04((int)param_2);
    if (uVar6 < uVar5) {
      FUN_0045e370(param_1,-1);
      return param_1;
    }
    uVar3 = FUN_0045bf04((int)param_2);
    iVar4 = FUN_0045de54((int)param_2);
    iVar4 = iVar4 + iVar1;
    uVar7 = FUN_0045de54((int)param_2);
    FUN_0045bfec((int)param_2,uVar7,iVar4,uVar3);
    FUN_0045e370(param_1,iVar1);
    return param_1;
  }
  if ((((in_stack_00000018 & 8) == 0) || (iVar4 = FUN_0045de3c((int)param_2), iVar4 == 0)) ||
     ((*(byte *)(param_2 + 1) & 1) != 0)) {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      FUN_0045e370(param_1,-1);
    }
    else {
      iVar1 = FUN_0045de3c((int)param_2);
      iVar4 = FUN_0045de48((int)param_2);
      FUN_0045e370(param_1,iVar1 - iVar4);
    }
    return param_1;
  }
  if (iVar1 < 0) {
LAB_00461c5a:
    FUN_0045e370(param_1,-1);
    return param_1;
  }
  iVar4 = FUN_0045de48((int)param_2);
  uVar5 = iVar4 + iVar1;
  uVar6 = FUN_0045de60((int)param_2);
  if (uVar6 < uVar5) goto LAB_00461c5a;
  iVar4 = FUN_0045de3c((int)param_2);
  iVar8 = FUN_0045de48((int)param_2);
  if (param_2[0xb] < iVar4 - iVar8) {
    iVar4 = FUN_0045de3c((int)param_2);
    iVar8 = FUN_0045de48((int)param_2);
    param_2[0xb] = iVar4 - iVar8;
  }
  iVar4 = FUN_0045de3c((int)param_2);
  iVar8 = FUN_0045de48((int)param_2);
  FUN_0045c020((int)param_2,iVar1 - (iVar4 - iVar8));
  iVar4 = FUN_0045de54((int)param_2);
  if (iVar4 != 0) {
    uVar5 = FUN_0045bef8((int)param_2);
    uVar6 = FUN_0045de3c((int)param_2);
    if (uVar5 <= uVar6) {
      uVar3 = FUN_0045de3c((int)param_2);
      uVar7 = FUN_0045bef8((int)param_2);
      uVar9 = FUN_0045de54((int)param_2);
      FUN_0045bfec((int)param_2,uVar9,uVar7,uVar3);
      goto LAB_00461d26;
    }
  }
  if (((param_2[1] & 8U) != 0) && ((param_2[1] & 4U) == 0)) {
    uVar3 = FUN_0045de60((int)param_2);
    uVar7 = FUN_0045de3c((int)param_2);
    uVar9 = FUN_0045de48((int)param_2);
    FUN_0045bfec((int)param_2,uVar9,uVar7,uVar3);
  }
LAB_00461d26:
  FUN_0045e370(param_1,iVar1);
  return param_1;
}

