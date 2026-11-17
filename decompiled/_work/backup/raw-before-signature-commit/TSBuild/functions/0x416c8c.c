// name: FUN_00416c8c
// address: 0x416c8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00416c8c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
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
  
  FUN_00467ba8(0x476f50);
  FUN_004198b4(local_c,0x48c354,1,0);
  iVar1 = param_1 + 0x20;
  FUN_00459d78((int)local_1c,(uint *)s_BuilderMapping_00476bb0);
  FUN_00419a8c((int)local_c,(int)local_1c,iVar1);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00416d97;
    }
    FUN_0045680c();
    local_14 = 0;
  }
LAB_00416d97:
  iVar1 = param_1 + 0x30;
  FUN_00459d78((int)local_2c,(uint *)s_BuilderWordList_00476bbf);
  FUN_00419a8c((int)local_c,(int)local_2c,iVar1);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00416e65;
    }
    FUN_0045680c();
    local_24 = 0;
  }
LAB_00416e65:
  FUN_00459d78((int)local_3c,(uint *)s_BuilderShortest_00476bec);
  FUN_00419abc((int)local_c,(int)local_3c);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00416f33;
    }
    FUN_0045680c();
    local_34 = 0;
  }
LAB_00416f33:
  FUN_00459d78((int)local_4c,(uint *)s_BuilderLongest_00476bfc);
  FUN_00419abc((int)local_c,(int)local_4c);
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar2 = (int *)(local_44 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00417001;
    }
    FUN_0045680c();
    local_44 = 0;
  }
LAB_00417001:
  FUN_00459d78((int)local_5c,(uint *)s_BuilderFrequency_00476bcf);
  FUN_00419abc((int)local_c,(int)local_5c);
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar2 = (int *)(local_54 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004170cf;
    }
    FUN_0045680c();
    local_54 = 0;
  }
LAB_004170cf:
  FUN_00459d78((int)local_6c,(uint *)s_BuilderSort_00476be0);
  FUN_00419abc((int)local_c,(int)local_6c);
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar2 = (int *)(local_64 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0041718d;
    }
    FUN_0045680c();
    local_64 = 0;
  }
LAB_0041718d:
  FUN_00419998((int)local_c,2);
  *in_FS_OFFSET = local_90;
  return;
}

