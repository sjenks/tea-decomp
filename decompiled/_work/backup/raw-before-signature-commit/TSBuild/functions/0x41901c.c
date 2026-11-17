// name: FUN_0041901c
// address: 0x41901c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_0041901c(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 local_58;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_00467ba8(0x477bf8);
  if ((*(int *)(*(int *)(param_2 + 8) + -4) == 0) ||
     (bVar1 = FUN_00418afc(param_2), CONCAT31(extraout_var,bVar1) == 0)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar6 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar5 = FUN_00459f00(param_1,uVar6,uVar6);
      *(int **)(param_1 + 8) = piVar5 + 3;
      FUN_00467580(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 8),uVar6);
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar5 != &DAT_00485bcc) {
        *piVar5 = *piVar5 + 1;
      }
    }
    *in_FS_OFFSET = local_58;
    return param_1;
  }
  local_c = (int *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar6 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_c = FUN_00459f00(local_14,uVar6,uVar6);
    local_c = local_c + 3;
    FUN_00467580(local_c,*(undefined4 **)(param_2 + 8),uVar6);
  }
  else {
    local_c = *(int **)(param_2 + 8);
    piVar5 = local_c + -3;
    if (piVar5 != &DAT_00485bcc) {
      *piVar5 = *piVar5 + 1;
    }
  }
  iVar4 = local_c[-1];
LAB_004192c9:
  do {
    if (iVar4 == 0) break;
    uVar6 = iVar4 - 1;
    if ((uint)local_c[-1] < uVar6) {
      uVar6 = local_c[-1];
    }
    pcVar3 = FUN_004184cc((char *)local_c,';',uVar6);
    iVar4 = DAT_00485f20;
    if (pcVar3 != (char *)0x0) {
      iVar4 = (int)pcVar3 - (int)local_c;
    }
    if (iVar4 == -1) break;
    FUN_00418b98((int)local_24);
    FUN_00460414((int)local_14,iVar4 + 1,(int)local_24);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_004192c9;
      }
      FUN_0045680c();
      local_1c = 0;
    }
  } while( true );
  puVar7 = local_14;
  FUN_00418b98((int)local_34);
  FUN_004184f8(param_1,(int)local_34,(int)puVar7);
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar5 = (int *)(local_2c + -0xc);
      if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_004193bd;
    }
    FUN_0045680c();
    local_2c = 0;
  }
LAB_004193bd:
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00419450;
    }
    FUN_0045680c();
  }
LAB_00419450:
  *in_FS_OFFSET = local_58;
  return param_1;
}

