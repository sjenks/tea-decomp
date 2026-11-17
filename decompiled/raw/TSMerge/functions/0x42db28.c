// name: FUN_0042db28
// address: 0x42db28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042db28(int param_1,int param_2,int param_3,int param_4,byte param_5)

{
  SCROLLINFO local_20;
  
  FUN_00455a40(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 1;
  local_20.nMin = param_3;
  local_20.nMax = param_4;
  FUN_0042dd40(param_1,param_2,&local_20,param_5);
  return;
}

