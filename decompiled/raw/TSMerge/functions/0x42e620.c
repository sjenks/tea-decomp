// name: FUN_0042e620
// address: 0x42e620
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0042e620(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46ad84);
  if (DAT_0046ad7c == '\0') goto LAB_0042e6c7;
  if (DAT_004771a4 != 0) {
    if (*(int *)(DAT_004771a4 + -0xc) != -1) {
      piVar2 = (int *)(DAT_004771a4 + -0xc);
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
      if (iVar1 != 0) goto LAB_0042e6c0;
    }
    FUN_0044b2cc();
    DAT_004771a4 = 0;
  }
LAB_0042e6c0:
  DAT_0046ad7c = '\0';
LAB_0042e6c7:
  *in_FS_OFFSET = local_28;
  return;
}

