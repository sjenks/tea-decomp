// name: FUN_00414020
// address: 0x414020
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00414020(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4768c0);
joined_r0x00414039:
  do {
    iVar1 = param_2;
    if (iVar1 == param_3) {
      *in_FS_OFFSET = local_28;
      return;
    }
    param_2 = iVar1 + 0x10;
  } while ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0));
  if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) goto code_r0x0041405c;
  goto LAB_00414089;
code_r0x0041405c:
  piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
  if (piVar3 == &DAT_00485bcc) {
    iVar2 = 1;
  }
  else if (piVar3 == &DAT_00485bcc) {
    iVar2 = 1;
  }
  else {
    *piVar3 = *piVar3 + -1;
    iVar2 = *piVar3 + 1;
  }
  if (iVar2 == 0) {
LAB_00414089:
    FUN_0045680c();
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  goto joined_r0x00414039;
}

