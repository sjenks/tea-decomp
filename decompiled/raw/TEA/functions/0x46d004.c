// name: FUN_0046d004
// address: 0x46d004
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0046d048) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_0046d004(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  FUN_004dce64(0x4fdfc8);
  local_c = &DAT_00513d64;
  FUN_0046d2c8((int)local_24,(int)param_1,(int)local_14,param_3);
  iVar4 = param_1[0x2c] * 0x80 + param_1[0x25];
  local_2c = (int *)0x0;
  iVar1 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(iVar4 + 8) + -4);
    local_2c = FUN_004cf7b0(local_34,uVar2,uVar2);
    local_2c = local_2c + 3;
    FUN_004dc7d4(local_2c,*(undefined4 **)(iVar4 + 8),uVar2);
  }
  else {
    local_2c = *(int **)(iVar4 + 8);
    piVar3 = local_2c + -3;
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  uVar2 = FUN_0046524c(param_1[0xe],*param_1,param_2,(int)local_24,(int)local_34,(int)local_14);
  if (local_2c != (int *)0x0) {
    if (local_2c[-3] != -1) {
      piVar3 = local_2c + -3;
      if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        uVar2 = *piVar3 + 1;
      }
      if (uVar2 != 0) goto LAB_0046d1c7;
    }
    FUN_004cc0bc();
    local_2c = (int *)0x0;
    uVar2 = 0;
  }
LAB_0046d1c7:
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        uVar2 = *piVar3 + 1;
      }
      if (uVar2 != 0) goto LAB_0046d23d;
    }
    FUN_004cc0bc();
    local_1c = 0;
    uVar2 = 0;
  }
LAB_0046d23d:
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        uVar2 = *piVar3 + 1;
      }
      if (uVar2 != 0) goto LAB_0046d2b6;
    }
    FUN_004cc0bc();
    uVar2 = 0;
  }
LAB_0046d2b6:
  *in_FS_OFFSET = local_58;
  return uVar2;
}

