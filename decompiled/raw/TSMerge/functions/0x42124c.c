// name: FUN_0042124c
// address: 0x42124c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void FUN_0042124c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 *param_5,undefined1 param_6,int *param_7)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  byte bVar4;
  tagRECT local_48;
  LONG local_38;
  int local_34;
  RECT local_28;
  int local_14;
  int local_c;
  int local_8;
  
  bVar4 = 0;
  if ((*(char *)((int)param_4 + 0x4d) != '\0') && (param_7[1] == 0)) {
    local_8 = GetSystemMetrics(DAT_00469744);
    local_c = param_7[2];
    (**(code **)(*(int *)((int)param_5 + 5) + 0x20))();
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = local_c;
    local_28.bottom = local_8;
    ExtTextOutA((HDC)*param_5,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
    param_1 = 0;
  }
  if (*(int *)((int)param_4 + 0x4e) == 0) {
    FUN_0041bbec((int)param_4,param_5,CONCAT31((int3)((uint)param_1 >> 8),param_6),param_7);
  }
  else {
    local_48.left = 0;
    local_48.top = 0;
    local_48.right = 0;
    local_48.bottom = 0;
    FUN_0042d568(*param_4,&local_48);
    ptVar2 = &local_48;
    pLVar3 = &local_38;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar3 = ptVar2->left;
      ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
    }
    if (*(char *)((int)param_4 + 0x4d) != '\0') {
      local_14 = DAT_00469744;
      iVar1 = GetSystemMetrics(DAT_00469744);
      local_34 = local_34 + iVar1;
    }
    (**(code **)(*(int *)((int)param_5 + 5) + 0x14))();
    (**(code **)(*(int *)((int)param_5 + 5) + 0x20))();
    FUN_00455bf0(*(uint **)((int)param_4 + 0x4e));
    (**(code **)(*(int *)((int)param_5 + 5) + 0x48))();
  }
  return;
}

