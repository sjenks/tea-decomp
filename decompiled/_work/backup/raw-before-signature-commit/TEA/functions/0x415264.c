// name: FUN_00415264
// address: 0x415264
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00415264(int *param_1,INT_PTR param_2)

{
  BOOL BVar1;
  uint local_130 [64];
  WINDOWPLACEMENT local_30;
  
  BVar1 = IsWindow(*(HWND *)(*param_1 + 0xc));
  if (BVar1 != 0) {
    local_30.length = 0x2c;
    BVar1 = GetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_30);
    if (BVar1 != 0) {
      IsZoomed(*(HWND *)(*param_1 + 0xc));
      FUN_0044eee4((undefined1 *)local_130);
      FUN_0041717c((int)param_1,(uint *)s_Position_004f7360,local_130);
    }
  }
  if (param_1[0x13] == 0) {
    FUN_004b0be0(param_1,param_2);
  }
  else {
    (**(code **)(param_1[3] + 0x40))();
  }
  return;
}

