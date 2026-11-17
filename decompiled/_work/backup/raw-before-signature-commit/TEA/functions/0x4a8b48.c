// name: FUN_004a8b48
// address: 0x4a8b48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004a8b48(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50b5c8);
  if (DAT_0050b5c0 == '\0') goto LAB_004a8bef;
  if (DAT_0051b7a0 != 0) {
    if (*(int *)(DAT_0051b7a0 + -0xc) != -1) {
      piVar2 = (int *)(DAT_0051b7a0 + -0xc);
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
      if (iVar1 != 0) goto LAB_004a8be8;
    }
    FUN_004cc0bc();
    DAT_0051b7a0 = 0;
  }
LAB_004a8be8:
  DAT_0050b5c0 = '\0';
LAB_004a8bef:
  *in_FS_OFFSET = local_28;
  return;
}

