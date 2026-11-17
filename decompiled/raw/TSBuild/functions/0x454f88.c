// name: FUN_00454f88
// address: 0x454f88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00454f88(int *param_1)

{
  HMENU hMenu;
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  UINT UVar4;
  int *piVar5;
  int *piVar6;
  int local_24 [4];
  undefined1 local_14 [16];
  
  hMenu = GetSystemMenu(*(HWND *)(*param_1 + 0xc),0);
  if (hMenu != (HMENU)0x0) {
    uVar1 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
    BVar2 = IsIconic(*(HWND *)(*param_1 + 0xc));
    if ((BVar2 == 0) && (BVar2 = IsZoomed(*(HWND *)(*param_1 + 0xc)), BVar2 == 0)) {
      UVar4 = 1;
    }
    else {
      UVar4 = 0;
    }
    EnableMenuItem(hMenu,0xf120,UVar4);
    EnableMenuItem(hMenu,0xf010,0);
    EnableMenuItem(hMenu,0xf000,(uint)((uVar1 & 0x40000) == 0));
    if (((uVar1 & 0x20000) == 0) || (BVar2 = IsIconic(*(HWND *)(*param_1 + 0xc)), BVar2 != 0)) {
      UVar4 = 1;
    }
    else {
      UVar4 = 0;
    }
    EnableMenuItem(hMenu,0xf020,UVar4);
    if (((uVar1 & 0x10000) == 0) || (BVar2 = IsZoomed(*(HWND *)(*param_1 + 0xc)), BVar2 != 0)) {
      UVar4 = 1;
    }
    else {
      UVar4 = 0;
    }
    EnableMenuItem(hMenu,0xf030,UVar4);
    FUN_00454e7c(local_24,param_1);
    piVar5 = local_24;
    piVar6 = (int *)local_14;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    ClientToScreen(*(HWND *)(*param_1 + 0xc),(LPPOINT)local_14);
    ClientToScreen(*(HWND *)(*param_1 + 0xc),(LPPOINT)(local_14 + 8));
    TrackPopupMenu(hMenu,0,local_14._0_4_ - param_1[6],local_14._4_4_ - param_1[7],0,
                   *(HWND *)(*param_1 + 0xc),(RECT *)local_14);
  }
  return;
}

