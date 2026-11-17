// name: FUN_0045ee0c
// address: 0x45ee0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045ee0c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = FUN_0045bef8(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0045bef8(param_1);
    uVar3 = FUN_0045bf04(param_1);
    if (uVar2 < uVar3) {
      puVar4 = (undefined1 *)FUN_0045bef8(param_1);
      FUN_0045beec(puVar4);
      return;
    }
  }
  iVar1 = FUN_0045de3c(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0045de3c(param_1);
    uVar3 = FUN_0045bf04(param_1);
    if (uVar2 <= uVar3) {
      iVar1 = FUN_0045bf04(param_1);
      iVar5 = FUN_0045de54(param_1);
      if (*(int *)(param_1 + 0x2c) <= iVar1 - iVar5) goto LAB_0045eefc;
    }
    iVar1 = FUN_0045bef8(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_0045de3c(param_1);
      iVar5 = FUN_0045de48(param_1);
      if (iVar1 - iVar5 < *(int *)(param_1 + 0x2c)) {
        iVar1 = FUN_0045de48(param_1);
        iVar1 = iVar1 + *(int *)(param_1 + 0x2c);
        uVar6 = FUN_0045de48(param_1);
        uVar7 = FUN_0045de48(param_1);
        FUN_0045bfec(param_1,uVar7,uVar6,iVar1);
      }
      else {
        uVar6 = FUN_0045de3c(param_1);
        uVar7 = FUN_0045de48(param_1);
        uVar8 = FUN_0045de48(param_1);
        FUN_0045bfec(param_1,uVar8,uVar7,uVar6);
      }
      puVar4 = (undefined1 *)FUN_0045bef8(param_1);
      FUN_0045beec(puVar4);
      return;
    }
  }
LAB_0045eefc:
  iVar1 = FUN_0045de3c(param_1);
  if (iVar1 == 0) {
LAB_0045efa4:
    FUN_0045b17c();
  }
  else {
    uVar2 = FUN_0045de3c(param_1);
    uVar3 = FUN_0045bf04(param_1);
    if (uVar2 <= uVar3) {
      iVar1 = FUN_0045bf04(param_1);
      iVar5 = FUN_0045de54(param_1);
      if (*(int *)(param_1 + 0x2c) <= iVar1 - iVar5) goto LAB_0045efa4;
    }
    iVar1 = FUN_0045de3c(param_1);
    iVar5 = FUN_0045de48(param_1);
    if (iVar1 - iVar5 < *(int *)(param_1 + 0x2c)) {
      iVar1 = FUN_0045de54(param_1);
      iVar1 = iVar1 + *(int *)(param_1 + 0x2c);
      uVar6 = FUN_0045bef8(param_1);
      uVar7 = FUN_0045de54(param_1);
      FUN_0045bfec(param_1,uVar7,uVar6,iVar1);
    }
    else {
      uVar6 = FUN_0045de3c(param_1);
      uVar7 = FUN_0045bef8(param_1);
      uVar8 = FUN_0045de54(param_1);
      FUN_0045bfec(param_1,uVar8,uVar7,uVar6);
    }
    puVar4 = (undefined1 *)FUN_0045bef8(param_1);
    FUN_0045beec(puVar4);
  }
  return;
}

