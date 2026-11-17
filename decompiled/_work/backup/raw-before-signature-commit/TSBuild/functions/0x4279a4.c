// name: FUN_004279a4
// address: 0x4279a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004279a4(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00467ba8(0x47b4c8);
  FUN_004236bc((int)local_14,param_2,param_3,DAT_00484890);
  FUN_00423088(param_1,(int)local_14,param_2);
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
      if (iVar1 != 0) goto LAB_00427a60;
    }
    FUN_0045680c();
  }
LAB_00427a60:
  *param_1 = &PTR_FUN_0047b598;
  *in_FS_OFFSET = local_38;
  return param_1;
}

