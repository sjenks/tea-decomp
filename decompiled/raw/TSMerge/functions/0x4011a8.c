// name: FUN_004011a8
// address: 0x4011a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004011a8(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x461310);
  if (DAT_004768a4 != 0) {
    if (*(int *)(DAT_004768a4 + -0xc) != -1) {
      piVar2 = (int *)(DAT_004768a4 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040123b;
    }
    FUN_0044b2cc();
    DAT_004768a4 = 0;
  }
LAB_0040123b:
  *in_FS_OFFSET = local_28;
  return;
}

