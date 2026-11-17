// name: FUN_00458308
// address: 0x458308
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall
FUN_00458308(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 auStack_48 [4];
  undefined1 local_38 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  int iStack_14;
  char cStack_d;
  int iStack_c;
  int iStack_8;
  
  uStack_28 = param_3;
  uStack_24 = param_4;
  uStack_20 = param_5;
  FUN_00457fec((int)local_38,param_2);
  bVar1 = FUN_00458218((int)&uStack_28,(int)local_38);
  if (bVar1) {
    FUN_00458234(auStack_48,&uStack_28);
  }
  FUN_00458c10(&iStack_8,param_5);
  iVar6 = iStack_8;
  cStack_d = '\0';
  piVar2 = (int *)FUN_00457fb4(iStack_8);
  bVar1 = FUN_004581c8(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_004581e0(iVar6);
    bVar1 = FUN_004581c8(piVar2);
    if (bVar1) {
      piVar2 = (int *)FUN_0045816c(iVar6);
      iStack_c = *piVar2;
      FUN_00458c20(param_2,iVar6);
      cStack_d = '\x01';
    }
    else {
      piVar2 = (int *)FUN_004581e0(iVar6);
      iStack_c = *piVar2;
    }
  }
  else {
    piVar2 = (int *)FUN_004581e0(iVar6);
    bVar1 = FUN_004581c8(piVar2);
    if (bVar1) {
      piVar2 = (int *)FUN_00457fb4(iVar6);
      iStack_c = *piVar2;
    }
    else {
      piVar2 = (int *)FUN_004581e0(iVar6);
      iVar6 = *piVar2;
      while( true ) {
        piVar2 = (int *)FUN_00457fb4(iVar6);
        bVar1 = FUN_004581c8(piVar2);
        if (bVar1) break;
        piVar2 = (int *)FUN_00457fb4(iVar6);
        iVar6 = *piVar2;
      }
      piVar2 = (int *)FUN_004581e0(iVar6);
      iStack_c = *piVar2;
    }
  }
  if ((cStack_d == '\0') && (iVar6 != iStack_8)) {
    piVar2 = (int *)FUN_00457fb4(iStack_8);
    piVar2 = (int *)FUN_0045816c(*piVar2);
    *piVar2 = iVar6;
    puVar3 = (undefined4 *)FUN_00457fb4(iStack_8);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_00457fb4(iVar6);
    *puVar3 = uVar7;
    piVar2 = (int *)FUN_004581e0(iStack_8);
    if (iVar6 == *piVar2) {
      bVar1 = FUN_004581c8(&iStack_c);
      if (!bVar1) {
        piVar2 = (int *)FUN_0045816c(iStack_c);
        *piVar2 = iVar6;
      }
    }
    else {
      bVar1 = FUN_004581c8(&iStack_c);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_0045816c(iVar6);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
        *puVar3 = uVar7;
      }
      piVar2 = (int *)FUN_0045816c(iVar6);
      piVar2 = (int *)FUN_00457fb4(*piVar2);
      *piVar2 = iStack_c;
      puVar3 = (undefined4 *)FUN_004581e0(iStack_8);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)FUN_004581e0(iVar6);
      *puVar3 = uVar7;
      piVar2 = (int *)FUN_004581e0(iStack_8);
      piVar2 = (int *)FUN_0045816c(*piVar2);
      *piVar2 = iVar6;
    }
    piVar2 = (int *)FUN_00458158(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_00458158(param_2);
      *piVar2 = iVar6;
    }
    else {
      piVar2 = (int *)FUN_0045816c(iStack_8);
      piVar2 = (int *)FUN_00457fb4(*piVar2);
      if (*piVar2 == iStack_8) {
        piVar2 = (int *)FUN_0045816c(iStack_8);
        piVar2 = (int *)FUN_00457fb4(*piVar2);
        *piVar2 = iVar6;
      }
      else {
        piVar2 = (int *)FUN_0045816c(iStack_8);
        piVar2 = (int *)FUN_004581e0(*piVar2);
        *piVar2 = iVar6;
      }
    }
    puVar3 = (undefined4 *)FUN_0045816c(iStack_8);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_0045816c(iVar6);
    *puVar3 = uVar7;
    bVar1 = FUN_004581c8(&iStack_c);
    if (bVar1) {
      iStack_c = iVar6;
    }
    puVar3 = (undefined4 *)FUN_00458cb8(iStack_8);
    puVar4 = (undefined4 *)FUN_00458cb8(iVar6);
    FUN_00458cc0(puVar4,puVar3);
    iVar6 = iStack_8;
  }
  else if (cStack_d == '\0') {
    puVar3 = (undefined4 *)FUN_0045816c(iVar6);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
    *puVar3 = uVar7;
    piVar2 = (int *)FUN_00458158(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_00458158(param_2);
      *piVar2 = iStack_c;
    }
    else {
      piVar2 = (int *)FUN_0045816c(iStack_8);
      piVar2 = (int *)FUN_00457fb4(*piVar2);
      if (*piVar2 == iStack_8) {
        piVar2 = (int *)FUN_0045816c(iStack_8);
        piVar2 = (int *)FUN_00457fb4(*piVar2);
        *piVar2 = iStack_c;
      }
      else {
        piVar2 = (int *)FUN_0045816c(iStack_8);
        piVar2 = (int *)FUN_004581e0(*piVar2);
        *piVar2 = iStack_c;
      }
    }
    piVar2 = (int *)FUN_004581ec(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_004581e0(iStack_8);
      bVar1 = FUN_004581c8(piVar2);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_0045816c(iStack_8);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_004581ec(param_2);
        *puVar3 = uVar7;
      }
      else {
        iVar5 = FUN_00458cd8(iStack_c);
        piVar2 = (int *)FUN_004581ec(param_2);
        *piVar2 = iVar5;
      }
    }
    piVar2 = (int *)FUN_00458204(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_00457fb4(iStack_8);
      bVar1 = FUN_004581c8(piVar2);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_0045816c(iStack_8);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_00458204(param_2);
        *puVar3 = uVar7;
      }
      else {
        iVar5 = FUN_00458d04(iStack_c);
        piVar2 = (int *)FUN_00458204(param_2);
        *piVar2 = iVar5;
      }
    }
  }
  if ((iStack_c != *(int *)(param_2 + 0x24)) && (piVar2 = (int *)FUN_00458cb8(iVar6), *piVar2 != 0))
  {
LAB_00458baf:
    while( true ) {
      piVar2 = (int *)FUN_00458158(param_2);
      if ((*piVar2 == iStack_c) || (piVar2 = (int *)FUN_00458cb8(iStack_c), *piVar2 != 1))
      goto LAB_00458bce;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      piVar2 = (int *)FUN_00457fb4(*piVar2);
      if (*piVar2 == iStack_c) break;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      piVar2 = (int *)FUN_00457fb4(*piVar2);
      iStack_18 = *piVar2;
      bVar1 = FUN_004581c8(&iStack_18);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_00458cb8(iStack_c);
        *puVar3 = 0;
        piVar2 = (int *)FUN_0045816c(iStack_c);
        iStack_c = *piVar2;
      }
      else {
        piVar2 = (int *)FUN_00458cb8(iStack_18);
        if (*piVar2 == 0) {
          puVar3 = (undefined4 *)FUN_00458cb8(iStack_18);
          *puVar3 = 1;
          puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
          puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
          *puVar3 = 0;
          piVar2 = (int *)FUN_0045816c(iStack_c);
          FUN_00458df8(param_2,*piVar2);
          piVar2 = (int *)FUN_0045816c(iStack_c);
          piVar2 = (int *)FUN_00457fb4(*piVar2);
          iStack_18 = *piVar2;
        }
        bVar1 = FUN_004581c8(&iStack_18);
        if (bVar1) {
          puVar3 = (undefined4 *)FUN_00458cb8(iStack_c);
          *puVar3 = 0;
          piVar2 = (int *)FUN_0045816c(iStack_c);
          iStack_c = *piVar2;
        }
        else {
          piVar2 = (int *)FUN_004581e0(iStack_18);
          bVar1 = FUN_004581c8(piVar2);
          if (!bVar1) {
            puVar3 = (undefined4 *)FUN_004581e0(iStack_18);
            piVar2 = (int *)FUN_00458cb8(*puVar3);
            if (*piVar2 == 1) goto LAB_00458a45;
LAB_00458a92:
            piVar2 = (int *)FUN_00457fb4(iStack_18);
            bVar1 = FUN_004581c8(piVar2);
            if (bVar1) {
LAB_00458abf:
              piVar2 = (int *)FUN_004581e0(iStack_18);
              bVar1 = FUN_004581c8(piVar2);
              if (!bVar1) {
                puVar3 = (undefined4 *)FUN_004581e0(iStack_18);
                puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
                *puVar3 = 1;
              }
              puVar3 = (undefined4 *)FUN_00458cb8(iStack_18);
              *puVar3 = 0;
              FUN_00458d30(param_2,iStack_18);
              piVar2 = (int *)FUN_0045816c(iStack_c);
              piVar2 = (int *)FUN_00457fb4(*piVar2);
              iStack_18 = *piVar2;
            }
            else {
              puVar3 = (undefined4 *)FUN_00457fb4(iStack_18);
              piVar2 = (int *)FUN_00458cb8(*puVar3);
              if (*piVar2 == 1) goto LAB_00458abf;
            }
            bVar1 = FUN_004581c8(&iStack_18);
            if (!bVar1) {
              puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
              puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
              uVar7 = *puVar3;
              puVar3 = (undefined4 *)FUN_00458cb8(iStack_18);
              *puVar3 = uVar7;
              puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
              puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
              *puVar3 = 1;
              piVar2 = (int *)FUN_00457fb4(iStack_18);
              bVar1 = FUN_004581c8(piVar2);
              if (!bVar1) {
                puVar3 = (undefined4 *)FUN_00457fb4(iStack_18);
                puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
                *puVar3 = 1;
              }
              piVar2 = (int *)FUN_0045816c(iStack_c);
              FUN_00458df8(param_2,*piVar2);
            }
            goto LAB_00458bce;
          }
LAB_00458a45:
          piVar2 = (int *)FUN_00457fb4(iStack_18);
          bVar1 = FUN_004581c8(piVar2);
          if (!bVar1) {
            puVar3 = (undefined4 *)FUN_00457fb4(iStack_18);
            piVar2 = (int *)FUN_00458cb8(*puVar3);
            if (*piVar2 != 1) goto LAB_00458a92;
          }
          puVar3 = (undefined4 *)FUN_00458cb8(iStack_18);
          *puVar3 = 0;
          piVar2 = (int *)FUN_0045816c(iStack_c);
          iStack_c = *piVar2;
        }
      }
    }
    piVar2 = (int *)FUN_0045816c(iStack_c);
    piVar2 = (int *)FUN_004581e0(*piVar2);
    iStack_14 = *piVar2;
    bVar1 = FUN_004581c8(&iStack_14);
    if (bVar1) {
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_c);
      *puVar3 = 0;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_00458baf;
    }
    piVar2 = (int *)FUN_00458cb8(iStack_14);
    if (*piVar2 == 0) {
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_14);
      *puVar3 = 1;
      puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
      puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
      *puVar3 = 0;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      FUN_00458d30(param_2,*piVar2);
      piVar2 = (int *)FUN_0045816c(iStack_c);
      piVar2 = (int *)FUN_004581e0(*piVar2);
      iStack_14 = *piVar2;
    }
    bVar1 = FUN_004581c8(&iStack_14);
    if (bVar1) {
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_c);
      *puVar3 = 0;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_00458baf;
    }
    piVar2 = (int *)FUN_00457fb4(iStack_14);
    bVar1 = FUN_004581c8(piVar2);
    if (bVar1) {
LAB_004587d4:
      piVar2 = (int *)FUN_004581e0(iStack_14);
      bVar1 = FUN_004581c8(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004581e0(iStack_14);
        piVar2 = (int *)FUN_00458cb8(*puVar3);
        if (*piVar2 != 1) goto LAB_00458821;
      }
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_14);
      *puVar3 = 0;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_00458baf;
    }
    puVar3 = (undefined4 *)FUN_00457fb4(iStack_14);
    piVar2 = (int *)FUN_00458cb8(*puVar3);
    if (*piVar2 == 1) goto LAB_004587d4;
LAB_00458821:
    piVar2 = (int *)FUN_004581e0(iStack_14);
    bVar1 = FUN_004581c8(piVar2);
    if (bVar1) {
LAB_0045884e:
      piVar2 = (int *)FUN_00457fb4(iStack_14);
      bVar1 = FUN_004581c8(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_00457fb4(iStack_14);
        puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
        *puVar3 = 1;
      }
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_14);
      *puVar3 = 0;
      FUN_00458df8(param_2,iStack_14);
      piVar2 = (int *)FUN_0045816c(iStack_c);
      piVar2 = (int *)FUN_004581e0(*piVar2);
      iStack_14 = *piVar2;
    }
    else {
      puVar3 = (undefined4 *)FUN_004581e0(iStack_14);
      piVar2 = (int *)FUN_00458cb8(*puVar3);
      if (*piVar2 == 1) goto LAB_0045884e;
    }
    bVar1 = FUN_004581c8(&iStack_14);
    if (!bVar1) {
      puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
      puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_14);
      *puVar3 = uVar7;
      puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
      puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
      *puVar3 = 1;
      piVar2 = (int *)FUN_004581e0(iStack_14);
      bVar1 = FUN_004581c8(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004581e0(iStack_14);
        puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
        *puVar3 = 1;
      }
      piVar2 = (int *)FUN_0045816c(iStack_c);
      FUN_00458d30(param_2,*piVar2);
    }
LAB_00458bce:
    puVar3 = (undefined4 *)FUN_00458cb8(iStack_c);
    *puVar3 = 1;
  }
  FUN_00458ec0(param_2,iVar6,'\x01');
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  return param_1;
}

