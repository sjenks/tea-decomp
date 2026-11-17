// name: FUN_0042eee8
// address: 0x42eee8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042eee8(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47cb3c);
  if (param_1 == 0) goto LAB_0042f2d7;
  if (*(int *)(param_1 + 0x58) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x58) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x58) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042ef8f;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
LAB_0042ef8f:
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x48) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x48) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042f015;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
LAB_0042f015:
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x38) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x38) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042f0b7;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
LAB_0042f0b7:
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042f159;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_0042f159:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042f21f;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_0042f21f:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042f2ca;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0042f2ca:
  if ((param_2 & 1) != 0) {
    FUN_0045680c();
  }
LAB_0042f2d7:
  *in_FS_OFFSET = local_28;
  return;
}

