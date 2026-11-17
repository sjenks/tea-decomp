// name: FUN_0045dcb8
// address: 0x45dcb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045dcb8(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  tagRECT *ptVar5;
  int *piVar6;
  int local_30 [4];
  tagRECT local_20;
  undefined1 local_d;
  tagPOINT local_c;
  
  local_c.x = *param_2;
  local_c.y = param_2[1];
  ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_c);
  uVar4 = 0;
  while( true ) {
    iVar3 = param_1[0x1ae] - param_1[0x1ad];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if ((uint)(iVar3 >> 2) <= uVar4) break;
    piVar1 = *(int **)(*(int *)(param_1[0x1ad] + uVar4 * 4) + 4);
    local_20.left = 0;
    local_20.top = 0;
    local_20.right = 0;
    local_20.bottom = 0;
    FUN_004a7a30(*piVar1,&local_20);
    ptVar5 = &local_20;
    piVar6 = local_30;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = ptVar5->left;
      ptVar5 = (tagRECT *)&ptVar5->top;
      piVar6 = piVar6 + 1;
    }
    if ((((local_c.x < local_30[0]) || (local_30[2] <= local_c.x)) || (local_c.y < local_30[1])) ||
       (local_30[3] <= local_c.y)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return piVar1;
    }
    uVar4 = uVar4 + 1;
    local_d = 0;
  }
  return (int *)0x0;
}

