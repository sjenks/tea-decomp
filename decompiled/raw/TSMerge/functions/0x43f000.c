// name: FUN_0043f000
// address: 0x43f000
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl FUN_0043f000(int param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileSize(*(HANDLE *)(param_1 + 4),(LPDWORD)0x0);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

