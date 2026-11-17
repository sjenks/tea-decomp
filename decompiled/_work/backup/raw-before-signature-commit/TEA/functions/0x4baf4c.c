// name: FUN_004baf4c
// address: 0x4baf4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl FUN_004baf4c(int param_1)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),0,(PLONG)0x0,1);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

