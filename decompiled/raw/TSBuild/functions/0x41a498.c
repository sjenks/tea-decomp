// name: FUN_0041a498
// address: 0x41a498
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041a498(int *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  char *local_c;
  
  FUN_00467ba8(0x478104);
  FUN_00446cf0(param_1);
  FUN_0044f1ec((int)local_14,*(int *)(*param_1 + 0x70),0x7f2b);
  FUN_00450c98(local_c,extraout_EDX,extraout_ECX,(int)(param_1 + 0xe),(uint *)local_c);
  if (local_c != (char *)0x0) {
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
      if (iVar1 != 0) goto LAB_0041a554;
    }
    FUN_0045680c();
  }
LAB_0041a554:
  *in_FS_OFFSET = local_38;
  return;
}

