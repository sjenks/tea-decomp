// name: FUN_00431504
// address: 0x431504
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00431504(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH pHVar1;
  
  if (*param_1 != 0) {
    FUN_0041d184(*param_1);
  }
  pHVar1 = FUN_00431540(param_2,param_3,param_4);
  *param_1 = (uint)pHVar1;
  FUN_0041cf04(*param_1,2);
  return;
}

