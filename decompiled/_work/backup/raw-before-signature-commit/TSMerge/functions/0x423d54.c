// name: FUN_00423d54
// address: 0x423d54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00423d54(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x468d60);
  if (param_1 == 0) goto LAB_00424143;
  if (*(int *)(param_1 + 0x58) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x58) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x58) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00423dfb;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
LAB_00423dfb:
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x48) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x48) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00423e81;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
LAB_00423e81:
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x38) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x38) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00423f23;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
LAB_00423f23:
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00423fc5;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_00423fc5:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042408b;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_0042408b:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00424136;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_00424136:
  if ((param_2 & 1) != 0) {
    FUN_0044b2cc();
  }
LAB_00424143:
  *in_FS_OFFSET = local_28;
  return;
}

