// name: FUN_0043f01c
// address: 0x43f01c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl FUN_0043f01c(int param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  DWORD DVar1;
  LONG local_8;
  
  local_8 = param_3;
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),param_2,&local_8,param_4);
  return DVar1;
}

