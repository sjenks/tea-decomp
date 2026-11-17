// name: FUN_00409ed4
// address: 0x409ed4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00409ed4(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_00455f04(0x462bac);
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_c = FUN_0044d2a4(local_14,uVar1,uVar1);
    local_c = local_c + 3;
    FUN_004559d0(local_c,*(undefined4 **)(param_3 + 8),uVar1);
  }
  else {
    local_c = *(int **)(param_3 + 8);
    piVar4 = local_c + -3;
    if (piVar4 != &DAT_00471d5c) {
      *piVar4 = *piVar4 + 1;
    }
  }
  iVar3 = param_4 * 0x10 + param_3;
  iVar2 = param_3;
  while (iVar3 != param_3) {
    FUN_0044ce78(iVar2,iVar3);
    iVar5 = param_2 - iVar3;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    iVar2 = iVar3;
    if (param_4 < iVar5 >> 4) {
      iVar3 = iVar3 + param_4 * 0x10;
    }
    else {
      iVar3 = param_2 - iVar3;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      iVar3 = (param_4 - (iVar3 >> 4)) * 0x10 + param_1;
    }
  }
  FUN_0044ce78(iVar2,(int)local_14);
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040a07d;
    }
    FUN_0044b2cc();
  }
LAB_0040a07d:
  *in_FS_OFFSET = local_38;
  return;
}

