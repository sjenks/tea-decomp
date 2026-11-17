// name: FUN_0042db14
// address: 0x42db14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042db14(int *param_1,int param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  LONG *pLVar4;
  LONG local_34 [4];
  tagRECT local_24;
  undefined4 local_14 [4];
  
  if (*(int *)(*param_1 + 0x44) != 0) {
    if ((param_2 == 3) || (param_2 == 2)) {
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      FUN_004a7a6c(*param_1,&local_24);
      ptVar2 = &local_24;
      pLVar3 = local_34;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pLVar3 = ptVar2->left;
        ptVar2 = (tagRECT *)&ptVar2->top;
        pLVar3 = pLVar3 + 1;
      }
      pLVar3 = local_34;
      pLVar4 = local_14;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pLVar4 = *pLVar3;
        pLVar3 = pLVar3 + 1;
        pLVar4 = pLVar4 + 1;
      }
      (**(code **)(**(int **)(*param_1 + 0x44) + 0x2c))();
    }
    else {
      (**(code **)(**(int **)(*param_1 + 0x44) + 0x24))();
    }
  }
  return;
}

