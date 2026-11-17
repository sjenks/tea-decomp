// name: FUN_0042db78
// address: 0x42db78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042db78(int param_1,int param_2,UINT param_3,byte param_4)

{
  SCROLLINFO local_20;
  
  FUN_00455a40(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 2;
  local_20.nPage = param_3;
  FUN_0042dd40(param_1,param_2,&local_20,param_4);
  return;
}

