// name: FUN_00438c10
// address: 0x438c10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00438c10(int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  SCROLLINFO local_20;
  
  iVar1 = FUN_00438bd0(param_1,param_2);
  FUN_004675f0(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 4;
  local_20.nPos = param_3;
  FUN_00438ed4(param_1,param_2,&local_20,param_4);
  return iVar1;
}

