// name: FUN_0043eb7c
// address: 0x43eb7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043eb7c(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46e1d8);
  if (param_1 == 0) goto LAB_0043ec20;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x14) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x14) + -0xc);
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
      if (iVar1 != 0) goto LAB_0043ec10;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
LAB_0043ec10:
  if ((param_2 & 1) != 0) {
    FUN_0044b2cc();
  }
LAB_0043ec20:
  *in_FS_OFFSET = local_28;
  return;
}

