// name: FUN_00458311
// address: 0x458311
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00458311(void)

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
  FUN_00457fec(in_ECX,iVar2);
  bVar3 = FUN_00458218(unaff_EBP + -0x24,unaff_EBP + -0x34);
  if (bVar3) {
    FUN_00458234((undefined4 *)(unaff_EBP + -0x44),(undefined4 *)(unaff_EBP + -0x24));
  }
  FUN_00458c10((undefined4 *)(unaff_EBP + -4),*(undefined4 *)(unaff_EBP + 0x18));
  iVar8 = *(int *)(unaff_EBP + -4);
  *(undefined1 *)(unaff_EBP + -9) = 0;
  piVar4 = (int *)FUN_00457fb4(iVar8);
  bVar3 = FUN_004581c8(piVar4);
  if (bVar3) {
    piVar4 = (int *)FUN_004581e0(iVar8);
    bVar3 = FUN_004581c8(piVar4);
    if (bVar3) {
      piVar4 = (int *)FUN_0045816c(iVar8);
      *piVar1 = *piVar4;
      FUN_00458c20(iVar2,iVar8);
      *(undefined1 *)(unaff_EBP + -9) = 1;
    }
    else {
      piVar4 = (int *)FUN_004581e0(iVar8);
      *piVar1 = *piVar4;
    }
  }
  else {
    piVar4 = (int *)FUN_004581e0(iVar8);
    bVar3 = FUN_004581c8(piVar4);
    if (bVar3) {
      piVar4 = (int *)FUN_00457fb4(iVar8);
      *piVar1 = *piVar4;
    }
    else {
      piVar4 = (int *)FUN_004581e0(iVar8);
      iVar8 = *piVar4;
      while( true ) {
        piVar4 = (int *)FUN_00457fb4(iVar8);
        bVar3 = FUN_004581c8(piVar4);
        if (bVar3) break;
        piVar4 = (int *)FUN_00457fb4(iVar8);
        iVar8 = *piVar4;
      }
      piVar4 = (int *)FUN_004581e0(iVar8);
      *piVar1 = *piVar4;
    }
  }
  if ((*(char *)(unaff_EBP + -9) == '\0') && (iVar8 != *(int *)(unaff_EBP + -4))) {
    piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -4));
    piVar4 = (int *)FUN_0045816c(*piVar4);
    *piVar4 = iVar8;
    puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -4));
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_00457fb4(iVar8);
    *puVar5 = uVar9;
    piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -4));
    if (iVar8 == *piVar4) {
      bVar3 = FUN_004581c8(piVar1);
      if (!bVar3) {
        piVar4 = (int *)FUN_0045816c(*piVar1);
        *piVar4 = iVar8;
      }
    }
    else {
      bVar3 = FUN_004581c8(piVar1);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_0045816c(iVar8);
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
        *puVar5 = uVar9;
      }
      piVar4 = (int *)FUN_0045816c(iVar8);
      piVar4 = (int *)FUN_00457fb4(*piVar4);
      *piVar4 = *piVar1;
      puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -4));
      uVar9 = *puVar5;
      puVar5 = (undefined4 *)FUN_004581e0(iVar8);
      *puVar5 = uVar9;
      piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_0045816c(*piVar4);
      *piVar4 = iVar8;
    }
    piVar4 = (int *)FUN_00458158(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_00458158(iVar2);
      *piVar4 = iVar8;
    }
    else {
      piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_00457fb4(*piVar4);
      if (*piVar4 == *(int *)(unaff_EBP + -4)) {
        piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_00457fb4(*piVar4);
        *piVar4 = iVar8;
      }
      else {
        piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004581e0(*piVar4);
        *piVar4 = iVar8;
      }
    }
    puVar5 = (undefined4 *)FUN_0045816c(*(int *)(unaff_EBP + -4));
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_0045816c(iVar8);
    *puVar5 = uVar9;
    bVar3 = FUN_004581c8(piVar1);
    if (bVar3) {
      *piVar1 = iVar8;
    }
    puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -4));
    puVar6 = (undefined4 *)FUN_00458cb8(iVar8);
    FUN_00458cc0(puVar6,puVar5);
    iVar8 = *(int *)(unaff_EBP + -4);
  }
  else if (*(char *)(unaff_EBP + -9) == '\0') {
    puVar5 = (undefined4 *)FUN_0045816c(iVar8);
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
    *puVar5 = uVar9;
    piVar4 = (int *)FUN_00458158(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_00458158(iVar2);
      *piVar4 = *piVar1;
    }
    else {
      piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_00457fb4(*piVar4);
      if (*piVar4 == *(int *)(unaff_EBP + -4)) {
        piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_00457fb4(*piVar4);
        *piVar4 = *piVar1;
      }
      else {
        piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004581e0(*piVar4);
        *piVar4 = *piVar1;
      }
    }
    piVar4 = (int *)FUN_004581ec(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -4));
      bVar3 = FUN_004581c8(piVar4);
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_004581ec(iVar2);
        *puVar5 = uVar9;
      }
      else {
        iVar7 = FUN_00458cd8(*piVar1);
        piVar4 = (int *)FUN_004581ec(iVar2);
        *piVar4 = iVar7;
      }
    }
    piVar4 = (int *)FUN_00458204(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -4));
      bVar3 = FUN_004581c8(piVar4);
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_00458204(iVar2);
        *puVar5 = uVar9;
      }
      else {
        iVar7 = FUN_00458d04(*piVar1);
        piVar4 = (int *)FUN_00458204(iVar2);
        *piVar4 = iVar7;
      }
    }
  }
  if ((*piVar1 != *(int *)(iVar2 + 0x24)) && (piVar4 = (int *)FUN_00458cb8(iVar8), *piVar4 != 0)) {
LAB_00458baf:
    while( true ) {
      piVar4 = (int *)FUN_00458158(iVar2);
      if ((*piVar4 == *piVar1) || (piVar4 = (int *)FUN_00458cb8(*piVar1), *piVar4 != 1))
      goto LAB_00458bce;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      piVar4 = (int *)FUN_00457fb4(*piVar4);
      if (*piVar4 == *piVar1) break;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_00457fb4(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
      bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x14));
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_00458cb8(*piVar1);
        *puVar5 = 0;
        piVar4 = (int *)FUN_0045816c(*piVar1);
        *piVar1 = *piVar4;
      }
      else {
        piVar4 = (int *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x14));
        if (*piVar4 == 0) {
          puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x14));
          *puVar5 = 1;
          puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
          puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
          *puVar5 = 0;
          piVar4 = (int *)FUN_0045816c(*piVar1);
          FUN_00458df8(iVar2,*piVar4);
          piVar4 = (int *)FUN_0045816c(*piVar1);
          puVar5 = (undefined4 *)FUN_00457fb4(*piVar4);
          *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
        }
        bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x14));
        if (bVar3) {
          puVar5 = (undefined4 *)FUN_00458cb8(*piVar1);
          *puVar5 = 0;
          piVar4 = (int *)FUN_0045816c(*piVar1);
          *piVar1 = *piVar4;
        }
        else {
          piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -0x14));
          bVar3 = FUN_004581c8(piVar4);
          if (!bVar3) {
            puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -0x14));
            piVar4 = (int *)FUN_00458cb8(*puVar5);
            if (*piVar4 == 1) goto LAB_00458a45;
LAB_00458a92:
            piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
            bVar3 = FUN_004581c8(piVar4);
            if (bVar3) {
LAB_00458abf:
              piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -0x14));
              bVar3 = FUN_004581c8(piVar4);
              if (!bVar3) {
                puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -0x14));
                puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
                *puVar5 = 1;
              }
              puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x14));
              *puVar5 = 0;
              FUN_00458d30(iVar2,*(int *)(unaff_EBP + -0x14));
              piVar4 = (int *)FUN_0045816c(*piVar1);
              puVar5 = (undefined4 *)FUN_00457fb4(*piVar4);
              *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
            }
            else {
              puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
              piVar4 = (int *)FUN_00458cb8(*puVar5);
              if (*piVar4 == 1) goto LAB_00458abf;
            }
            bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x14));
            if (!bVar3) {
              puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
              puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
              uVar9 = *puVar5;
              puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x14));
              *puVar5 = uVar9;
              puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
              puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
              *puVar5 = 1;
              piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
              bVar3 = FUN_004581c8(piVar4);
              if (!bVar3) {
                puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
                puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
                *puVar5 = 1;
              }
              piVar4 = (int *)FUN_0045816c(*piVar1);
              FUN_00458df8(iVar2,*piVar4);
            }
            goto LAB_00458bce;
          }
LAB_00458a45:
          piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
          bVar3 = FUN_004581c8(piVar4);
          if (!bVar3) {
            puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
            piVar4 = (int *)FUN_00458cb8(*puVar5);
            if (*piVar4 != 1) goto LAB_00458a92;
          }
          puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x14));
          *puVar5 = 0;
          piVar4 = (int *)FUN_0045816c(*piVar1);
          *piVar1 = *piVar4;
        }
      }
    }
    piVar4 = (int *)FUN_0045816c(*piVar1);
    puVar5 = (undefined4 *)FUN_004581e0(*piVar4);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x10));
    if (bVar3) {
      puVar5 = (undefined4 *)FUN_00458cb8(*piVar1);
      *puVar5 = 0;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_00458baf;
    }
    piVar4 = (int *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x10));
    if (*piVar4 == 0) {
      puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 1;
      puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      *puVar5 = 0;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      FUN_00458d30(iVar2,*piVar4);
      piVar4 = (int *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_004581e0(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    }
    bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x10));
    if (bVar3) {
      puVar5 = (undefined4 *)FUN_00458cb8(*piVar1);
      *puVar5 = 0;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_00458baf;
    }
    piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -0x10));
    bVar3 = FUN_004581c8(piVar4);
    if (bVar3) {
LAB_004587d4:
      piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004581c8(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
        piVar4 = (int *)FUN_00458cb8(*puVar5);
        if (*piVar4 != 1) goto LAB_00458821;
      }
      puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 0;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_00458baf;
    }
    puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -0x10));
    piVar4 = (int *)FUN_00458cb8(*puVar5);
    if (*piVar4 == 1) goto LAB_004587d4;
LAB_00458821:
    piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
    bVar3 = FUN_004581c8(piVar4);
    if (bVar3) {
LAB_0045884e:
      piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004581c8(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -0x10));
        puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
        *puVar5 = 1;
      }
      puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 0;
      FUN_00458df8(iVar2,*(int *)(unaff_EBP + -0x10));
      piVar4 = (int *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_004581e0(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    }
    else {
      puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
      piVar4 = (int *)FUN_00458cb8(*puVar5);
      if (*piVar4 == 1) goto LAB_0045884e;
    }
    bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x10));
    if (!bVar3) {
      puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      uVar9 = *puVar5;
      puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = uVar9;
      puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      *puVar5 = 1;
      piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004581c8(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
        puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
        *puVar5 = 1;
      }
      piVar4 = (int *)FUN_0045816c(*piVar1);
      FUN_00458d30(iVar2,*piVar4);
    }
LAB_00458bce:
    puVar5 = (undefined4 *)FUN_00458cb8(*piVar1);
    *puVar5 = 1;
  }
  FUN_00458ec0(iVar2,iVar8,'\x01');
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = *(undefined4 *)(unaff_EBP + -0x24);
  puVar5[1] = *(undefined4 *)(unaff_EBP + -0x20);
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8) = *(undefined4 *)(unaff_EBP + -0x1c);
  return *(undefined4 *)(unaff_EBP + 8);
}

