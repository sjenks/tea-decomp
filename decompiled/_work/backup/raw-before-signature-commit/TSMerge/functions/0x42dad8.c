// name: FUN_0042dad8
// address: 0x42dad8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042dad8(int param_1,int param_2,int *param_3,int *param_4)

{
  tagSCROLLINFO local_20;
  
  FUN_00455a40(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 1;
  FUN_0042dd5c(param_1,param_2,&local_20);
  *param_3 = local_20.nMin;
  *param_4 = local_20.nMax;
  return;
}

