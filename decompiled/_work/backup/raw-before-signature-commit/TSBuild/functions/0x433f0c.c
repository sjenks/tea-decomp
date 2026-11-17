// name: FUN_00433f0c
// address: 0x433f0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00433f0c(int *param_1)

{
  LPSTR lpBuffer;
  HMODULE hInstance;
  HCURSOR hIcon;
  HICON pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47dcdc);
  FUN_0043888c(*param_1,*(int *)(*param_1 + 0x70),0x3f8);
  if (*(int *)(*param_1 + 0x58) == 0) {
    lpBuffer = (LPSTR)FUN_004568d0();
    GetWindowsDirectoryA(lpBuffer,0x104);
    FUN_00467694(lpBuffer,s__winhlp32_exe_0047d7c7);
    hInstance = LoadLibraryA(lpBuffer);
    if (hInstance != (HMODULE)0x0) {
      hIcon = LoadCursorA(hInstance,(LPCSTR)0x6a);
      if (hIcon != (HCURSOR)0x0) {
        pHVar1 = CopyIcon(hIcon);
        *(HICON *)(*param_1 + 0x58) = pHVar1;
      }
      FreeLibrary(hInstance);
    }
    FUN_0045681c();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

