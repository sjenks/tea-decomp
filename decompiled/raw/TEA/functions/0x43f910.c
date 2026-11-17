// name: FUN_0043f910
// address: 0x43f910
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0043f954) */

int __cdecl FUN_0043f910(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4f5c8c);
  local_c = (undefined4 *)&DAT_00513d64;
  iVar2 = FUN_004dcce8(param_2,&DAT_004f5d58);
  if (param_2[iVar2] != '\0') {
    pcVar4 = param_2 + iVar2;
    pcVar3 = thunk_FUN_004dcc90(pcVar4,&DAT_004f5d58);
    if (pcVar3 != (char *)0x0) {
      iVar2 = FUN_004d1c6c((int)local_24,(undefined4 *)pcVar4,(int)pcVar3 - (int)pcVar4);
      FUN_004cf384((int)local_14,iVar2);
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar5 = (int *)(local_1c + -0xc);
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
          if (iVar2 != 0) goto LAB_0043fa35;
        }
        FUN_004cc0bc();
        local_1c = 0;
      }
    }
  }
LAB_0043fa35:
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar5 = FUN_004cf7b0(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar5 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
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
      if (iVar2 != 0) goto LAB_0043fb7e;
    }
    FUN_004cc0bc();
  }
LAB_0043fb7e:
  *in_FS_OFFSET = local_48;
  return param_1;
}

