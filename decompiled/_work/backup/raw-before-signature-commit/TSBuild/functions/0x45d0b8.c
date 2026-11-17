// name: FUN_0045d0b8
// address: 0x45d0b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl
FUN_0045d0b8(int param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_c [8];
  
  puVar2 = FUN_0045cc50(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if (param_4 != param_2[9]) {
    bVar1 = FUN_004581c8((int *)&param_3);
    if (bVar1) {
      piVar3 = (int *)FUN_0045d46c(param_4);
      piVar4 = (int *)FUN_0045d464(local_c,param_5);
      bVar1 = FUN_0045d490(param_2 + 0xc,piVar4,piVar3);
      if (!bVar1) {
        puVar5 = (undefined4 *)FUN_004581e0(param_4);
        *puVar5 = puVar2;
        piVar3 = (int *)FUN_00458204((int)param_2);
        if (*piVar3 == param_4) {
          puVar5 = (undefined4 *)FUN_00458204((int)param_2);
          *puVar5 = puVar2;
        }
        goto LAB_0045d17c;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_00457fb4(param_4);
  *puVar5 = puVar2;
  if (param_4 == param_2[9]) {
    puVar5 = (undefined4 *)FUN_00458158((int)param_2);
    *puVar5 = puVar2;
    puVar5 = (undefined4 *)FUN_00458204((int)param_2);
    *puVar5 = puVar2;
  }
  else {
    piVar3 = (int *)FUN_004581ec((int)param_2);
    if (*piVar3 == param_4) {
      puVar5 = (undefined4 *)FUN_004581ec((int)param_2);
      *puVar5 = puVar2;
    }
  }
LAB_0045d17c:
  piVar3 = (int *)FUN_0045816c((int)puVar2);
  *piVar3 = param_4;
  param_3 = puVar2;
LAB_0045d40e:
  do {
    piVar3 = (int *)FUN_00458158((int)param_2);
    if ((undefined4 *)*piVar3 == param_3) {
LAB_0045d436:
      puVar5 = (undefined4 *)FUN_00458158((int)param_2);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      *puVar5 = 1;
      FUN_00457fc0(param_1,puVar2);
      return param_1;
    }
    puVar5 = (undefined4 *)FUN_0045816c((int)param_3);
    piVar3 = (int *)FUN_00458cb8(*puVar5);
    if (*piVar3 != 0) goto LAB_0045d436;
    piVar3 = (int *)FUN_0045816c((int)param_3);
    iVar6 = *piVar3;
    piVar3 = (int *)FUN_0045816c((int)param_3);
    piVar3 = (int *)FUN_0045816c(*piVar3);
    piVar3 = (int *)FUN_00457fb4(*piVar3);
    if (iVar6 == *piVar3) {
      piVar3 = (int *)FUN_0045816c((int)param_3);
      piVar3 = (int *)FUN_0045816c(*piVar3);
      piVar3 = (int *)FUN_004581e0(*piVar3);
      param_4 = *piVar3;
      bVar1 = FUN_004581c8(&param_4);
      if (!bVar1) {
        piVar3 = (int *)FUN_00458cb8(param_4);
        if (*piVar3 == 0) {
          puVar5 = (undefined4 *)FUN_0045816c((int)param_3);
          puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
          *puVar5 = 1;
          puVar5 = (undefined4 *)FUN_00458cb8(param_4);
          *puVar5 = 1;
          piVar3 = (int *)FUN_0045816c((int)param_3);
          puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
          puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
          *puVar5 = 0;
          piVar3 = (int *)FUN_0045816c((int)param_3);
          puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
          param_3 = (undefined4 *)*puVar5;
          goto LAB_0045d40e;
        }
      }
      piVar3 = (int *)FUN_0045816c((int)param_3);
      piVar3 = (int *)FUN_004581e0(*piVar3);
      if ((undefined4 *)*piVar3 == param_3) {
        piVar3 = (int *)FUN_0045816c((int)param_3);
        param_3 = (undefined4 *)*piVar3;
        FUN_00458d30((int)param_2,(int)param_3);
      }
      puVar5 = (undefined4 *)FUN_0045816c((int)param_3);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      *puVar5 = 1;
      piVar3 = (int *)FUN_0045816c((int)param_3);
      puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      *puVar5 = 0;
      piVar3 = (int *)FUN_0045816c((int)param_3);
      piVar3 = (int *)FUN_0045816c(*piVar3);
      FUN_00458df8((int)param_2,*piVar3);
      goto LAB_0045d40e;
    }
    piVar3 = (int *)FUN_0045816c((int)param_3);
    piVar3 = (int *)FUN_0045816c(*piVar3);
    piVar3 = (int *)FUN_00457fb4(*piVar3);
    param_4 = *piVar3;
    bVar1 = FUN_004581c8(&param_4);
    if (!bVar1) {
      piVar3 = (int *)FUN_00458cb8(param_4);
      if (*piVar3 == 0) {
        puVar5 = (undefined4 *)FUN_0045816c((int)param_3);
        puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
        *puVar5 = 1;
        puVar5 = (undefined4 *)FUN_00458cb8(param_4);
        *puVar5 = 1;
        piVar3 = (int *)FUN_0045816c((int)param_3);
        puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
        puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
        *puVar5 = 0;
        piVar3 = (int *)FUN_0045816c((int)param_3);
        puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
        param_3 = (undefined4 *)*puVar5;
        goto LAB_0045d40e;
      }
    }
    piVar3 = (int *)FUN_0045816c((int)param_3);
    piVar3 = (int *)FUN_00457fb4(*piVar3);
    if ((undefined4 *)*piVar3 == param_3) {
      piVar3 = (int *)FUN_0045816c((int)param_3);
      param_3 = (undefined4 *)*piVar3;
      FUN_00458df8((int)param_2,(int)param_3);
    }
    puVar5 = (undefined4 *)FUN_0045816c((int)param_3);
    puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
    *puVar5 = 1;
    piVar3 = (int *)FUN_0045816c((int)param_3);
    puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
    puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
    *puVar5 = 0;
    piVar3 = (int *)FUN_0045816c((int)param_3);
    piVar3 = (int *)FUN_0045816c(*piVar3);
    FUN_00458d30((int)param_2,*piVar3);
  } while( true );
}

