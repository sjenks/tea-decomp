// name: FUN_00402768
// address: 0x402768
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00402768(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00467ba8(0x474a30);
  FUN_00459d78((int)local_24,(uint *)s_tsbuild_chm_0047435d);
  FUN_0041901c((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
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
      if (iVar1 != 0) goto LAB_00402823;
    }
    FUN_0045680c();
    local_1c = 0;
  }
LAB_00402823:
  FUN_00419b20(*(HWND *)(*param_1 + 0xc));
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
      if (iVar1 != 0) goto LAB_004028af;
    }
    FUN_0045680c();
  }
LAB_004028af:
  *in_FS_OFFSET = local_48;
  return;
}

