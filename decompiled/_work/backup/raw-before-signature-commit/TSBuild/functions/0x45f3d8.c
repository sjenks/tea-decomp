// name: FUN_0045f3d8
// address: 0x45f3d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045f3d8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = FUN_0045bef8(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0045de3c(param_1);
    if (iVar1 != 0) {
      uVar4 = FUN_0045de3c(param_1);
      uVar5 = FUN_0045de48(param_1);
      uVar6 = FUN_0045de48(param_1);
      FUN_0045bfec(param_1,uVar6,uVar5,uVar4);
    }
  }
  else {
    uVar2 = FUN_0045de3c(param_1);
    uVar3 = FUN_0045bf04(param_1);
    if (uVar3 < uVar2) {
      uVar4 = FUN_0045de3c(param_1);
      uVar5 = FUN_0045bef8(param_1);
      uVar6 = FUN_0045de54(param_1);
      FUN_0045bfec(param_1,uVar6,uVar5,uVar4);
    }
  }
  iVar1 = FUN_0045bf04(param_1);
  iVar7 = FUN_0045bef8(param_1);
  return iVar1 - iVar7;
}

