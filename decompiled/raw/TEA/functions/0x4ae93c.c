// name: FUN_004ae93c
// address: 0x4ae93c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ae93c(int *param_1)

{
  int iVar1;
  int *piVar2;
  tagRECT *ptVar3;
  LONG *pLVar4;
  tagRECT local_24;
  LONG local_14 [2];
  int local_c;
  int local_8;
  
  FUN_004bef38((int *)*param_1);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  FUN_004a7a6c(param_1[1],&local_24);
  ptVar3 = &local_24;
  pLVar4 = local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar4 = ptVar3->left;
    ptVar3 = (tagRECT *)&ptVar3->top;
    pLVar4 = pLVar4 + 1;
  }
  param_1[5] = local_c;
  param_1[6] = local_8;
  piVar2 = (int *)param_1[1];
  if (((*(byte *)(piVar2 + 0x1d) & 0x10) != 0) && (*(int *)(*param_1 + 0x25) != 0)) {
    piVar2 = param_1;
    (**(code **)(*(int *)((int)param_1 + 0x35) + 0x20))();
  }
  (**(code **)(param_1[4] + 4))(param_1 + 1,param_1[4],piVar2,param_1 + 1);
  return;
}

