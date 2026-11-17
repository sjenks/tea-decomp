// name: FUN_00468bc8
// address: 0x468bc8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00468bc8(void)

{
  UINT uMode;
  HMODULE hLibModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 local_2c;
  
  FUN_004dce64(0x4fcbb0);
  uMode = SetErrorMode(0x8001);
  hLibModule = LoadLibraryA(s_RICHED20_DLL_004fcc05);
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

