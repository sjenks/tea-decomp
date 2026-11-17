// name: FUN_0040bdac
// address: 0x40bdac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0040bdac(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4633bc);
  if (DAT_004768b4 != 0) {
    if (*(int *)(DAT_004768b4 + -0xc) != -1) {
      piVar2 = (int *)(DAT_004768b4 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040be3f;
    }
    FUN_0044b2cc();
    DAT_004768b4 = 0;
  }
LAB_0040be3f:
  *in_FS_OFFSET = local_28;
  return;
}

