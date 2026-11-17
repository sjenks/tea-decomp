// name: FUN_0045d674
// address: 0x45d674
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0045d674(int *param_1,LPMSG param_2)

{
  WPARAM WVar1;
  bool bVar2;
  SHORT SVar3;
  HWND pHVar4;
  int iVar5;
  tagRECT *ptVar6;
  LONG *pLVar7;
  int local_60 [4];
  tagRECT local_50;
  int local_40 [4];
  tagRECT local_30 [2];
  tagPOINT local_c;
  
  if (param_2->message == 0x100) {
    if (((param_2->wParam == 0xd) && (SVar3 = GetKeyState(0x11), -1 < SVar3)) &&
       (bVar2 = FUN_00454524((int)param_1,0x1dce), bVar2)) {
      FUN_0045734c();
      return true;
    }
    WVar1 = param_2->wParam;
    if ((WVar1 == 0x73) || (WVar1 == 0x74)) {
      FUN_0045de08(param_1,WVar1,0);
      return true;
    }
    if ((param_1[0x18] == 0) && (param_2->wParam == 0x70)) {
      (**(code **)(param_1[3] + 0xb4))();
      return true;
    }
  }
  else if (param_2->message == 0x205) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    local_30[0].left = 0;
    local_30[0].top = 0;
    local_30[0].right = 0;
    local_30[0].bottom = 0;
    FUN_004a7a30(*(int *)param_1[0x1a3],local_30);
    ptVar6 = local_30;
    pLVar7 = local_40;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar7 = ptVar6->left;
      ptVar6 = (tagRECT *)&ptVar6->top;
      pLVar7 = pLVar7 + 1;
    }
    local_50.left = 0;
    local_50.top = 0;
    local_50.right = 0;
    local_50.bottom = 0;
    FUN_004a7a30(param_1[0x84],&local_50);
    ptVar6 = &local_50;
    pLVar7 = local_60;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar7 = ptVar6->left;
      ptVar6 = (tagRECT *)&ptVar6->top;
      pLVar7 = pLVar7 + 1;
    }
    if (local_40[3] < local_60[3]) {
      local_40[3] = local_60[3];
    }
    if (local_40[2] < local_60[2]) {
      local_40[2] = local_60[2];
    }
    if (local_60[1] < local_40[1]) {
      local_40[1] = local_60[1];
    }
    if (local_60[0] < local_40[0]) {
      local_40[0] = local_60[0];
    }
    if (((local_c.x < local_40[0]) || (local_40[2] <= local_c.x)) ||
       ((local_c.y < local_40[1] || (local_40[3] <= local_c.y)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_0045c5f0(param_1,2);
      return true;
    }
  }
  else if (((param_2->message == 0x101) && (param_2->wParam == 0x5d)) &&
          (pHVar4 = GetFocus(), pHVar4 == *(HWND *)(param_1[0x84] + 0xc))) {
    FUN_0045c5f0(param_1,2);
    return true;
  }
  bVar2 = FUN_004167d8(param_1,param_2);
  return bVar2;
}

