// name: FUN_0048e0f4
// address: 0x48e0f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl
FUN_0048e0f4(undefined4 *param_1,undefined4 *param_2,GRAYSTRINGPROC param_3,LPARAM param_4,
            int param_5,int *param_6)

{
  BOOL BVar1;
  
  if (param_5 < 0) {
    param_5 = 0;
  }
  BVar1 = GrayStringA((HDC)*param_1,(HBRUSH)*param_2,param_3,param_4,param_5,*param_6,param_6[1],
                      param_6[2] - *param_6,param_6[3] - param_6[1]);
  return BVar1 != 0;
}

