// name: FUN_004aca54
// address: 0x4aca54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004aca54(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  char cVar6;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x50c3f4);
  iVar2 = *(int *)(*param_1 + 1);
  param_1[6] = -1;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = FUN_004dc978(*(char **)(*(int *)(*(int *)(*param_1 + 9) + iVar4 * 4) + 8),
                           (char *)param_2);
      if (iVar1 == 0) {
        param_1[6] = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  iVar2 = FUN_004cf628((int)local_14,param_2);
  uVar3 = FUN_004d40d0((int)(param_1 + 2),0,*(uint *)(param_1[4] + -4),*(byte **)(iVar2 + 8),
                       *(uint *)(*(int *)(iVar2 + 8) + -4));
  cVar6 = uVar3 != 0;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar2 = *piVar5 + 1;
      }
      if (iVar2 != 0) goto LAB_004acb74;
    }
    FUN_004cc0bc();
    local_c = 0;
  }
LAB_004acb74:
  if (cVar6 != '\0') {
    FUN_004cf41c((int)(param_1 + 2),param_2);
  }
  *in_FS_OFFSET = local_38;
  return;
}

