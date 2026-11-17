// name: FUN_00430290
// address: 0x430290
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00430290(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  tagRECT *ptVar5;
  int *piVar6;
  LONG *pLVar7;
  int local_68 [6];
  int local_50;
  int local_4c;
  tagRECT local_48;
  int local_38 [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_15;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (0 < param_1[0x40]) {
    local_48.left = 0;
    local_48.top = 0;
    local_48.right = 0;
    local_48.bottom = 0;
    FUN_004a7a6c(*param_1,&local_48);
    ptVar5 = &local_48;
    pLVar7 = local_38;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar7 = ptVar5->left;
      ptVar5 = (tagRECT *)&ptVar5->top;
      pLVar7 = pLVar7 + 1;
    }
    iVar4 = param_1[0x40];
    iVar1 = *(int *)(*(int *)(*param_1 + 0x44) + 0xc);
    iVar3 = iVar1 / iVar4;
    iVar4 = (iVar1 + (local_38[3] - local_38[1]) + iVar4 + -1) / iVar4;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    if (param_2 + param_3 + -1 <= iVar4) {
      iVar4 = param_2 + param_3 + -1;
    }
    if (iVar3 <= iVar4) {
      local_8 = iVar3 * param_1[0x40] - *(int *)(*(int *)(*param_1 + 0x44) + 0xc);
      local_c = ((iVar4 - iVar3) + 1) * param_1[0x40] + local_8;
      local_10 = local_38[2] - local_38[0];
      local_14 = local_8;
      local_68[4] = 0;
      local_68[5] = local_8;
      local_50 = local_10;
      local_4c = local_c;
      if ((((local_38[0] < local_10) && (0 < local_38[2])) && (local_38[1] < local_c)) &&
         (local_8 < local_38[3])) {
        local_15 = 1;
        bVar2 = true;
      }
      else {
        local_15 = 0;
        bVar2 = false;
      }
      if (bVar2) {
        if (local_38[3] < local_c) {
          local_c = local_38[3];
        }
        local_1c = local_c;
        if (local_38[2] < local_10) {
          local_10 = local_38[2];
        }
        local_20 = local_10;
        if (local_8 < local_38[1]) {
          local_8 = local_38[1];
        }
        local_24 = local_8;
        if (local_38[0] < 1) {
          local_38[0] = 0;
        }
        local_28 = local_38[0];
        local_68[0] = local_38[0];
        local_68[1] = local_8;
        local_68[2] = local_10;
        local_68[3] = local_c;
      }
      else {
        local_68[0] = 0;
        local_68[1] = 0;
        local_10 = 0;
        local_68[2] = 0;
        local_68[3] = 0;
      }
      piVar6 = local_68;
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_4 = *piVar6;
        piVar6 = piVar6 + 1;
        param_4 = param_4 + 1;
      }
      return CONCAT31((int3)((uint)local_10 >> 8),1);
    }
  }
  return 0;
}

