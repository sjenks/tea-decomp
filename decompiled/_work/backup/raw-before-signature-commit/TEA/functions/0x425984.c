// name: FUN_00425984
// address: 0x425984
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00425984(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f18f4);
  if (param_1 == 0) goto LAB_00425b4c;
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x30) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x30) + -0xc);
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
      if (iVar2 != 0) goto LAB_00425a2b;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
LAB_00425a2b:
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x20) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x20) + -0xc);
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
      if (iVar2 != 0) goto LAB_00425ab2;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
LAB_00425ab2:
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x10) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + -0xc);
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
      if (iVar2 != 0) goto LAB_00425b3c;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
LAB_00425b3c:
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_00425b4c:
  *in_FS_OFFSET = local_28;
  return;
}

