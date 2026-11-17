// name: FUN_00418ac0
// address: 0x418ac0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00418ac0(int param_1,int param_2)

{
  HGDIOBJ pvVar1;
  int *piVar2;
  RECT *pRVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  int iVar5;
  int local_a8 [4];
  tagRECT local_98;
  RECT local_80;
  int local_70;
  undefined4 local_6c;
  undefined2 local_5c;
  int local_50;
  LOGBRUSH local_48;
  undefined4 *local_3c;
  uint local_38 [2];
  uint local_30 [2];
  HDC local_28 [9];
  
  bVar4 = 0;
  FUN_004dce64(0x4ee414);
  local_5c = 8;
  FUN_0048d7c8(local_28,*(undefined4 *)(param_2 + 0x18));
  local_50 = local_50 + 1;
  local_80.bottom = *(int *)(param_2 + 0x28);
  local_80.right = *(int *)(param_2 + 0x24);
  local_80.top = *(int *)(param_2 + 0x20);
  local_80.left = *(int *)(param_2 + 0x1c);
  local_70 = local_80.left;
  if (((*(char *)(param_1 + 0x15) != '\0') && (2 < local_80.right - local_80.left)) &&
     (2 < local_80.bottom - local_80.top)) {
    local_5c = 0x20;
    FUN_0049b6a8(local_30,(uint *)&DAT_0051b1bc,1,0);
    local_50 = local_50 + 2;
    local_5c = 0x2c;
    FUN_0048d8f4(local_28,local_30);
    local_5c = 0x38;
    iVar5 = 0;
    pvVar1 = GetStockObject(5);
    FUN_004ab7e4(local_38,pvVar1,iVar5);
    local_50 = local_50 + 2;
    local_5c = 0x2c;
    FUN_0048d938(local_28,local_38);
    Rectangle(local_28[0],local_80.left,local_80.top,local_80.right,local_80.bottom);
    FUN_00494470(&local_80.left,-1,-1);
    FUN_0048da64(local_28);
    FUN_0048da38(local_28);
    local_50 = local_50 + -2;
    FUN_004ab9b4(local_38,2);
    local_50 = local_50 + -2;
    FUN_00494064(local_30,0);
  }
  local_5c = 0x14;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    iVar5 = 6;
  }
  else {
    iVar5 = 7;
  }
  FUN_0049f930(&local_98.left,&local_80.left,iVar5,0);
  local_5c = 0x14;
  FUN_0049fa58(&local_98,local_28);
  FUN_0049f9e0(local_a8,&local_98.left);
  piVar2 = local_a8;
  pRVar3 = &local_80;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    pRVar3->left = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    local_5c = 0x44;
    FUN_004178ac(&local_48,*(COLORREF *)(param_1 + 0x20));
    local_50 = local_50 + 1;
    local_5c = 0x50;
    FillRect(local_28[0],&local_80,(HBRUSH)*local_3c);
    FUN_00494470(&local_80.left,-1,-1);
    if ((*(byte *)(param_2 + 0x10) & 0x10) != 0) {
      DrawFocusRect(local_28[0],&local_80);
    }
    local_50 = local_50 + -1;
    FUN_0041794c((int)&local_48,2);
    local_5c = 0x14;
  }
  local_50 = local_50 + -1;
  FUN_0048d8bc((int *)local_28,2);
  *in_FS_OFFSET = local_6c;
  return;
}

