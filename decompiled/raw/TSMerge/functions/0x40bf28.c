// name: FUN_0040bf28
// address: 0x40bf28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040bf28(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4634b8);
  if (param_1 == 0) goto LAB_0040c143;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x40) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x40) + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040bfc9;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
LAB_0040bfc9:
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x30) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x30) + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c03d;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
LAB_0040c03d:
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x20) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x20) + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c0b1;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
LAB_0040c0b1:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c133;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0040c133:
  if ((param_2 & 1) != 0) {
    FUN_0044b2cc();
  }
LAB_0040c143:
  *in_FS_OFFSET = local_28;
  return;
}

