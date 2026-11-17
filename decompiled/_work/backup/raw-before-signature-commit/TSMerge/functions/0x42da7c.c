// name: FUN_0042da7c
// address: 0x42da7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0042da7c(int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  SCROLLINFO local_20;
  
  iVar1 = FUN_0042da3c(param_1,param_2);
  FUN_00455a40(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 4;
  local_20.nPos = param_3;
  FUN_0042dd40(param_1,param_2,&local_20,param_4);
  return iVar1;
}

