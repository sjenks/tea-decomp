// name: FUN_004d474c
// address: 0x4d474c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d474c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = FUN_004d17a8(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_004d348c(param_1);
    if (iVar1 != 0) {
      uVar4 = FUN_004d348c(param_1);
      uVar5 = FUN_004d3498(param_1);
      uVar6 = FUN_004d3498(param_1);
      FUN_004d187c(param_1,uVar6,uVar5,uVar4);
    }
  }
  else {
    uVar2 = FUN_004d348c(param_1);
    uVar3 = FUN_004d17b4(param_1);
    if (uVar3 < uVar2) {
      uVar4 = FUN_004d348c(param_1);
      uVar5 = FUN_004d17a8(param_1);
      uVar6 = FUN_004d34a4(param_1);
      FUN_004d187c(param_1,uVar6,uVar5,uVar4);
    }
  }
  iVar1 = FUN_004d17b4(param_1);
  iVar7 = FUN_004d17a8(param_1);
  return iVar1 - iVar7;
}

