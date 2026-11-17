// name: FUN_004c9490
// address: 0x4c9490
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004c9490(int *param_1,undefined4 *param_2,int *param_3,char param_4)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_10;
  int iStack_c;
  
  FUN_004c8c78(param_1,param_2,(RECT *)param_3,param_4);
  if (param_4 != '\0') {
    FUN_00494454(param_3,1,1);
  }
  iStack_34 = param_3[3] - param_3[1];
  iVar4 = param_3[2] - *param_3;
  BVar1 = IsZoomed(*(HWND *)(*param_1 + 0xc));
  if (BVar1 != 0) {
    iVar2 = iStack_34 * -3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar3 = iVar4 + 1;
    if (iVar3 < 0) {
      iVar3 = iVar4 + 4;
    }
    iStack_24 = (iVar2 >> 3) + param_3[3];
    iStack_10 = (iVar3 >> 2) + *param_3;
    iStack_28 = (int)(iVar4 + 1U) >> 1;
    if (iStack_28 < 0) {
      iStack_28 = iStack_28 + (uint)((iVar4 + 1U & 1) != 0);
    }
    iStack_28 = iStack_28 + iStack_10;
    iStack_c = iStack_24;
    for (; iStack_10 < iStack_28; iStack_10 = iStack_10 + 1) {
      MoveToEx((HDC)*param_2,iStack_10,iStack_c,(LPPOINT)0x0);
      LineTo((HDC)*param_2,iStack_28,iStack_24);
      iStack_c = iStack_c + 1;
      iStack_28 = iStack_28 + -1;
      iStack_24 = iStack_24 + 1;
    }
  }
  BVar1 = IsZoomed(*(HWND *)(*param_1 + 0xc));
  if (BVar1 == 0) {
    iStack_34 = (iStack_34 * 2) / 3;
  }
  else {
    iStack_34 = iStack_34 * 3;
    if (iStack_34 < 0) {
      iStack_34 = iStack_34 + 7;
    }
    iStack_34 = iStack_34 >> 3;
  }
  iVar2 = iVar4 + 1;
  if (iVar2 < 0) {
    iVar2 = iVar4 + 4;
  }
  iStack_34 = iStack_34 + param_3[1];
  iStack_30 = (iVar2 >> 2) + *param_3;
  iStack_38 = (int)(iVar4 + 1U) >> 1;
  if (iStack_38 < 0) {
    iStack_38 = iStack_38 + (uint)((iVar4 + 1U & 1) != 0);
  }
  iStack_38 = iStack_38 + iStack_30;
  iStack_2c = iStack_34;
  for (; iStack_30 < iStack_38; iStack_30 = iStack_30 + 1) {
    MoveToEx((HDC)*param_2,iStack_30,iStack_2c,(LPPOINT)0x0);
    LineTo((HDC)*param_2,iStack_38,iStack_34);
    iStack_2c = iStack_2c + -1;
    iStack_38 = iStack_38 + -1;
    iStack_34 = iStack_34 + -1;
  }
  return;
}

