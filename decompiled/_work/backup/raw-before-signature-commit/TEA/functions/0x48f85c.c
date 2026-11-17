// name: FUN_0048f85c
// address: 0x48f85c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048f85c(undefined4 param_1,LPTEXTMETRICA param_2,int param_3)

{
  HDC hdc;
  BOOL BVar1;
  
  (**(code **)(*(int *)(param_3 + 5) + 0x14))();
  hdc = (HDC)(**(code **)(*(int *)(param_3 + 5) + 0x5c))();
  BVar1 = GetTextMetricsA(hdc,param_2);
  (**(code **)(*(int *)(param_3 + 5) + 0x1c))(BVar1,BVar1 != 0,*(int *)(param_3 + 5),param_3);
  return;
}

