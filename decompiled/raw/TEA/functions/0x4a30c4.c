// name: FUN_004a30c4
// address: 0x4a30c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a30c4(int *param_1)

{
  LPSTR lpBuffer;
  HMODULE hInstance;
  HCURSOR hIcon;
  HICON pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x50a720);
  FUN_004a7bfc(*param_1,*(int *)(*param_1 + 0x70),0x3f8);
  if (*(int *)(*param_1 + 0x58) == 0) {
    lpBuffer = (LPSTR)FUN_004cc180();
    GetWindowsDirectoryA(lpBuffer,0x104);
    FUN_004dc8e8(lpBuffer,s__winhlp32_exe_0050a20b);
    hInstance = LoadLibraryA(lpBuffer);
    if (hInstance != (HMODULE)0x0) {
      hIcon = LoadCursorA(hInstance,(LPCSTR)0x6a);
      if (hIcon != (HCURSOR)0x0) {
        pHVar1 = CopyIcon(hIcon);
        *(HICON *)(*param_1 + 0x58) = pHVar1;
      }
      FreeLibrary(hInstance);
    }
    FUN_004cc0cc();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

