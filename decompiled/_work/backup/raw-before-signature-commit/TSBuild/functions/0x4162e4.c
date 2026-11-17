// name: FUN_004162e4
// address: 0x4162e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004162e4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a0;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  FUN_00467ba8(0x476d80);
  FUN_004198b4(local_c,0x48c354,0,0);
  FUN_00416918((int)local_1c,param_2,(uint *)s_default_tsm_00476c0b);
  FUN_00459ad4(param_1 + 0x20,(int)local_1c);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_004163e8;
    }
    FUN_0045680c();
    local_14 = 0;
  }
LAB_004163e8:
  iVar1 = param_1 + 0x20;
  FUN_00459d78((int)local_2c,(uint *)s_BuilderMapping_00476bb0);
  FUN_004199c4((int)local_c,(int)local_2c,iVar1);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_004164b6;
    }
    FUN_0045680c();
    local_24 = 0;
  }
LAB_004164b6:
  iVar1 = param_1 + 0x30;
  FUN_00459d78((int)local_3c,(uint *)s_BuilderWordList_00476bbf);
  FUN_004199c4((int)local_c,(int)local_3c,iVar1);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00416584;
    }
    FUN_0045680c();
    local_34 = 0;
  }
LAB_00416584:
  puVar2 = (undefined4 *)(param_1 + 0x40);
  FUN_00459d78((int)local_4c,(uint *)s_BuilderShortest_00476bec);
  FUN_00419a38((int)local_c,(int)local_4c,puVar2);
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar3 = (int *)(local_44 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00416652;
    }
    FUN_0045680c();
    local_44 = 0;
  }
LAB_00416652:
  puVar2 = (undefined4 *)(param_1 + 0x44);
  FUN_00459d78((int)local_5c,(uint *)s_BuilderLongest_00476bfc);
  FUN_00419a38((int)local_c,(int)local_5c,puVar2);
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar3 = (int *)(local_54 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00416720;
    }
    FUN_0045680c();
    local_54 = 0;
  }
LAB_00416720:
  puVar2 = (undefined4 *)(param_1 + 0x48);
  FUN_00459d78((int)local_6c,(uint *)s_BuilderFrequency_00476bcf);
  FUN_00419a38((int)local_c,(int)local_6c,puVar2);
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar3 = (int *)(local_64 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_004167ee;
    }
    FUN_0045680c();
    local_64 = 0;
  }
LAB_004167ee:
  puVar2 = (undefined4 *)(param_1 + 0x4c);
  FUN_00459d78((int)local_7c,(uint *)s_BuilderSort_00476be0);
  FUN_00419a38((int)local_c,(int)local_7c,puVar2);
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      piVar3 = (int *)(local_74 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_004168ac;
    }
    FUN_0045680c();
    local_74 = 0;
  }
LAB_004168ac:
  FUN_00419998((int)local_c,2);
  *in_FS_OFFSET = local_a0;
  return;
}

