// name: FUN_004aa8b0
// address: 0x4aa8b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004aa8b0(undefined4 *param_1,MSG *param_2)

{
  char cVar1;
  undefined4 uVar2;
  UINT local_24 [3];
  undefined4 local_18;
  UINT local_14;
  WPARAM local_10;
  undefined4 local_8;
  
  cVar1 = (**(code **)(*(int *)((int)param_1 + 0x1b) + 0x1c))();
  if (cVar1 == '\0') {
    TranslateMessage(param_2);
    if (param_2->hwnd == (HWND)0x0) {
      local_10 = param_2->wParam;
      local_14 = param_2->message;
      local_8 = 0;
      cVar1 = (**(code **)(*(int *)((int)param_1 + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_0048e7e0(*param_1,(int)&local_14);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      local_24[0] = param_2->message;
      local_24[1] = 0;
      local_18 = 0;
      cVar1 = (**(code **)(*(int *)((int)param_1 + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_0048e7e0(*param_1,(int)local_24);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    DispatchMessageA(param_2);
    FUN_004aaef4((int)param_1);
  }
  return 0;
}

