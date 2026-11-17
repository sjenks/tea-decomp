// name: FUN_00428d78
// address: 0x428d78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428d78(int *param_1)

{
  LPSTR lpBuffer;
  HMODULE hInstance;
  HCURSOR hIcon;
  HICON pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x469f00);
  FUN_0042d6f8(*param_1,*(int *)(*param_1 + 0x70),0x3f8);
  if (*(int *)(*param_1 + 0x58) == 0) {
    lpBuffer = (LPSTR)FUN_0044b390();
    GetWindowsDirectoryA(lpBuffer,0x104);
    FUN_00455ae4(lpBuffer,s__winhlp32_exe_004699eb);
    hInstance = LoadLibraryA(lpBuffer);
    if (hInstance != (HMODULE)0x0) {
      hIcon = LoadCursorA(hInstance,(LPCSTR)0x6a);
      if (hIcon != (HCURSOR)0x0) {
        pHVar1 = CopyIcon(hIcon);
        *(HICON *)(*param_1 + 0x58) = pHVar1;
      }
      FreeLibrary(hInstance);
    }
    FUN_0044b2dc();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

