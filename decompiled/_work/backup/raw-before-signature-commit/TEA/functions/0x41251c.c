// name: FUN_0041251c
// address: 0x41251c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0041251c(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4ecbe0);
  FUN_004cf628((int)local_14,param_2);
  iVar4 = 0;
  do {
    iVar5 = iVar4 * 0x10 + param_1;
    local_1c = (int *)0x0;
    iVar2 = *(int *)(*(int *)(iVar5 + 8) + -0xc);
    if (iVar2 == -1 || iVar2 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(iVar5 + 8) + -4);
      local_1c = FUN_004cf7b0(local_24,uVar1,uVar1);
      local_1c = local_1c + 3;
      FUN_004dc7d4(local_1c,*(undefined4 **)(iVar5 + 8),uVar1);
    }
    else {
      local_1c = *(int **)(iVar5 + 8);
      piVar3 = local_1c + -3;
      if (piVar3 != &DAT_00513d58) {
        *piVar3 = *piVar3 + 1;
      }
    }
    FUN_004cf384(iVar4 * 0x10 + param_1,(int)local_14);
    iVar2 = FUN_004dcbf8((char *)param_2,(char *)local_1c);
    if (iVar2 == 0) {
      if (local_1c == (int *)0x0) break;
      if (local_1c[-3] != -1) {
        piVar3 = local_1c + -3;
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) break;
      }
      FUN_004cc0bc();
      local_1c = (int *)0x0;
      break;
    }
    FUN_004cf384((int)local_14,(int)local_24);
    if (local_1c != (int *)0x0) {
      if (local_1c[-3] != -1) {
        piVar3 = local_1c + -3;
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0041275b;
      }
      FUN_004cc0bc();
      local_1c = (int *)0x0;
    }
LAB_0041275b:
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0041281a;
    }
    FUN_004cc0bc();
  }
LAB_0041281a:
  *in_FS_OFFSET = local_48;
  return;
}

