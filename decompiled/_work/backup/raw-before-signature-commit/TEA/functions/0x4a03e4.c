// name: FUN_004a03e4
// address: 0x4a03e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a03e4(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  FUN_0048d938(param_1,param_4);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  (**(code **)(*(int *)((int)param_1 + 5) + 0x20))();
  BitBlt((HDC)*param_1,*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],
         (HDC)*param_2,0,0,0xe20746);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  (**(code **)(*(int *)((int)param_1 + 5) + 0x20))();
  FUN_0048da64(param_1);
  return;
}

