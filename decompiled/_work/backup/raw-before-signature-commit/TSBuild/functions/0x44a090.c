// name: FUN_0044a090
// address: 0x44a090
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044a090(int param_1,LPCVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 4),param_2,param_3,&local_8,(LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    return CONCAT31((int3)((uint)BVar1 >> 8),1);
  }
  return 0;
}

