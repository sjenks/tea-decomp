// name: FUN_004bf14a
// address: 0x4bf14a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004bf14a(void)

{
  undefined4 *puVar1;
  WPARAM WVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  WVar2 = *(WPARAM *)(unaff_EBP + 0xc);
  piVar3 = *(int **)(unaff_EBP + 8);
  FUN_004a6214(*piVar3,WVar2);
  if (*(int *)((int)piVar3 + 0x15) != 0) {
    *(undefined1 *)(unaff_EBP + -1) = 0;
    if (WVar2 != 1) {
      uVar4 = FUN_004be9dc(piVar3,'\x01');
      *(char *)(unaff_EBP + -1) = (char)uVar4;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      FUN_004a7a6c(*(int *)((int)piVar3 + 0x15),(LPRECT)(unaff_EBP + -0x24));
      puVar6 = (undefined4 *)(unaff_EBP + -0x24);
      puVar7 = (undefined4 *)(unaff_EBP + -0x34);
      for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x30);
      *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0xc);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -8);
      *puVar1 = *(undefined4 *)(unaff_EBP + -0x14);
      puVar1[1] = *(undefined4 *)(unaff_EBP + -0x10);
    }
    if (*(char *)(unaff_EBP + -1) == '\0') {
      FUN_004a7708(*(int *)((int)piVar3 + 0x15),'\x01');
    }
  }
  FUN_004bf118(piVar3,WVar2,(LPARAM)puVar1);
  return;
}

