// name: FUN_00438c6c
// address: 0x438c6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438c6c(int param_1,int param_2,int *param_3,int *param_4)

{
  tagSCROLLINFO local_20;
  
  FUN_004675f0(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 1;
  FUN_00438ef0(param_1,param_2,&local_20);
  *param_3 = local_20.nMin;
  *param_4 = local_20.nMax;
  return;
}

