// name: FUN_0046233e
// address: 0x46233e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0046233e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int unaff_EBP;
  undefined1 uVar8;
  
  iVar6 = *(int *)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_004591bc(iVar6);
  iVar3 = *(int *)(iVar2 + 0x14) - iVar3;
  if (0 < iVar3) {
    if (*(int *)(iVar2 + 0x24) == 0) {
      *(int *)(unaff_EBP + -4) = iVar3;
      iVar3 = 0;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar8 = *(undefined1 *)(unaff_EBP + 0x10);
      FUN_00462200((undefined4 *)(unaff_EBP + -0x14),*(undefined4 **)(iVar2 + 0x278));
      iVar4 = FUN_00462228(unaff_EBP + -0x14);
      FUN_00462230(iVar4,uVar8);
    }
  }
  puVar5 = (undefined1 *)FUN_00459b5c(iVar6);
  iVar6 = FUN_004591bc(iVar6);
  puVar7 = puVar5 + iVar6;
  for (; puVar5 < puVar7; puVar5 = puVar5 + 1) {
    uVar8 = *puVar5;
    FUN_00462200((undefined4 *)(unaff_EBP + -0x24),*(undefined4 **)(iVar2 + 0x278));
    iVar6 = FUN_00462228(unaff_EBP + -0x24);
    FUN_00462230(iVar6,uVar8);
  }
  iVar6 = *(int *)(unaff_EBP + -4);
  while (iVar6 != 0) {
    uVar8 = *(undefined1 *)(unaff_EBP + 0x10);
    FUN_00462200((undefined4 *)(unaff_EBP + -0x34),*(undefined4 **)(iVar2 + 0x278));
    iVar6 = FUN_00462228(unaff_EBP + -0x34);
    FUN_00462230(iVar6,uVar8);
    piVar1 = (int *)(unaff_EBP + -4);
    *piVar1 = *piVar1 + -1;
    iVar6 = *piVar1;
  }
  return;
}

