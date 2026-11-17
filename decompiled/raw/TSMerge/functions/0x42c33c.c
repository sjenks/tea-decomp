// name: FUN_0042c33c
// address: 0x42c33c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0042c33c(int param_1,undefined4 param_2)

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
  FUN_00455f04(0x46a938);
  if (*(int *)(param_1 + 0x5c) == DAT_00476bac) {
    iVar1 = FUN_0042b294(param_1);
    bVar4 = iVar1 != 0;
    *in_FS_OFFSET = local_54;
  }
  else {
    if (*(int *)(param_1 + 0x5c) != DAT_00476bb0) {
      local_44 = 8;
      FUN_00416a98(local_28,param_2);
      local_38 = local_38 + 1;
      local_44 = 0x20;
      FUN_00431320(local_30,(uint *)(param_1 + 0x5c),'\x01');
      local_38 = local_38 + 2;
      local_44 = 0x14;
      FUN_00416b78(local_28,local_30);
      FUN_00416f4c(&local_58,(int *)local_28,(uint *)(param_1 + 0x5c));
      local_68.left = 0;
      local_68.top = 0;
      local_68.right = 0;
      local_68.bottom = 0;
      FUN_0042d568(param_1,&local_68);
      ptVar2 = &local_68;
      pLVar3 = &local_78;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pLVar3 = ptVar2->left;
        ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar5 * -2 + 1) * 4);
        pLVar3 = pLVar3 + (uint)bVar5 * -2 + 1;
      }
      PatBlt(local_28[0],local_78,local_74,local_70 - local_78,local_6c - local_74,0xf00021);
      FUN_00416ca4(local_28);
      local_38 = local_38 + -2;
      FUN_00431428(local_30,2);
      local_38 = local_38 + -1;
      FUN_00416b40((int *)local_28,2);
    }
    bVar4 = true;
    *in_FS_OFFSET = local_54;
  }
  return bVar4;
}

