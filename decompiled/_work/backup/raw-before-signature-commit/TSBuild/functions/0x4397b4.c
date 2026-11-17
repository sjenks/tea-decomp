// name: FUN_004397b4
// address: 0x4397b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004397b4(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47eb60);
  if (DAT_0047eb58 == '\0') goto LAB_0043985b;
  if (DAT_0048cc4c != 0) {
    if (*(int *)(DAT_0048cc4c + -0xc) != -1) {
      piVar2 = (int *)(DAT_0048cc4c + -0xc);
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
      if (iVar1 != 0) goto LAB_00439854;
    }
    FUN_0045680c();
    DAT_0048cc4c = 0;
  }
LAB_00439854:
  DAT_0047eb58 = '\0';
LAB_0043985b:
  *in_FS_OFFSET = local_28;
  return;
}

