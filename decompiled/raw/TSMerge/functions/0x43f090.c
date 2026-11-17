// name: FUN_0043f090
// address: 0x43f090
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0043f090(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  
  BVar1 = LockFile(*(HANDLE *)(param_1 + 4),param_2,0,param_3,0);
  return BVar1 != 0;
}

