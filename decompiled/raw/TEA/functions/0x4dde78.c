// name: FUN_004dde78
// address: 0x4dde78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004dde78(uint param_1)

{
  DWORD DVar1;
  
  if (DAT_005177f0 <= param_1) {
    return false;
  }
  DVar1 = GetFileType(*(HANDLE *)(&DAT_0051c0f8 + param_1 * 4));
  return DVar1 == 2;
}

