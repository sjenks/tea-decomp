// name: FUN_0043b544
// address: 0x43b544
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0043b585) */

int __cdecl FUN_0043b544(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4f4abc);
  local_c = (undefined4 *)&DAT_00513d64;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -4);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      cVar2 = *(char *)(*(int *)(param_3 + 8) + iVar4);
      if ((cVar2 == '@') && (*(int *)(*(int *)(param_2 + 8) + -4) != 0)) {
        FUN_004d573c((int)local_14,param_2);
      }
      else if ((cVar2 == '#') && (*(int *)(*(int *)(param_2 + 0x18) + -4) != 0)) {
        FUN_004d573c((int)local_14,param_2 + 0x10);
      }
      else {
        if ((cVar2 == '\\') && (iVar4 + 1 < iVar3)) {
          FUN_004d5c40((int)local_14,local_c[-1],0,1,0x5c);
          iVar4 = iVar4 + 1;
          cVar2 = *(char *)(*(int *)(param_3 + 8) + iVar4);
        }
        FUN_004d5c40((int)local_14,local_c[-1],0,1,cVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
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
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0043b78d;
    }
    FUN_004cc0bc();
  }
LAB_0043b78d:
  *in_FS_OFFSET = local_38;
  return param_1;
}

