// name: FUN_004baf6c
// address: 0x4baf6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl FUN_004baf6c(int param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileSize(*(HANDLE *)(param_1 + 4),(LPDWORD)0x0);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

