// name: FUN_0042d5f8
// address: 0x42d5f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0042d5f8(int *param_1,byte param_2,int param_3)

{
  HWND pHVar1;
  SHORT SVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  tagRECT *ptVar6;
  LONG *pLVar7;
  int aiStack_74 [4];
  undefined4 auStack_64 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  tagRECT tStack_24;
  int aiStack_14 [4];
  
  SVar2 = GetKeyState(1);
  if (-1 < SVar2) {
    pHVar3 = GetFocus();
    pHVar1 = *(HWND *)(*param_1 + 0xc);
    SetFocus(*(HWND *)(*param_1 + 0xc));
    tStack_24.left = 0;
    tStack_24.top = 0;
    tStack_24.right = 0;
    tStack_24.bottom = 0;
    FUN_004a7a6c(*param_1,&tStack_24);
    ptVar6 = &tStack_24;
    pLVar7 = aiStack_14;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar7 = ptVar6->left;
      ptVar6 = (tagRECT *)&ptVar6->top;
      pLVar7 = pLVar7 + 1;
    }
    if (pHVar3 != pHVar1) {
      iStack_28 = param_1[0x40];
      iStack_2c = aiStack_14[2] - aiStack_14[0];
      uStack_34 = 0;
      uStack_30 = 0;
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
    if ((param_2 & 0xc) == 0) {
      iVar5 = 0;
      if (0 < param_1[0x40]) {
        iVar5 = (*(int *)(*(int *)(*param_1 + 0x44) + 0xc) + *(int *)(param_3 + 4)) / param_1[0x40];
      }
      iVar4 = FUN_0042ba08((int)param_1);
      if (iVar5 < iVar4) {
        iVar4 = FUN_004307e4((int)param_1,iVar5);
        if (iVar4 == 0) {
          FUN_00430438(param_1);
          iStack_3c = param_1[0x27];
          iStack_4c = *(int *)(iStack_3c + 8);
          FUN_0042a474(auStack_64,(int)(param_1 + 0x1e),uStack_54,uStack_50,iStack_4c);
          param_1[0x44] = iVar5;
          FUN_0042ed8c(aiStack_74,param_1,iVar5,1,1,'\0');
          (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
        }
      }
    }
  }
  return;
}

