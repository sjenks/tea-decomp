// name: FUN_004157ec
// address: 0x4157ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004157ec(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x476ac0);
  if (param_1 == 0) goto LAB_00415881;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
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
      if (iVar1 != 0) goto LAB_00415874;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_00415874:
  if ((param_2 & 1) != 0) {
    FUN_0045680c();
  }
LAB_00415881:
  *in_FS_OFFSET = local_28;
  return;
}

