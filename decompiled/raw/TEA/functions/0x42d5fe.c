// name: FUN_0042d5fe
// address: 0x42d5fe
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0042d5fe(void)

{
  HWND pHVar1;
  int *piVar2;
  SHORT SVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  piVar2 = *(int **)(unaff_EBP + 8);
  SVar3 = GetKeyState(1);
  if (-1 < SVar3) {
    pHVar4 = GetFocus();
    pHVar1 = *(HWND *)(*piVar2 + 0xc);
    SetFocus(*(HWND *)(*piVar2 + 0xc));
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_004a7a6c(*piVar2,(LPRECT)(unaff_EBP + -0x20));
    puVar7 = (undefined4 *)(unaff_EBP + -0x20);
    puVar8 = (undefined4 *)(unaff_EBP + -0x10);
    for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    if (pHVar4 != pHVar1) {
      iVar6 = piVar2[0x40];
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -8) - *(int *)(unaff_EBP + -0x10);
      *(int *)(unaff_EBP + -0x24) = iVar6;
      (**(code **)(*(int *)(*piVar2 + 8) + 0x6c))();
    }
    if ((*(byte *)(unaff_EBP + 0xc) & 0xc) == 0) {
      iVar6 = 0;
      if (0 < piVar2[0x40]) {
        iVar6 = (*(int *)(*(int *)(*piVar2 + 0x44) + 0xc) + *(int *)(*(int *)(unaff_EBP + 0x10) + 4)
                ) / piVar2[0x40];
      }
      iVar5 = FUN_0042ba08((int)piVar2);
      if (iVar6 < iVar5) {
        iVar5 = FUN_004307e4((int)piVar2,iVar6);
        if (iVar5 == 0) {
          FUN_00430438(piVar2);
          iVar5 = piVar2[0x27];
          *(int *)(unaff_EBP + -0x38) = iVar5;
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(iVar5 + 8);
          FUN_0042a474((undefined4 *)(unaff_EBP + -0x60),(int)(piVar2 + 0x1e),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(int *)(unaff_EBP + -0x48));
          piVar2[0x44] = iVar6;
          FUN_0042ed8c((int *)(unaff_EBP + -0x70),piVar2,iVar6,1,1,'\0');
          (**(code **)(*(int *)(*piVar2 + 8) + 0x6c))();
        }
      }
    }
  }
  return;
}

