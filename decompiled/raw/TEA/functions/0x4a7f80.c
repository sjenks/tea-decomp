// name: FUN_004a7f80
// address: 0x4a7f80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004a7f80(int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  SCROLLINFO local_20;
  
  iVar1 = FUN_004a7f40(param_1,param_2);
  FUN_004dc844(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 4;
  local_20.nPos = param_3;
  FUN_004a8244(param_1,param_2,&local_20,param_4);
  return iVar1;
}

