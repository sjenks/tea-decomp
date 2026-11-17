// name: FUN_004165cc
// address: 0x4165cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004165cc(int *param_1)

{
  BOOL BVar1;
  HDC pHVar2;
  int iVar3;
  tagRECT *ptVar4;
  tagRECT *ptVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  UINT UVar7;
  UINT UVar8;
  tagRECT local_b0;
  tagRECT local_a0;
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  int local_6c;
  int local_67;
  
  bVar6 = 0;
  FUN_004dce64(0x4edcb8);
  if ((*(byte *)(*param_1 + 0x1a) & 4) != 0) {
    BVar1 = IsZoomed(*(HWND *)(*param_1 + 0xc));
    if (BVar1 == 0) {
      local_80 = 8;
      FUN_0049af8c(&local_6c,*(HWND *)(*param_1 + 0xc));
      local_74 = local_74 + 2;
      local_80 = 0x14;
      local_b0.left = 0;
      local_b0.top = 0;
      local_b0.right = 0;
      local_b0.bottom = 0;
      FUN_004a7a6c(*param_1,&local_b0);
      ptVar4 = &local_b0;
      ptVar5 = &local_a0;
      for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        ptVar5->left = ptVar4->left;
        ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar6 * -2 + 1) * 4);
        ptVar5 = (tagRECT *)((int)ptVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      local_a0.left = GetSystemMetrics(2);
      local_a0.left = local_a0.right - local_a0.left;
      local_a0.top = GetSystemMetrics(3);
      local_a0.top = local_a0.bottom - local_a0.top;
      UVar8 = 8;
      UVar7 = 3;
      ptVar4 = &local_a0;
      pHVar2 = (HDC)(**(code **)(local_67 + 0x5c))();
      DrawFrameControl(pHVar2,ptVar4,UVar7,UVar8);
      local_74 = local_74 + -2;
      FUN_0049b014(&local_6c,2);
      goto LAB_004166d0;
    }
  }
  FUN_004b0574(param_1);
LAB_004166d0:
  *in_FS_OFFSET = local_90;
  return;
}

