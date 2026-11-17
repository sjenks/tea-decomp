// name: FUN_00419d5c
// address: 0x419d5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00419d5c(void)

{
  UINT uMode;
  HMODULE hLibModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 local_2c;
  
  FUN_00467ba8(0x477e39);
  uMode = SetErrorMode(0x8001);
  hLibModule = LoadLibraryA(s_RICHED20_DLL_00477eb2);
  if (hLibModule < (HMODULE)0x21) {
    uVar1 = 1;
    SetErrorMode(uMode);
    *in_FS_OFFSET = local_2c;
  }
  else {
    FreeLibrary(hLibModule);
    uVar1 = 2;
    SetErrorMode(uMode);
    *in_FS_OFFSET = local_2c;
  }
  return uVar1;
}

