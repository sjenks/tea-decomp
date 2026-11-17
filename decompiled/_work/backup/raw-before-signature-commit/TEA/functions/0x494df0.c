// name: FUN_00494df0
// address: 0x494df0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00494df0(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  FUN_004dce64(0x507540);
  if (param_1[6] != 0) {
    FUN_00495b84(param_1);
    *(int *)(param_1[9] + 0x12) = param_1[4] + -1;
    *(int *)(param_1[9] + 0x1b) = param_1[5] + -1;
    uVar3 = FUN_00494708(*param_1);
    if ((char)uVar3 == '\0') {
      *(undefined4 *)param_1[9] = 0;
      *(undefined4 *)(param_1[9] + 9) = 0;
    }
    else {
      iVar4 = GetSystemMetrics(DAT_00509de8);
      iVar5 = GetSystemMetrics(DAT_00509df0);
      *(int *)param_1[9] = -iVar4;
      *(int *)(param_1[9] + 9) = -iVar5;
      *(int *)(param_1[9] + 0x12) = *(int *)(param_1[9] + 0x12) + iVar4;
      *(int *)(param_1[9] + 0x1b) = *(int *)(param_1[9] + 0x1b) + iVar5;
    }
    if ((char)param_1[10] != '\0') {
      *(undefined1 *)(param_1 + 10) = 0;
      for (pcVar2 = (char *)param_1[6]; pcVar2 != (char *)0x0; pcVar2 = *(char **)(pcVar2 + 0x55)) {
        FUN_00495978(param_1,pcVar2);
      }
      FUN_00495374(param_1);
    }
    FUN_00495318((int)param_1);
    iVar5 = 0;
    for (iVar4 = param_1[6]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x55)) {
      if (*(int *)(*(int *)(iVar4 + 1) + 0xc) != 0) {
        iVar5 = iVar5 + 1;
      }
    }
    FUN_004949e0(&local_8,iVar5);
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
        FUN_00494a40(&local_8,*(HWND *)(iVar5 + 0xc),(HWND)0x0,*piVar1,*(int *)(iVar4 + 0x3a),
                     (*(int *)(iVar4 + 0x43) - *piVar1) + 1,
                     (*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x3a)) + 1,0x14);
      }
    }
    FUN_00494a94(&local_8,2);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

