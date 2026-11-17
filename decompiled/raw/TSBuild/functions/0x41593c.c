// name: FUN_0041593c
// address: 0x41593c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041593c(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x476ae8);
  if (param_1 == 0) goto LAB_004159d1;
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
      if (iVar1 != 0) goto LAB_004159c4;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_004159c4:
  if ((param_2 & 1) != 0) {
    FUN_0045680c();
  }
LAB_004159d1:
  *in_FS_OFFSET = local_28;
  return;
}

