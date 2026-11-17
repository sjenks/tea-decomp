// name: FUN_0041651c
// address: 0x41651c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041651c(int *param_1,int param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  uint uVar3;
  LONG *pLVar4;
  tagRECT local_28;
  LONG local_18 [4];
  uint local_8;
  
  if ((param_2 == 0) || (param_2 == 2)) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    FUN_004a7a6c(*param_1,&local_28);
    ptVar2 = &local_28;
    pLVar4 = local_18;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar4 = ptVar2->left;
      ptVar2 = (tagRECT *)&ptVar2->top;
      pLVar4 = pLVar4 + 1;
    }
    iVar1 = param_1[8] - param_1[7];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    local_8 = iVar1 >> 2;
    if (local_8 != 0) {
      uVar3 = 0;
      if (local_8 != 0) {
        do {
          FUN_00417780(*(int **)(uVar3 * 4 + param_1[7]),(int)local_18);
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_8);
      }
      (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    }
  }
  FUN_004a6214(*param_1,param_2);
  return;
}

