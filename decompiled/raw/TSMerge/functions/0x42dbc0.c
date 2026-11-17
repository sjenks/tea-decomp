// name: FUN_0042dbc0
// address: 0x42dbc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __cdecl FUN_0042dbc0(int param_1,int param_2)

{
  tagSCROLLINFO local_20;
  
  FUN_00455a40(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 2;
  FUN_0042dd5c(param_1,param_2,&local_20);
  return local_20.nPage;
}

