// name: FUN_00421638
// address: 0x421638
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421638(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x468704);
  if (param_1 == 0) goto LAB_004216d9;
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(*(int *)(param_1 + 0xc) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0xc) + -0xc);
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
      if (iVar1 != 0) goto LAB_004216cc;
    }
    FUN_0044b2cc();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
LAB_004216cc:
  if ((param_2 & 1) != 0) {
    FUN_0044b2cc();
  }
LAB_004216d9:
  *in_FS_OFFSET = local_28;
  return;
}

