// name: FUN_0042bdf0
// address: 0x42bdf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042bdf0(int *param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  tagRECT *ptVar3;
  LONG *pLVar4;
  tagRECT local_44;
  int local_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  tagPOINT local_c;
  
  if (param_2 != '\0') {
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = 0;
    local_44.bottom = 0;
    FUN_004a7a6c(*param_1,&local_44);
    ptVar3 = &local_44;
    pLVar4 = local_34;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pLVar4 = ptVar3->left;
      ptVar3 = (tagRECT *)&ptVar3->top;
      pLVar4 = pLVar4 + 1;
    }
    iVar2 = FUN_0042ba08((int)param_1);
    if (iVar2 * param_1[0x40] - (local_34[3] - local_34[1]) != 0 &&
        local_34[3] - local_34[1] <= iVar2 * param_1[0x40]) {
      (**(code **)(**(int **)(*param_1 + 0x44) + 0x14))();
      local_c.x = local_34[2] - local_34[0];
      local_c.y = 0;
      MapWindowPoints(*(HWND *)(*param_1 + 0xc),*(HWND *)(*(int *)param_1[0x38] + 0xc),&local_c,1);
      local_14 = GetSystemMetrics(2);
      local_18 = local_c.y + (local_34[3] - local_34[1]);
      local_1c = local_c.x + local_14;
      local_20 = local_c.y;
      local_24 = local_c.x;
      local_10 = local_34[3] - local_34[1];
      (**(code **)(*(int *)(*(int *)param_1[0x38] + 8) + 0x6c))();
    }
    if ((param_1[0x45] < param_1[0x47]) && (param_1[0x46] < param_1[0x48])) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
      param_1[0x45] = 0;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[0x48] = 0;
    }
  }
  return;
}

