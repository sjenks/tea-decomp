// name: FUN_0046c198
// address: 0x46c198
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046c198(int *param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  LONG local_2c [4];
  tagRECT local_1c;
  tagPOINT local_c;
  
  local_1c.left = 0;
  local_1c.top = 0;
  local_1c.right = 0;
  local_1c.bottom = 0;
  FUN_004a7a30(*(int *)param_1[0x85],&local_1c);
  ptVar2 = &local_1c;
  pLVar3 = local_2c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)&ptVar2->top;
    pLVar3 = pLVar3 + 1;
  }
  local_c.x = local_2c[0];
  local_c.y = local_2c[1];
  ScreenToClient(*(HWND *)(*param_1 + 0xc),&local_c);
  FUN_00416c2c((int)param_1,(uint *)s_SplitterPosition_004fd374);
  return;
}

