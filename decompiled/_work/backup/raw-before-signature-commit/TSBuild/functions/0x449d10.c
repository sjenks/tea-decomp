// name: FUN_00449d10
// address: 0x449d10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00449d10(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x481fb4);
  if (param_1 == 0) goto LAB_00449db4;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x14) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x14) + -0xc);
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
      if (iVar1 != 0) goto LAB_00449da4;
    }
    FUN_0045680c();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
LAB_00449da4:
  if ((param_2 & 1) != 0) {
    FUN_0045680c();
  }
LAB_00449db4:
  *in_FS_OFFSET = local_28;
  return;
}

