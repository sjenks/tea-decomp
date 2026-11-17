// name: FUN_004baae8
// address: 0x4baae8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004baae8(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50ef6c);
  if (param_1 == 0) goto LAB_004bab8c;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x14) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x14) + -0xc);
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
      if (iVar1 != 0) goto LAB_004bab7c;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
LAB_004bab7c:
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_004bab8c:
  *in_FS_OFFSET = local_28;
  return;
}

