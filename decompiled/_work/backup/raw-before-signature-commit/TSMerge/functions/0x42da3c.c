// name: FUN_0042da3c
// address: 0x42da3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0042da3c(int param_1,int param_2)

{
  tagSCROLLINFO local_20;
  
  FUN_00455a40(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 4;
  FUN_0042dd5c(param_1,param_2,&local_20);
  return local_20.nPos;
}

