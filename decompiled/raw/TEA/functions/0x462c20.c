// name: FUN_00462c20
// address: 0x462c20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00462c20(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4fb3d4);
  if (DAT_0051a858 != 0) {
    if (*(int *)(DAT_0051a858 + -0xc) != -1) {
      piVar2 = (int *)(DAT_0051a858 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00462cb3;
    }
    FUN_004cc0bc();
    DAT_0051a858 = 0;
  }
LAB_00462cb3:
  if (DAT_0051a848 != 0) {
    if (*(int *)(DAT_0051a848 + -0xc) != -1) {
      piVar2 = (int *)(DAT_0051a848 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00462d32;
    }
    FUN_004cc0bc();
    DAT_0051a848 = 0;
  }
LAB_00462d32:
  *in_FS_OFFSET = local_28;
  return;
}

