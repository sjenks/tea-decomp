// name: FUN_00428fb4
// address: 0x428fb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428fb4(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  FUN_00467ba8(0x47b8a4);
  if (param_1[6] != 0) {
    FUN_00429d48(param_1);
    *(int *)(param_1[9] + 0x12) = param_1[4] + -1;
    *(int *)(param_1[9] + 0x1b) = param_1[5] + -1;
    uVar3 = FUN_00428a30(*param_1);
    if ((char)uVar3 == '\0') {
      *(undefined4 *)param_1[9] = 0;
      *(undefined4 *)(param_1[9] + 9) = 0;
    }
    else {
      iVar4 = GetSystemMetrics(DAT_0047d518);
      iVar5 = GetSystemMetrics(DAT_0047d520);
      *(int *)param_1[9] = -iVar4;
      *(int *)(param_1[9] + 9) = -iVar5;
      *(int *)(param_1[9] + 0x12) = *(int *)(param_1[9] + 0x12) + iVar4;
      *(int *)(param_1[9] + 0x1b) = *(int *)(param_1[9] + 0x1b) + iVar5;
    }
    if ((char)param_1[10] != '\0') {
      *(undefined1 *)(param_1 + 10) = 0;
      for (pcVar2 = (char *)param_1[6]; pcVar2 != (char *)0x0; pcVar2 = *(char **)(pcVar2 + 0x55)) {
        FUN_00429b3c(param_1,pcVar2);
      }
      FUN_00429538(param_1);
    }
    FUN_004294dc((int)param_1);
    iVar5 = 0;
    for (iVar4 = param_1[6]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x55)) {
      if (*(int *)(*(int *)(iVar4 + 1) + 0xc) != 0) {
        iVar5 = iVar5 + 1;
      }
    }
    FUN_00428d08(&local_8,iVar5);
    for (iVar4 = param_1[6]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x55)) {
      iVar5 = *(int *)(iVar4 + 1);
      piVar1 = (int *)(iVar4 + 0x31);
      if (*(int *)(iVar5 + 0xc) == 0) {
        *(int *)(iVar5 + 0x20) = *piVar1;
        *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar4 + 0x3a);
        *(int *)(iVar5 + 0x28) = (*(int *)(iVar4 + 0x43) - *piVar1) + 1;
        *(int *)(iVar5 + 0x2c) = (*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x3a)) + 1;
      }
      else {
        FUN_00428d68(&local_8,*(HWND *)(iVar5 + 0xc),(HWND)0x0,*piVar1,*(int *)(iVar4 + 0x3a),
                     (*(int *)(iVar4 + 0x43) - *piVar1) + 1,
                     (*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x3a)) + 1,0x14);
      }
    }
    FUN_00428dbc(&local_8,2);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

