// name: FUN_00410f40
// address: 0x410f40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00410f40(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ec9fc);
  if (param_1 == 0) goto LAB_00411169;
  if (*(int *)(param_1 + 0x70) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x70) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x70) + -0xc);
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
      if (iVar2 != 0) goto LAB_00410fe5;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
LAB_00410fe5:
  if (*(int *)(param_1 + 0x60) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x60) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x60) + -0xc);
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
      if (iVar2 != 0) goto LAB_0041106c;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
LAB_0041106c:
  FUN_0040b4f0(param_1 + 0x38,*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x40));
  FUN_004cc0bc();
  FUN_0040b4f0(param_1 + 0x18,*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20));
  FUN_004cc0bc();
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
      if (iVar2 != 0) goto LAB_0041115c;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0041115c:
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_00411169:
  *in_FS_OFFSET = local_28;
  return;
}

