// name: FUN_00467440
// address: 0x467440
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00467440(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x488a34);
  if (param_1 == (undefined4 *)0x0) goto LAB_00467509;
  *param_1 = &PTR_FUN_00488848;
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
      if (iVar1 != 0) goto LAB_004674e8;
    }
    FUN_0045680c();
    param_1[4] = 0;
  }
LAB_004674e8:
  FUN_004671a8(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0045680c();
  }
LAB_00467509:
  *in_FS_OFFSET = local_28;
  return;
}

