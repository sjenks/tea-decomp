// name: FUN_004534c4
// address: 0x4534c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004534c4(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_004534f8(param_1,param_2,&local_8);
  if (iVar1 != 1) {
    local_8 = FUN_00436428(*param_1);
  }
  return local_8;
}

