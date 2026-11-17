// name: FUN_004c7506
// address: 0x4c7506
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_004c7506(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + 8);
  *(int *)(unaff_EBP + -4) = iVar1 + 0x3b;
  *(int *)(unaff_EBP + -8) = iVar1 + 0x3a;
  *(int *)(unaff_EBP + -0xc) = iVar1 + 0x39;
  *(int *)(unaff_EBP + -0x10) = iVar1 + 0x38;
  *(int *)(unaff_EBP + -0x14) = iVar1 + 0x34;
  *(int *)(unaff_EBP + -0x18) = iVar1 + 0x30;
  *(int *)(unaff_EBP + -0x1c) = iVar1 + 0x2c;
  *(int *)(unaff_EBP + -0x20) = iVar1 + 0x28;
  *(int *)(unaff_EBP + -0x24) = iVar1 + 0x14;
  *(int *)(unaff_EBP + -0x28) = iVar1 + 0x10;
  *(int *)(unaff_EBP + -0x2c) = iVar1 + 0x24;
  *(int *)(unaff_EBP + -0x30) = iVar1 + 0x20;
  *(int *)(unaff_EBP + -0x34) = iVar1 + 0xc;
  piVar2 = *(int **)(unaff_EBP + 0xc);
  FUN_00499da0(piVar2,iVar1 + 8,4);
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x34),4);
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x30) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x2c) = uVar3;
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x28),4);
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x24),4);
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x20) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x1c) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x18) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x14) = uVar3;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0x10) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0xc) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -8) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -4) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)(iVar1 + 0x3c) = iVar4 != 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return iVar1;
}

