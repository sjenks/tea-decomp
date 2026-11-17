// name: FUN_00416dbc
// address: 0x416dbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_00416dbc(undefined4 *param_1,uint *param_2,int *param_3,int param_4,int param_5,DWORD param_6)

{
  int w;
  int h;
  
  FUN_00416b78(param_1,param_2);
  w = (param_3[2] - *param_3) - param_4;
  h = (param_3[3] - param_3[1]) - param_5;
  PatBlt((HDC)*param_1,*param_3,param_3[1],param_4,h,param_6);
  PatBlt((HDC)*param_1,*param_3 + param_4,param_3[1],w,param_5,param_6);
  PatBlt((HDC)*param_1,*param_3,param_3[1] + h,w,param_5,param_6);
  PatBlt((HDC)*param_1,*param_3 + w,param_3[1] + param_5,param_4,h,param_6);
  FUN_00416ca4(param_1);
  return;
}

