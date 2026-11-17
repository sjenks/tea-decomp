// name: FUN_004a7f40
// address: 0x4a7f40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004a7f40(int param_1,int param_2)

{
  tagSCROLLINFO local_20;
  
  FUN_004dc844(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 4;
  FUN_004a8260(param_1,param_2,&local_20);
  return local_20.nPos;
}

