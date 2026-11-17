// name: FUN_00426484
// address: 0x426484
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_00426484(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5,
            int *param_6)

{
  PatBlt((HDC)*param_1,0,0,*param_3,param_3[1],0xff0062);
  if (*param_6 != DAT_00476bac) {
    (**(code **)(*(int *)((int)param_4 + 5) + 0x20))();
    BitBlt((HDC)*param_1,*param_2,param_2[1],param_5[2] - *param_5,param_5[3] - param_5[1],
           (HDC)*param_4,*param_5,param_5[1],0xcc0020);
    (**(code **)(*(int *)((int)param_4 + 5) + 0x20))();
  }
  return;
}

