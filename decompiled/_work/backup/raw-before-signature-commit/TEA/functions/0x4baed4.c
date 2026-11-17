// name: FUN_004baed4
// address: 0x4baed4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl FUN_004baed4(int param_1)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),0,(PLONG)0x0,1);
  return DVar1;
}

