// name: FUN_0045d4ae
// address: 0x45d4ae
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0045d4ae(void)

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
  puVar5 = (undefined4 *)FUN_0045d594(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = *puVar5;
  while( true ) {
    bVar4 = FUN_004581c8((int *)(unaff_EBP + -4));
    if (bVar4) break;
    piVar7 = piVar1;
    piVar6 = (int *)FUN_0045d46c(*(int *)(unaff_EBP + -4));
    bVar4 = FUN_0045d490(iVar2 + 0x30,piVar6,piVar7);
    if (bVar4) {
      puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -4));
      *(undefined4 *)(unaff_EBP + -4) = *puVar5;
    }
    else {
      uVar8 = *(undefined4 *)(unaff_EBP + -4);
      puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -4));
      *(undefined4 *)(unaff_EBP + -4) = *puVar5;
    }
  }
  FUN_00457fc0(unaff_EBP + -0x14,uVar8);
  FUN_00457fec(unaff_EBP + -0x24,iVar2);
  bVar4 = FUN_0045813c(unaff_EBP + -0x14,unaff_EBP + -0x24);
  if (!bVar4) {
    piVar7 = (int *)FUN_0045d46c(*(int *)(unaff_EBP + -0xc));
    bVar4 = FUN_0045d490(iVar2 + 0x30,piVar1,piVar7);
    if (!bVar4) {
      puVar5 = (undefined4 *)(unaff_EBP + -0x14);
      goto LAB_0045d574;
    }
  }
  FUN_00457fec(unaff_EBP + -0x34,iVar2);
  puVar5 = (undefined4 *)(unaff_EBP + -0x34);
LAB_0045d574:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *puVar5;
  puVar3[1] = puVar5[1];
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8) = puVar5[2];
  return *(undefined4 *)(unaff_EBP + 8);
}

