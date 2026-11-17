// name: FUN_0040ec5c
// address: 0x40ec5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0040ec5c(undefined4 *param_1)

{
  LSTATUS LVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined4 *in_FS_OFFSET;
  CHAR local_240 [264];
  BYTE local_138 [264];
  DWORD local_30;
  HKEY local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_00455f04(0x46404c);
  local_18 = 8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = 0x106;
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,s_CLSID__adb880a6_d8ff_11cf_9377_0_00463f9d,0,1,&local_2c);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_2c,s_Help_library_not_found_00463fe4 + 0x16,(LPDWORD)0x0,
                             (LPDWORD)0x0,local_138,&local_30);
    if (LVar1 == 0) {
      ExpandEnvironmentStringsA((LPCSTR)local_138,local_240,0x106);
      hModule = LoadLibraryA(local_240);
      *param_1 = hModule;
      if (hModule != (HMODULE)0x0) {
        pFVar2 = GetProcAddress(hModule,s_HtmlHelpA_0046400b);
        param_1[1] = pFVar2;
        if (pFVar2 == (FARPROC)0x0) {
          FreeLibrary((HMODULE)*param_1);
          *param_1 = 0;
        }
      }
    }
    RegCloseKey(local_2c);
  }
  if (param_1[1] != 0) {
    (*(code *)param_1[1])();
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

