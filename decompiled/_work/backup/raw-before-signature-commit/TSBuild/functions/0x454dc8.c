// name: FUN_00454dc8
// address: 0x454dc8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00454dc8(int *param_1,int *param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  int *piVar4;
  LONG *pLVar5;
  int *piVar6;
  LONG local_44 [4];
  tagRECT local_34;
  int local_24 [4];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  FUN_004386c0(*param_2,&local_34);
  ptVar2 = &local_34;
  pLVar3 = local_44;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)&ptVar2->top;
    pLVar3 = pLVar3 + 1;
  }
  pLVar3 = local_44;
  pLVar5 = local_24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar5 = *pLVar3;
    pLVar3 = pLVar3 + 1;
    pLVar5 = pLVar5 + 1;
  }
  local_c = local_24[0];
  local_8 = local_24[1];
  local_10 = -local_24[1];
  local_14 = -local_24[0];
  FUN_00428898(local_24,local_14,local_10);
  local_24[0] = local_24[0] + param_2[6];
  local_24[1] = local_24[1] + param_2[7];
  local_24[2] = local_24[2] - param_2[6];
  local_24[3] = local_24[1] + *(int *)((int)param_2 + 0x22);
  piVar4 = local_24;
  piVar6 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  return param_1;
}

