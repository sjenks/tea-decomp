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
  
  FUN_0041f3fc(0x42a844);
  if (DAT_00434278 != 0) {
    if (*(int *)(DAT_00434278 + -0xc) != -1) {
      piVar2 = (int *)(DAT_00434278 + -0xc);
      if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040123b;
    }
    FUN_00414f78();
    DAT_00434278 = 0;
  }
LAB_0040123b:
  if (DAT_00434268 != 0) {
    if (*(int *)(DAT_00434268 + -0xc) != -1) {
      piVar2 = (int *)(DAT_00434268 + -0xc);
      if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004012ba;
    }
    FUN_00414f78();
    DAT_00434268 = 0;
  }
LAB_004012ba:
  *in_FS_OFFSET = local_28;
  return;
}

