// name: FUN_00474bb0
// address: 0x474bb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00474bb0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  FUN_004dce64(0x4ff9d0);
  FUN_004cf628((int)local_24,(uint *)s_ordering_url_004ff3fd);
  FUN_00437470((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
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
      if (iVar1 != 0) goto LAB_00474c64;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_00474c64:
  ShellExecuteA((HWND)0x0,&DAT_004ff3f8,local_c,(LPCSTR)0x0,(LPCSTR)0x0,9);
  if (local_c != (LPCSTR)0x0) {
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
      if (iVar1 != 0) goto LAB_00474cf0;
    }
    FUN_004cc0bc();
  }
LAB_00474cf0:
  *in_FS_OFFSET = local_48;
  return;
}

