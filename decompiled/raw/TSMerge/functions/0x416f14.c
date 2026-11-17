// name: FUN_00416f14
// address: 0x416f14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00416f14(int param_1,int param_2)

{
  HDC hdc;
  
  hdc = (HDC)(**(code **)(*(int *)(param_1 + 5) + 0x5c))();
  GetDeviceCaps(hdc,param_2);
  return;
}

