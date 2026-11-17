// name: FUN_00453f1c
// address: 0x453f1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00453f1c(int *param_1,uint param_2,HWND param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_00453f5c(param_1,param_2,param_3,param_4,&local_8);
  if (iVar1 != 1) {
    local_8 = FUN_0043661c((undefined4 *)*param_1,param_2,param_3,param_4);
  }
  return local_8;
}

