// name: FUN_0049b290
// address: 0x49b290
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049b290(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508958);
  if (param_1 == 0) goto LAB_0049b67f;
  if (*(int *)(param_1 + 0x58) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x58) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x58) + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0049b337;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
LAB_0049b337:
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x48) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x48) + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0049b3bd;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
LAB_0049b3bd:
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x38) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x38) + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0049b45f;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
LAB_0049b45f:
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0049b501;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_0049b501:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0049b5c7;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_0049b5c7:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0049b672;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0049b672:
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0049b67f:
  *in_FS_OFFSET = local_28;
  return;
}

