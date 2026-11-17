// name: FUN_00463a3c
// address: 0x463a3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00463a3c(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4878e8);
  if (param_1 == (undefined4 *)0x0) goto LAB_00463b05;
  *param_1 = &PTR_FUN_0047a49c;
  if (param_1[4] != 0) {
    if (*(int *)(param_1[4] + -0xc) != -1) {
      piVar2 = (int *)(param_1[4] + -0xc);
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
      if (iVar1 != 0) goto LAB_00463ae4;
    }
    FUN_0045680c();
    param_1[4] = 0;
  }
LAB_00463ae4:
  FUN_004671a8(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0045680c();
  }
LAB_00463b05:
  *in_FS_OFFSET = local_28;
  return;
}

