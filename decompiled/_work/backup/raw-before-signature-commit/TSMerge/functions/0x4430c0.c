// name: FUN_004430c0
// address: 0x4430c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004430c0(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  tagRECT *ptVar3;
  LONG *pLVar4;
  int aiStack_38 [4];
  tagRECT tStack_28;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  char cStack_5;
  
  FUN_0042bd34(*(int *)param_1,param_2);
  if (*(int *)(param_1 + 0x15) != 0) {
    cStack_5 = '\0';
    if (param_2 != 1) {
      uVar1 = FUN_00442958((int *)param_1,'\x01');
      cStack_5 = (char)uVar1;
      tStack_28.left = 0;
      tStack_28.top = 0;
      tStack_28.right = 0;
      tStack_28.bottom = 0;
      FUN_0042d568(*(int *)(param_1 + 0x15),&tStack_28);
      ptVar3 = &tStack_28;
      pLVar4 = aiStack_38;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pLVar4 = ptVar3->left;
        ptVar3 = (tagRECT *)&ptVar3->top;
        pLVar4 = pLVar4 + 1;
      }
      iStack_14 = aiStack_38[3] - aiStack_38[1];
      iStack_18 = aiStack_38[2] - aiStack_38[0];
      *param_3 = iStack_18;
      param_3[1] = iStack_14;
      iStack_10 = iStack_18;
      iStack_c = iStack_14;
    }
    if (cStack_5 == '\0') {
      FUN_0042d204(*(int *)(param_1 + 0x15),'\x01');
    }
  }
  FUN_00443094((int *)param_1,param_2,(LPARAM)param_3);
  return;
}

