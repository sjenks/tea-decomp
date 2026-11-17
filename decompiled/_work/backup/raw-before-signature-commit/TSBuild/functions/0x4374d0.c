// name: FUN_004374d0
// address: 0x4374d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004374d0(int param_1,undefined4 param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  byte bVar5;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  tagRECT local_68;
  COLORREF local_58;
  undefined4 local_54;
  undefined2 local_44;
  int local_38;
  uint local_30 [2];
  HDC local_28 [9];
  
  bVar5 = 0;
  FUN_00467ba8(0x47e714);
  if (*(int *)(param_1 + 0x5c) == DAT_0048c654) {
    iVar1 = FUN_00436428(param_1);
    bVar4 = iVar1 != 0;
    *in_FS_OFFSET = local_54;
  }
  else {
    if (*(int *)(param_1 + 0x5c) != DAT_0048c658) {
      local_44 = 8;
      FUN_00421c0c(local_28,param_2);
      local_38 = local_38 + 1;
      local_44 = 0x20;
      FUN_0043c4b4(local_30,(uint *)(param_1 + 0x5c),'\x01');
      local_38 = local_38 + 2;
      local_44 = 0x14;
      FUN_00421cec(local_28,local_30);
      FUN_004220c0(&local_58,(int *)local_28,(uint *)(param_1 + 0x5c));
      local_68.left = 0;
      local_68.top = 0;
      local_68.right = 0;
      local_68.bottom = 0;
      FUN_004386fc(param_1,&local_68);
      ptVar2 = &local_68;
      pLVar3 = &local_78;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pLVar3 = ptVar2->left;
        ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar5 * -2 + 1) * 4);
        pLVar3 = pLVar3 + (uint)bVar5 * -2 + 1;
      }
      PatBlt(local_28[0],local_78,local_74,local_70 - local_78,local_6c - local_74,0xf00021);
      FUN_00421e18(local_28);
      local_38 = local_38 + -2;
      FUN_0043c5bc(local_30,2);
      local_38 = local_38 + -1;
      FUN_00421cb4((int *)local_28,2);
    }
    bVar4 = true;
    *in_FS_OFFSET = local_54;
  }
  return bVar4;
}

