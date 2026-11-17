// name: FUN_00410328
// address: 0x410328
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00410328(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - (int)param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  if (iVar1 >> 2 < 0x11) {
    FUN_00410378(param_1,param_2);
  }
  else {
    FUN_00410378(param_1,param_1 + 0x10);
    FUN_004103f8(param_1 + 0x10,param_2);
  }
  return;
}

