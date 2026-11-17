// name: FUN_0043f11c
// address: 0x43f11c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0043f11c(int param_1,DWORD param_2,DWORD param_3,DWORD param_4,DWORD param_5)

{
  BOOL BVar1;
  
  BVar1 = UnlockFile(*(HANDLE *)(param_1 + 4),param_2,param_3,param_4,param_5);
  return BVar1 != 0;
}

