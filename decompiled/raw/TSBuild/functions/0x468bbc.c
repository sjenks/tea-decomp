// name: FUN_00468bbc
// address: 0x468bbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00468bbc(uint param_1)

{
  DWORD DVar1;
  
  if (DAT_00489524 <= param_1) {
    return false;
  }
  DVar1 = GetFileType(*(HANDLE *)(&DAT_0048d570 + param_1 * 4));
  return DVar1 == 2;
}

