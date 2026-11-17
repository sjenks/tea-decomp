// name: FUN_0043f054
// address: 0x43f054
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl FUN_0043f054(int param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),param_2,(PLONG)0x0,param_3);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

