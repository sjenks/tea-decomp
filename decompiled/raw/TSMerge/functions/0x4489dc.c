// name: FUN_004489dc
// address: 0x4489dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004489dc(int *param_1,uint param_2,HWND param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_00448a1c(param_1,param_2,param_3,param_4,&local_8);
  if (iVar1 != 1) {
    local_8 = FUN_0042b488((undefined4 *)*param_1,param_2,param_3,param_4);
  }
  return local_8;
}

