// name: FUN_004cdbc1
// address: 0x4cdbc1
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004cdbc1(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int unaff_EBP;
  undefined4 uVar9;
  
  piVar1 = (int *)(unaff_EBP + -8);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x18);
  FUN_004cd89c(in_ECX,iVar2);
  bVar3 = FUN_004cdac8(unaff_EBP + -0x24,unaff_EBP + -0x34);
  if (bVar3) {
    FUN_004cdae4((undefined4 *)(unaff_EBP + -0x44),(undefined4 *)(unaff_EBP + -0x24));
  }
  FUN_004ce4c0((undefined4 *)(unaff_EBP + -4),*(undefined4 *)(unaff_EBP + 0x18));
  iVar8 = *(int *)(unaff_EBP + -4);
  *(undefined1 *)(unaff_EBP + -9) = 0;
  piVar4 = (int *)FUN_004cd864(iVar8);
  bVar3 = FUN_004cda78(piVar4);
  if (bVar3) {
    piVar4 = (int *)FUN_004cda90(iVar8);
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
      piVar4 = (int *)FUN_004cda1c(iVar8);
      *piVar1 = *piVar4;
      FUN_004ce4d0(iVar2,iVar8);
      *(undefined1 *)(unaff_EBP + -9) = 1;
    }
    else {
      piVar4 = (int *)FUN_004cda90(iVar8);
      *piVar1 = *piVar4;
    }
  }
  else {
    piVar4 = (int *)FUN_004cda90(iVar8);
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
      piVar4 = (int *)FUN_004cd864(iVar8);
      *piVar1 = *piVar4;
    }
    else {
      piVar4 = (int *)FUN_004cda90(iVar8);
      iVar8 = *piVar4;
      while( true ) {
        piVar4 = (int *)FUN_004cd864(iVar8);
        bVar3 = FUN_004cda78(piVar4);
        if (bVar3) break;
        piVar4 = (int *)FUN_004cd864(iVar8);
        iVar8 = *piVar4;
      }
      piVar4 = (int *)FUN_004cda90(iVar8);
      *piVar1 = *piVar4;
    }
  }
  if ((*(char *)(unaff_EBP + -9) == '\0') && (iVar8 != *(int *)(unaff_EBP + -4))) {
    piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -4));
    piVar4 = (int *)FUN_004cda1c(*piVar4);
    *piVar4 = iVar8;
    puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -4));
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_004cd864(iVar8);
    *puVar5 = uVar9;
    piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -4));
    if (iVar8 == *piVar4) {
      bVar3 = FUN_004cda78(piVar1);
      if (!bVar3) {
        piVar4 = (int *)FUN_004cda1c(*piVar1);
        *piVar4 = iVar8;
      }
    }
    else {
      bVar3 = FUN_004cda78(piVar1);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cda1c(iVar8);
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
        *puVar5 = uVar9;
      }
      piVar4 = (int *)FUN_004cda1c(iVar8);
      piVar4 = (int *)FUN_004cd864(*piVar4);
      *piVar4 = *piVar1;
      puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      uVar9 = *puVar5;
      puVar5 = (undefined4 *)FUN_004cda90(iVar8);
      *puVar5 = uVar9;
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_004cda1c(*piVar4);
      *piVar4 = iVar8;
    }
    piVar4 = (int *)FUN_004cda08(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cda08(iVar2);
      *piVar4 = iVar8;
    }
    else {
      piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_004cd864(*piVar4);
      if (*piVar4 == *(int *)(unaff_EBP + -4)) {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cd864(*piVar4);
        *piVar4 = iVar8;
      }
      else {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cda90(*piVar4);
        *piVar4 = iVar8;
      }
    }
    puVar5 = (undefined4 *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_004cda1c(iVar8);
    *puVar5 = uVar9;
    bVar3 = FUN_004cda78(piVar1);
    if (bVar3) {
      *piVar1 = iVar8;
    }
    puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -4));
    puVar6 = (undefined4 *)FUN_004ce568(iVar8);
    FUN_004ce570(puVar6,puVar5);
    iVar8 = *(int *)(unaff_EBP + -4);
  }
  else if (*(char *)(unaff_EBP + -9) == '\0') {
    puVar5 = (undefined4 *)FUN_004cda1c(iVar8);
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
    *puVar5 = uVar9;
    piVar4 = (int *)FUN_004cda08(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cda08(iVar2);
      *piVar4 = *piVar1;
    }
    else {
      piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_004cd864(*piVar4);
      if (*piVar4 == *(int *)(unaff_EBP + -4)) {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cd864(*piVar4);
        *piVar4 = *piVar1;
      }
      else {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cda90(*piVar4);
        *piVar4 = *piVar1;
      }
    }
    piVar4 = (int *)FUN_004cda9c(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      bVar3 = FUN_004cda78(piVar4);
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_004cda9c(iVar2);
        *puVar5 = uVar9;
      }
      else {
        iVar7 = FUN_004ce588(*piVar1);
        piVar4 = (int *)FUN_004cda9c(iVar2);
        *piVar4 = iVar7;
      }
    }
    piVar4 = (int *)FUN_004cdab4(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -4));
      bVar3 = FUN_004cda78(piVar4);
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_004cdab4(iVar2);
        *puVar5 = uVar9;
      }
      else {
        iVar7 = FUN_004ce5b4(*piVar1);
        piVar4 = (int *)FUN_004cdab4(iVar2);
        *piVar4 = iVar7;
      }
    }
  }
  if ((*piVar1 != *(int *)(iVar2 + 0x24)) && (piVar4 = (int *)FUN_004ce568(iVar8), *piVar4 != 0)) {
LAB_004ce45f:
    while( true ) {
      piVar4 = (int *)FUN_004cda08(iVar2);
      if ((*piVar4 == *piVar1) || (piVar4 = (int *)FUN_004ce568(*piVar1), *piVar4 != 1))
      goto LAB_004ce47e;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      piVar4 = (int *)FUN_004cd864(*piVar4);
      if (*piVar4 == *piVar1) break;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004cd864(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
      bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x14));
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
        *puVar5 = 0;
        piVar4 = (int *)FUN_004cda1c(*piVar1);
        *piVar1 = *piVar4;
      }
      else {
        piVar4 = (int *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
        if (*piVar4 == 0) {
          puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
          *puVar5 = 1;
          puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
          puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
          *puVar5 = 0;
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          FUN_004ce6a8(iVar2,*piVar4);
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          puVar5 = (undefined4 *)FUN_004cd864(*piVar4);
          *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
        }
        bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x14));
        if (bVar3) {
          puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
          *puVar5 = 0;
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          *piVar1 = *piVar4;
        }
        else {
          piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
          bVar3 = FUN_004cda78(piVar4);
          if (!bVar3) {
            puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
            piVar4 = (int *)FUN_004ce568(*puVar5);
            if (*piVar4 == 1) goto LAB_004ce2f5;
LAB_004ce342:
            piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
            bVar3 = FUN_004cda78(piVar4);
            if (bVar3) {
LAB_004ce36f:
              piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
              bVar3 = FUN_004cda78(piVar4);
              if (!bVar3) {
                puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
                puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
                *puVar5 = 1;
              }
              puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
              *puVar5 = 0;
              FUN_004ce5e0(iVar2,*(int *)(unaff_EBP + -0x14));
              piVar4 = (int *)FUN_004cda1c(*piVar1);
              puVar5 = (undefined4 *)FUN_004cd864(*piVar4);
              *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
            }
            else {
              puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
              piVar4 = (int *)FUN_004ce568(*puVar5);
              if (*piVar4 == 1) goto LAB_004ce36f;
            }
            bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x14));
            if (!bVar3) {
              puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
              puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
              uVar9 = *puVar5;
              puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
              *puVar5 = uVar9;
              puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
              puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
              *puVar5 = 1;
              piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
              bVar3 = FUN_004cda78(piVar4);
              if (!bVar3) {
                puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
                puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
                *puVar5 = 1;
              }
              piVar4 = (int *)FUN_004cda1c(*piVar1);
              FUN_004ce6a8(iVar2,*piVar4);
            }
            goto LAB_004ce47e;
          }
LAB_004ce2f5:
          piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
          bVar3 = FUN_004cda78(piVar4);
          if (!bVar3) {
            puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
            piVar4 = (int *)FUN_004ce568(*puVar5);
            if (*piVar4 != 1) goto LAB_004ce342;
          }
          puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
          *puVar5 = 0;
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          *piVar1 = *piVar4;
        }
      }
    }
    piVar4 = (int *)FUN_004cda1c(*piVar1);
    puVar5 = (undefined4 *)FUN_004cda90(*piVar4);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x10));
    if (bVar3) {
      puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_004ce45f;
    }
    piVar4 = (int *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
    if (*piVar4 == 0) {
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 1;
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      FUN_004ce5e0(iVar2,*piVar4);
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004cda90(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    }
    bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x10));
    if (bVar3) {
      puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_004ce45f;
    }
    piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
LAB_004ce084:
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004cda78(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
        piVar4 = (int *)FUN_004ce568(*puVar5);
        if (*piVar4 != 1) goto LAB_004ce0d1;
      }
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_004ce45f;
    }
    puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
    piVar4 = (int *)FUN_004ce568(*puVar5);
    if (*piVar4 == 1) goto LAB_004ce084;
LAB_004ce0d1:
    piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
LAB_004ce0fe:
      piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004cda78(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 1;
      }
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 0;
      FUN_004ce6a8(iVar2,*(int *)(unaff_EBP + -0x10));
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004cda90(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    }
    else {
      puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
      piVar4 = (int *)FUN_004ce568(*puVar5);
      if (*piVar4 == 1) goto LAB_004ce0fe;
    }
    bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x10));
    if (!bVar3) {
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      uVar9 = *puVar5;
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = uVar9;
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 1;
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004cda78(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 1;
      }
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      FUN_004ce5e0(iVar2,*piVar4);
    }
LAB_004ce47e:
    puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
    *puVar5 = 1;
  }
  FUN_004ce770(iVar2,iVar8,'\x01');
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = *(undefined4 *)(unaff_EBP + -0x24);
  puVar5[1] = *(undefined4 *)(unaff_EBP + -0x20);
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8) = *(undefined4 *)(unaff_EBP + -0x1c);
  return *(undefined4 *)(unaff_EBP + 8);
}

