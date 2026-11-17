// name: FUN_004160b8
// address: 0x4160b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004160b8(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x476cac);
  if (param_1 == 0) goto LAB_004162d3;
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x38) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x38) + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00416159;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
LAB_00416159:
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004161cd;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_004161cd:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00416241;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_00416241:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004162c3;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_004162c3:
  if ((param_2 & 1) != 0) {
    FUN_0045680c();
  }
LAB_004162d3:
  *in_FS_OFFSET = local_28;
  return;
}

