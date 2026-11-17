// name: FUN_00442098
// address: 0x442098
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00442098(int *param_1,uint *param_2)

{
  HMENU hMenu;
  BOOL BVar1;
  undefined4 uVar2;
  
  if (*(uint **)(*param_1 + 0x30) != param_2) {
    if ((short)((uint)*(undefined4 *)(*param_1 + 0x30) >> 0x10) != 0) {
      FUN_0044b2cc();
    }
    if ((short)((uint)param_2 >> 0x10) != 0) {
      param_2 = (uint *)FUN_0041fd2c(param_2);
    }
    *(uint **)(*param_1 + 0x30) = param_2;
  }
  if (*(int *)(*param_1 + 0xc) == 0) {
    uVar2 = CONCAT31((int3)((uint)*param_1 >> 8),1);
  }
  else {
    hMenu = GetMenu(*(HWND *)(*param_1 + 0xc));
    FUN_00444d34(*(int *)(*param_1 + 0x70),*(LPCSTR *)(*param_1 + 0x30));
    BVar1 = (**(code **)(param_1[3] + 8))();
    if ((char)BVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      if (hMenu != (HMENU)0x0) {
        BVar1 = DestroyMenu(hMenu);
      }
      uVar2 = CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
  }
  return uVar2;
}

