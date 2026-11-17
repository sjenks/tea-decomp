// name: FUN_0042c918
// address: 0x42c918
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042c918(int param_1)

{
  char cVar1;
  undefined4 in_EAX;
  HWND pHVar2;
  LRESULT LVar3;
  code *pcVar4;
  int iVar5;
  undefined3 uVar6;
  HMENU hMenu;
  
  uVar6 = (undefined3)((uint)in_EAX >> 8);
  if (*(int *)(param_1 + 0xc) == 0) {
    hMenu = (HMENU)0x0;
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffffd;
    if ((*(byte *)(param_1 + 0x74) & 0x10) != 0) {
      FUN_0042d4dc(param_1,0,0x40000,0);
    }
    if ((*(byte *)(param_1 + 0x74) & 4) == 0) {
      cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
      if (cVar1 == '\0') {
        FUN_0042e05c(param_1,0x7fed);
      }
      else {
        FUN_004236e8(param_1);
        FUN_0042c89c(param_1);
        if (*(int *)(param_1 + 0x30) == 0) {
          hMenu = *(HMENU *)(param_1 + 0x34);
        }
        else {
          hMenu = FUN_00444d34(*(int *)(param_1 + 0x70),*(LPCSTR *)(param_1 + 0x30));
        }
        (**(code **)(*(int *)(param_1 + 8) + 0x14))();
      }
    }
    else {
      if (*(int *)(param_1 + 0x14) == 0) {
        pHVar2 = (HWND)0x0;
      }
      else {
        pHVar2 = GetDlgItem(*(HWND *)(*(int *)(param_1 + 0x14) + 0xc),*(int *)(param_1 + 0x34));
      }
      *(HWND *)(param_1 + 0xc) = pHVar2;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(int *)(param_1 + 0x30) != 0) {
        DestroyMenu(hMenu);
      }
      FUN_0042e05c(param_1,0x7feb);
    }
    LVar3 = FUN_0042bc6c(*(HWND *)(param_1 + 0xc),*(LPARAM *)(param_1 + 0x6c));
    if (LVar3 == 0) {
      FUN_0042d2c4(param_1);
      FUN_0042d338(param_1,'\0');
      pcVar4 = (code *)GetWindowLongA(*(HWND *)(param_1 + 0xc),-4);
      if (pcVar4 == FUN_004236f8) {
        iVar5 = FUN_004236d8();
        if (iVar5 == 0) {
          FUN_004236e8(param_1);
        }
        FUN_0042d1a4(param_1,0x4400,0,0);
        *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x20;
      }
      else {
        FUN_0042cbe0(param_1);
        iVar5 = FUN_004236d8();
        if (param_1 == iVar5) {
          FUN_004236e8(0);
        }
        *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0xa0;
      }
      LVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x78))();
    }
    uVar6 = (undefined3)((uint)LVar3 >> 8);
  }
  return CONCAT31(uVar6,1);
}

