// name: FUN_0043ef84
// address: 0x43ef84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl FUN_0043ef84(int param_1)

{
  DWORD DVar1;
  DWORD local_8;
  
  DVar1 = GetFileSize(*(HANDLE *)(param_1 + 4),&local_8);
  return DVar1;
}

