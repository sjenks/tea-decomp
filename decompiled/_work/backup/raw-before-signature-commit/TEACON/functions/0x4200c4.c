// name: FUN_004200c4
// address: 0x4200c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004200c4(uint param_1)

{
  DWORD DVar1;
  
  if (DAT_00432528 <= param_1) {
    return false;
  }
  DVar1 = GetFileType(*(HANDLE *)(&DAT_00434d98 + param_1 * 4));
  return DVar1 == 2;
}

