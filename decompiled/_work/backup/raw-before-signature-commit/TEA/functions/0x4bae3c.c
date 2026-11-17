// name: FUN_004bae3c
// address: 0x4bae3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl FUN_004bae3c(int param_1,LPVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = ReadFile(*(HANDLE *)(param_1 + 4),param_2,param_3,&local_8,(LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    return local_8;
  }
  return 0xffffffff;
}

