// name: FUN_0046c024
// address: 0x46c024
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __cdecl FUN_0046c024(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  tagRECT *ptVar6;
  LONG *pLVar7;
  tagRECT local_50;
  int local_40 [4];
  tagRECT local_30;
  int local_20 [5];
  tagPOINT local_c;
  
  local_c.x = *param_2;
  local_c.y = param_2[1];
  ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_c);
  local_30.left = 0;
  local_30.top = 0;
  local_30.right = 0;
  local_30.bottom = 0;
  FUN_004a7a30(*(int *)((int)param_1 + 0x166),&local_30);
  ptVar6 = &local_30;
  pLVar7 = local_20;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar7 = ptVar6->left;
    ptVar6 = (tagRECT *)&ptVar6->top;
    pLVar7 = pLVar7 + 1;
  }
  local_50.left = 0;
  local_50.top = 0;
  local_50.right = 0;
  local_50.bottom = 0;
  FUN_004a7a30(*(int *)param_1[0x85],&local_50);
  ptVar6 = &local_50;
  pLVar7 = local_40;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar7 = ptVar6->left;
    ptVar6 = (tagRECT *)&ptVar6->top;
    pLVar7 = pLVar7 + 1;
  }
  iVar1 = local_40[3];
  if (local_40[3] < local_20[3]) {
    iVar1 = local_20[3];
  }
  iVar4 = local_40[2];
  if (local_40[2] < local_20[2]) {
    iVar4 = local_20[2];
  }
  iVar2 = local_40[1];
  if (local_20[1] < local_40[1]) {
    iVar2 = local_20[1];
  }
  iVar5 = local_40[0];
  if (local_20[0] < local_40[0]) {
    iVar5 = local_20[0];
  }
  if ((((local_c.x < iVar5) || (iVar4 <= local_c.x)) || (local_c.y < iVar2)) || (iVar1 <= local_c.y)
     ) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if (((local_c.x < local_20[0]) || (local_20[2] <= local_c.x)) ||
       ((local_c.y < local_20[1] || (local_20[3] <= local_c.y)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (((local_c.x < local_40[0]) || (local_40[2] <= local_c.x)) ||
         ((local_c.y < local_40[1] || (local_40[3] <= local_c.y)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) {
        return 1;
      }
    }
  }
  return 0;
}

