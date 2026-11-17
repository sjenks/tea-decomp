// name: FUN_00469c98
// address: 0x469c98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00469c98(byte *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_004699a8(param_1,param_2 * param_3,param_4);
    param_3 = uVar1 / param_2;
  }
  return param_3;
}

