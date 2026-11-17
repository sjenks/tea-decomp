// name: FUN_004a7fdc
// address: 0x4a7fdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a7fdc(int param_1,int param_2,int *param_3,int *param_4)

{
  tagSCROLLINFO local_20;
  
  FUN_004dc844(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 1;
  FUN_004a8260(param_1,param_2,&local_20);
  *param_3 = local_20.nMin;
  *param_4 = local_20.nMax;
  return;
}

