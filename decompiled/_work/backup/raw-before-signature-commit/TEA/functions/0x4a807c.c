// name: FUN_004a807c
// address: 0x4a807c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a807c(int param_1,int param_2,UINT param_3,byte param_4)

{
  SCROLLINFO local_20;
  
  FUN_004dc844(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 2;
  local_20.nPage = param_3;
  FUN_004a8244(param_1,param_2,&local_20,param_4);
  return;
}

