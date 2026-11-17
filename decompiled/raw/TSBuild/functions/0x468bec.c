// name: FUN_00468bec
// address: 0x468bec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00468bec(HANDLE param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileType(param_1);
  return DVar1 == 2;
}

