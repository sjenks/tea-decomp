// name: FUN_0046960c
// address: 0x46960c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046960c(int *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  char *local_c;
  
  FUN_004dce64(0x4fcf18);
  FUN_004b7964(param_1);
  FUN_004c0e0c((int)local_14,*(int *)(*param_1 + 0x70),0x7f2b);
  FUN_004c28b8(local_c,extraout_EDX,extraout_ECX,(int)(param_1 + 0xe),(uint *)local_c);
  if (local_c != (char *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
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
      if (iVar1 != 0) goto LAB_004696c9;
    }
    FUN_004cc0bc();
  }
LAB_004696c9:
  *in_FS_OFFSET = local_38;
  return;
}

