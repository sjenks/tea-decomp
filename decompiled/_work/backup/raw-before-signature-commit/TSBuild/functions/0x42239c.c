// name: FUN_0042239c
// address: 0x42239c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl
FUN_0042239c(undefined4 *param_1,int param_2,int param_3,ushort param_4,RECT *param_5,uint *param_6,
            char *param_7,INT *param_8)

{
  BOOL BVar1;
  
  if ((int)param_7 < 0) {
    param_7 = FUN_004677a0(param_6);
  }
  BVar1 = ExtTextOutA((HDC)*param_1,param_2,param_3,(uint)param_4,param_5,(LPCSTR)param_6,
                      (UINT)param_7,param_8);
  return BVar1 != 0;
}

