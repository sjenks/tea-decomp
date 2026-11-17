// name: FUN_004d26e0
// address: 0x4d26e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl
FUN_004d26e0(int param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_c [8];
  
  puVar2 = FUN_004d2278(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if (param_4 != param_2[9]) {
    bVar1 = FUN_004cda78((int *)&param_3);
    if (bVar1) {
      piVar3 = (int *)FUN_004d2a94(param_4);
      piVar4 = (int *)FUN_004d2a8c(local_c,param_5);
      bVar1 = FUN_004d2ab8(param_2 + 0xc,piVar4,piVar3);
      if (!bVar1) {
        puVar5 = (undefined4 *)FUN_004cda90(param_4);
        *puVar5 = puVar2;
        piVar3 = (int *)FUN_004cdab4((int)param_2);
        if (*piVar3 == param_4) {
          puVar5 = (undefined4 *)FUN_004cdab4((int)param_2);
          *puVar5 = puVar2;
        }
        goto LAB_004d27a4;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_004cd864(param_4);
  *puVar5 = puVar2;
  if (param_4 == param_2[9]) {
    puVar5 = (undefined4 *)FUN_004cda08((int)param_2);
    *puVar5 = puVar2;
    puVar5 = (undefined4 *)FUN_004cdab4((int)param_2);
    *puVar5 = puVar2;
  }
  else {
    piVar3 = (int *)FUN_004cda9c((int)param_2);
    if (*piVar3 == param_4) {
      puVar5 = (undefined4 *)FUN_004cda9c((int)param_2);
      *puVar5 = puVar2;
    }
  }
LAB_004d27a4:
  piVar3 = (int *)FUN_004cda1c((int)puVar2);
  *piVar3 = param_4;
  param_3 = puVar2;
LAB_004d2a36:
  do {
    piVar3 = (int *)FUN_004cda08((int)param_2);
    if ((undefined4 *)*piVar3 == param_3) {
LAB_004d2a5e:
      puVar5 = (undefined4 *)FUN_004cda08((int)param_2);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 1;
      FUN_004cd870(param_1,puVar2);
      return param_1;
    }
    puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004ce568(*puVar5);
    if (*piVar3 != 0) goto LAB_004d2a5e;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    iVar6 = *piVar3;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    piVar3 = (int *)FUN_004cd864(*piVar3);
    if (iVar6 == *piVar3) {
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      piVar3 = (int *)FUN_004cda1c(*piVar3);
      piVar3 = (int *)FUN_004cda90(*piVar3);
      param_4 = *piVar3;
      bVar1 = FUN_004cda78(&param_4);
      if (!bVar1) {
        piVar3 = (int *)FUN_004ce568(param_4);
        if (*piVar3 == 0) {
          puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
          puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
          *puVar5 = 1;
          puVar5 = (undefined4 *)FUN_004ce568(param_4);
          *puVar5 = 1;
          piVar3 = (int *)FUN_004cda1c((int)param_3);
          puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
          puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
          *puVar5 = 0;
          piVar3 = (int *)FUN_004cda1c((int)param_3);
          puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
          param_3 = (undefined4 *)*puVar5;
          goto LAB_004d2a36;
        }
      }
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      piVar3 = (int *)FUN_004cda90(*piVar3);
      if ((undefined4 *)*piVar3 == param_3) {
        piVar3 = (int *)FUN_004cda1c((int)param_3);
        param_3 = (undefined4 *)*piVar3;
        FUN_004ce5e0((int)param_2,(int)param_3);
      }
      puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 1;
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 0;
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      piVar3 = (int *)FUN_004cda1c(*piVar3);
      FUN_004ce6a8((int)param_2,*piVar3);
      goto LAB_004d2a36;
    }
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    piVar3 = (int *)FUN_004cd864(*piVar3);
    param_4 = *piVar3;
    bVar1 = FUN_004cda78(&param_4);
    if (!bVar1) {
      piVar3 = (int *)FUN_004ce568(param_4);
      if (*piVar3 == 0) {
        puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 1;
        puVar5 = (undefined4 *)FUN_004ce568(param_4);
        *puVar5 = 1;
        piVar3 = (int *)FUN_004cda1c((int)param_3);
        puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 0;
        piVar3 = (int *)FUN_004cda1c((int)param_3);
        puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
        param_3 = (undefined4 *)*puVar5;
        goto LAB_004d2a36;
      }
    }
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cd864(*piVar3);
    if ((undefined4 *)*piVar3 == param_3) {
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      param_3 = (undefined4 *)*piVar3;
      FUN_004ce6a8((int)param_2,(int)param_3);
    }
    puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
    puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
    *puVar5 = 1;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
    puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
    *puVar5 = 0;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    FUN_004ce5e0((int)param_2,*piVar3);
  } while( true );
}

