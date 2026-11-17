// name: FUN_0045d86c
// address: 0x45d86c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045d86c(int param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  tagRECT local_24;
  LONG local_14;
  int local_10;
  int local_8;
  
  iVar1 = FUN_00466b28(*(int *)(param_1 + 0x38));
  FUN_0041e940((int *)(param_1 + 0x7bc),(undefined4 *)(iVar1 + 0x30));
  FUN_0041e9dc((int *)(param_1 + 0x7bc),(int *)(param_1 + 0x158));
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  FUN_004a7a30(*(int *)(param_1 + 0x158),&local_24);
  ptVar2 = &local_24;
  pLVar3 = &local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)&ptVar2->top;
    pLVar3 = pLVar3 + 1;
  }
  FUN_004a7aa0(*(int *)(param_1 + 0x210),(HWND)0x0,0,0,*(int *)(*(int *)(param_1 + 0x210) + 0x28),
               local_8 - local_10,0x216);
  if (*(int *)(param_1 + 0x68c) != 0) {
    FUN_004a7aa0(**(int **)(param_1 + 0x68c),(HWND)0x0,0,0,
                 *(int *)(**(int **)(param_1 + 0x68c) + 0x28),local_8 - local_10,0x216);
  }
  return;
}

