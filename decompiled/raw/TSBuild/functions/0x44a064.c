// name: FUN_0044a064
// address: 0x44a064
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl FUN_0044a064(int param_1,LPVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = ReadFile(*(HANDLE *)(param_1 + 4),param_2,param_3,&local_8,(LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    return local_8;
  }
  return 0xffffffff;
}

