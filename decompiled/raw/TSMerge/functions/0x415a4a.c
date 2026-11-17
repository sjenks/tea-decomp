// name: FUN_00415a4a
// address: 0x415a4a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00415a4a(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  
  uVar3 = *(uint *)(unaff_EBP + 0xc);
  iVar1 = *(int *)(unaff_EBP + 8);
  FUN_00455f04(0x466138);
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  if (uVar3 <= *(uint *)(iVar1 + 5)) {
    uVar3 = *(uint *)(iVar1 + 5);
  }
  *(uint *)(unaff_EBP + -0x30) = uVar3 + 4;
  iVar2 = FUN_0044b390();
  *(int *)(unaff_EBP + -4) = iVar2;
  if (iVar2 == 0) {
    iVar2 = *(int *)(unaff_EBP + -4);
  }
  else {
    *(undefined2 *)(unaff_EBP + -0x18) = 0x14;
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar1 + 1);
    **(undefined4 **)(unaff_EBP + -4) = *(undefined4 *)(unaff_EBP + -0x34);
    *(undefined2 *)(unaff_EBP + -0x18) = 8;
    iVar2 = *(int *)(unaff_EBP + -4);
  }
  *(int *)(iVar1 + 1) = iVar2 + 4;
  *(int *)(iVar1 + 9) = *(int *)(iVar1 + 9) + 1;
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x28);
  return 1;
}

