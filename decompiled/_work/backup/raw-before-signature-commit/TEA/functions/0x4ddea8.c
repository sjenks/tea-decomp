// name: FUN_004ddea8
// address: 0x4ddea8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004ddea8(HANDLE param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileType(param_1);
  return DVar1 == 2;
}

