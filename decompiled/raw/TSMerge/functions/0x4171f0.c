// name: FUN_004171f0
// address: 0x4171f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004171f0(undefined4 *param_1,int param_2,int param_3,uint *param_4,char *param_5)

{
  BOOL BVar1;
  
  if ((int)param_5 < 0) {
    param_5 = FUN_00455bf0(param_4);
  }
  BVar1 = TextOutA((HDC)*param_1,param_2,param_3,(LPCSTR)param_4,(int)param_5);
  return BVar1 != 0;
}

