// name: FUN_00450388
// address: 0x450388
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00450388(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00467ba8(0x4832cc);
  uVar3 = 0;
  FUN_004235b8((int)local_14,0x7ff8,param_2,DAT_00484890);
  FUN_00423088(param_1,(int)local_14,uVar3);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
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
      if (iVar1 != 0) goto LAB_00450446;
    }
    FUN_0045680c();
  }
LAB_00450446:
  *param_1 = &PTR_FUN_0048339c;
  *in_FS_OFFSET = local_38;
  return param_1;
}

