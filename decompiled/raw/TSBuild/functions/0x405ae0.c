// name: FUN_00405ae0
// address: 0x405ae0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00405b24) */

int __cdecl FUN_00405ae0(int param_1,char *param_2)

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
  
  FUN_00467ba8(0x475138);
  local_c = (undefined4 *)&DAT_00485bd8;
  iVar2 = FUN_00467a94(param_2,&DAT_00475204);
  if (param_2[iVar2] != '\0') {
    pcVar4 = param_2 + iVar2;
    pcVar3 = thunk_FUN_00467a3c(pcVar4,&DAT_00475204);
    if (pcVar3 != (char *)0x0) {
      iVar2 = FUN_0045c644((int)local_24,(undefined4 *)pcVar4,(int)pcVar3 - (int)pcVar4);
      FUN_00459ad4((int)local_14,iVar2);
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
          if (iVar2 != 0) goto LAB_00405c05;
        }
        FUN_0045680c();
        local_1c = 0;
      }
    }
  }
LAB_00405c05:
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar5 = FUN_00459f00(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar5 + 3;
    FUN_00467580(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00485bcc) {
      *piVar5 = *piVar5 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
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
      if (iVar2 != 0) goto LAB_00405d4e;
    }
    FUN_0045680c();
  }
LAB_00405d4e:
  *in_FS_OFFSET = local_48;
  return param_1;
}

