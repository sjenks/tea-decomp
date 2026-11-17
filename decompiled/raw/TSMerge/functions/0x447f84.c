// name: FUN_00447f84
// address: 0x447f84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00447f84(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_00447fb8(param_1,param_2,&local_8);
  if (iVar1 != 1) {
    local_8 = FUN_0042b294(*param_1);
  }
  return local_8;
}

