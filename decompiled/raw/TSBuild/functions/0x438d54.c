// name: FUN_00438d54
// address: 0x438d54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __cdecl FUN_00438d54(int param_1,int param_2)

{
  tagSCROLLINFO local_20;
  
  FUN_004675f0(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 2;
  FUN_00438ef0(param_1,param_2,&local_20);
  return local_20.nPage;
}

