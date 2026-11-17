// name: FUN_0041dbf4
// address: 0x41dbf4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl
FUN_0041dbf4(int *param_1,HWND param_2,HWND param_3,int param_4,int param_5,int param_6,int param_7,
            UINT param_8)

{
  HDWP pvVar1;
  
  pvVar1 = DeferWindowPos((HDWP)*param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *param_1 = (int)pvVar1;
  return *param_1 != 0;
}

