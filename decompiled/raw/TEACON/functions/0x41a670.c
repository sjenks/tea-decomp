// name: FUN_0041a670
// address: 0x41a670
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0041a670(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = FUN_00418cd4(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_004197a4(param_1);
    if (iVar1 != 0) {
      uVar4 = FUN_004197a4(param_1);
      uVar5 = FUN_004197b0(param_1);
      uVar6 = FUN_004197b0(param_1);
      FUN_00418da8(param_1,uVar6,uVar5,uVar4);
    }
  }
  else {
    uVar2 = FUN_004197a4(param_1);
    uVar3 = FUN_00418ce0(param_1);
    if (uVar3 < uVar2) {
      uVar4 = FUN_004197a4(param_1);
      uVar5 = FUN_00418cd4(param_1);
      uVar6 = FUN_004197bc(param_1);
      FUN_00418da8(param_1,uVar6,uVar5,uVar4);
    }
  }
  iVar1 = FUN_00418ce0(param_1);
  iVar7 = FUN_00418cd4(param_1);
  return iVar1 - iVar7;
}

