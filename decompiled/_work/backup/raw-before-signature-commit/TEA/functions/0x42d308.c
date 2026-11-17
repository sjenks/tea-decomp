// name: FUN_0042d308
// address: 0x42d308
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042d308(int *param_1,byte param_2,int param_3)

{
  HWND pHVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  tagRECT *ptVar6;
  LONG *pLVar7;
  bool bVar8;
  int local_78 [8];
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  int local_18 [4];
  int local_8;
  
  SetCapture(*(HWND *)(*param_1 + 0xc));
  SetTimer(*(HWND *)(*param_1 + 0xc),1,0x32,(TIMERPROC)0x0);
  pHVar2 = GetFocus();
  pHVar1 = *(HWND *)(*param_1 + 0xc);
  SetFocus(*(HWND *)(*param_1 + 0xc));
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  FUN_004a7a6c(*param_1,&local_28);
  ptVar6 = &local_28;
  pLVar7 = local_18;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pLVar7 = ptVar6->left;
    ptVar6 = (tagRECT *)&ptVar6->top;
    pLVar7 = pLVar7 + 1;
  }
  if (pHVar2 != pHVar1) {
    local_2c = param_1[0x40];
    local_30 = local_18[2] - local_18[0];
    local_38 = 0;
    local_34 = 0;
    (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
  }
  if (param_1[0x44] == -1) {
    param_1[0x44] = 0;
  }
  bVar8 = (param_2 & 4) != 0;
  if ((bVar8) && (param_1[0x43] == -1)) {
    param_1[0x43] = param_1[0x44];
  }
  else if ((!bVar8) && (param_1[0x43] != -1)) {
    param_1[0x43] = -1;
  }
  local_8 = param_1[0x44];
  iVar5 = 0;
  if (0 < param_1[0x40]) {
    iVar5 = (*(int *)(*(int *)(*param_1 + 0x44) + 0xc) + *(int *)(param_3 + 4)) / param_1[0x40];
  }
  iVar3 = FUN_0042ba08((int)param_1);
  if (iVar5 < iVar3) {
    if (((param_2 & 8) == 0) || (bVar8)) {
      if (bVar8) {
        iVar3 = 1;
      }
      else {
        iVar3 = 2;
      }
      param_1[0x42] = iVar3;
      iVar3 = iVar5;
      if (bVar8) {
        iVar3 = param_1[0x43];
      }
      param_1[0x41] = iVar3;
      FUN_00430438(param_1);
      local_40 = param_1[0x27];
      local_50 = *(int *)(local_40 + 8);
      FUN_0042a474(local_78 + 4,(int)(param_1 + 0x1e),local_58,local_54,local_50);
    }
    else {
      iVar3 = FUN_004307e4((int)param_1,iVar5);
      param_1[0x42] = (uint)(iVar3 != 1);
      param_1[0x41] = iVar5;
    }
    param_1[0x44] = iVar5;
    if (local_8 < iVar5) {
      iVar3 = iVar5 - local_8;
      iVar5 = local_8;
    }
    else {
      iVar3 = local_8 - iVar5;
    }
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    uVar4 = FUN_00430290(param_1,iVar5,iVar3 + 1,local_78);
    if ((char)uVar4 != '\0') {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
  }
  return;
}

