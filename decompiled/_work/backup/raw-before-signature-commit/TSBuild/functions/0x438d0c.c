// name: FUN_00438d0c
// address: 0x438d0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438d0c(int param_1,int param_2,UINT param_3,byte param_4)

{
  SCROLLINFO local_20;
  
  FUN_004675f0(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 2;
  local_20.nPage = param_3;
  FUN_00438ed4(param_1,param_2,&local_20,param_4);
  return;
}

