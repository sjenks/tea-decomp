// name: FUN_00421f30
// address: 0x421f30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_00421f30(undefined4 *param_1,uint *param_2,int *param_3,int param_4,int param_5,DWORD param_6)

{
  int w;
  int h;
  
  FUN_00421cec(param_1,param_2);
  w = (param_3[2] - *param_3) - param_4;
  h = (param_3[3] - param_3[1]) - param_5;
  PatBlt((HDC)*param_1,*param_3,param_3[1],param_4,h,param_6);
  PatBlt((HDC)*param_1,*param_3 + param_4,param_3[1],w,param_5,param_6);
  PatBlt((HDC)*param_1,*param_3,param_3[1] + h,w,param_5,param_6);
  PatBlt((HDC)*param_1,*param_3 + w,param_3[1] + param_5,param_4,h,param_6);
  FUN_00421e18(param_1);
  return;
}

