// name: FUN_004ad1d0
// address: 0x4ad1d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ad1d0(int *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x50c6c0);
  for (hWnd = GetWindow(*(HWND *)(*param_1 + 0xc),5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    LVar1 = FUN_004a614c(hWnd,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar1 != 0) {
      (*(code *)**(undefined4 **)(LVar1 + 8))();
    }
  }
  FUN_004a7070();
  *in_FS_OFFSET = local_30;
  return;
}

