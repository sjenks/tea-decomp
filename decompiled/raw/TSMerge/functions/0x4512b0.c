// name: FUN_004512b0
// address: 0x4512b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004512b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = FUN_0044f29c(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00450228(param_1);
    if (iVar1 != 0) {
      uVar4 = FUN_00450228(param_1);
      uVar5 = FUN_00450234(param_1);
      uVar6 = FUN_00450234(param_1);
      FUN_0044f370(param_1,uVar6,uVar5,uVar4);
    }
  }
  else {
    uVar2 = FUN_00450228(param_1);
    uVar3 = FUN_0044f2a8(param_1);
    if (uVar3 < uVar2) {
      uVar4 = FUN_00450228(param_1);
      uVar5 = FUN_0044f29c(param_1);
      uVar6 = FUN_00450240(param_1);
      FUN_0044f370(param_1,uVar6,uVar5,uVar4);
    }
  }
  iVar1 = FUN_0044f2a8(param_1);
  iVar7 = FUN_0044f29c(param_1);
  return iVar1 - iVar7;
}

