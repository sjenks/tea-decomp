// name: FUN_004230f0
// address: 0x4230f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004230f0(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00467ba8(0x47a770);
  FUN_004233d8((int)local_14,(char *)0x0,param_2,param_3);
  FUN_00422bc0(param_1,(int)local_14);
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
      if (iVar1 != 0) goto LAB_004231ab;
    }
    FUN_0045680c();
  }
LAB_004231ab:
  *param_1 = &PTR_FUN_00478b54;
  param_1[2] = param_2;
  *in_FS_OFFSET = local_38;
  return param_1;
}

