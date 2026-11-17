// name: FUN_004d2ad6
// address: 0x4d2ad6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004d2ad6(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int unaff_EBP;
  undefined4 uVar8;
  
  piVar1 = *(int **)(unaff_EBP + 0x10);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  uVar8 = *(undefined4 *)(iVar2 + 0x24);
  puVar5 = (undefined4 *)FUN_004d2bbc(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = *puVar5;
  while( true ) {
    bVar4 = FUN_004cda78((int *)(unaff_EBP + -4));
    if (bVar4) break;
    piVar7 = piVar1;
    piVar6 = (int *)FUN_004d2a94(*(int *)(unaff_EBP + -4));
    bVar4 = FUN_004d2ab8(iVar2 + 0x30,piVar6,piVar7);
    if (bVar4) {
      puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      *(undefined4 *)(unaff_EBP + -4) = *puVar5;
    }
    else {
      uVar8 = *(undefined4 *)(unaff_EBP + -4);
      puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -4));
      *(undefined4 *)(unaff_EBP + -4) = *puVar5;
    }
  }
  FUN_004cd870(unaff_EBP + -0x14,uVar8);
  FUN_004cd89c(unaff_EBP + -0x24,iVar2);
  bVar4 = FUN_004cd9ec(unaff_EBP + -0x14,unaff_EBP + -0x24);
  if (!bVar4) {
    piVar7 = (int *)FUN_004d2a94(*(int *)(unaff_EBP + -0xc));
    bVar4 = FUN_004d2ab8(iVar2 + 0x30,piVar1,piVar7);
    if (!bVar4) {
      puVar5 = (undefined4 *)(unaff_EBP + -0x14);
      goto LAB_004d2b9c;
    }
  }
  FUN_004cd89c(unaff_EBP + -0x34,iVar2);
  puVar5 = (undefined4 *)(unaff_EBP + -0x34);
LAB_004d2b9c:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *puVar5;
  puVar3[1] = puVar5[1];
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8) = puVar5[2];
  return *(undefined4 *)(unaff_EBP + 8);
}

