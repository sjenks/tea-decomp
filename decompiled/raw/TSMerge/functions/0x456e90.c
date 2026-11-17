// name: FUN_00456e90
// address: 0x456e90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00456e90(uint param_1)

{
  DWORD DVar1;
  
  if (DAT_00474b38 <= param_1) {
    return false;
  }
  DVar1 = GetFileType(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4));
  return DVar1 == 2;
}

