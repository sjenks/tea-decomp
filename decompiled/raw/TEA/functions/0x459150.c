// name: FUN_00459150
// address: 0x459150
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG * __cdecl FUN_00459150(LONG *param_1,int *param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  tagRECT local_14;
  
  local_14.left = 0;
  local_14.top = 0;
  local_14.right = 0;
  local_14.bottom = 0;
  FUN_004a7a6c(*param_2,&local_14);
  if (param_2[0x18] == 0) {
    iVar1 = param_2[0x2a];
    local_14.left = local_14.left + *(int *)(iVar1 + 0x20);
    local_14.top = *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x2c) + param_2[0x1ed];
    local_14.right = local_14.right - *(int *)(iVar1 + 0x20);
    local_14.bottom = local_14.bottom - (param_2[0x1ed] + param_2[0x1ee]);
  }
  else {
    iVar1 = param_2[0x1b5];
    local_14.left = local_14.left + *(int *)(iVar1 + 0x20);
    local_14.top = *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x2c) + param_2[0x1ed];
    local_14.right = local_14.right - *(int *)(iVar1 + 0x20);
    local_14.bottom = local_14.bottom - (param_2[0x1ed] + param_2[0x1ee]);
  }
  ptVar2 = &local_14;
  pLVar3 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)&ptVar2->top;
    pLVar3 = pLVar3 + 1;
  }
  return param_1;
}

