// name: FUN_0044f2c4
// address: 0x44f2c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044f2c4(int param_1)

{
  UINT UVar1;
  UINT *pUVar2;
  int iVar3;
  tagRECT local_24;
  UINT local_14;
  UINT local_10 [3];
  
  iVar3 = *(int *)(param_1 + 4);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    FUN_004a7a6c(iVar3,&local_24);
    iVar3 = local_24.bottom - local_24.top;
    if ((local_24.right - local_24.left != 0) && (0 < *(int *)(param_1 + 0x20))) {
      local_10[2] = ((local_24.right - local_24.left) + 1) / *(int *)(param_1 + 0x20) + -1;
      local_10[1] = 1;
      if ((int)local_10[2] < 1) {
        pUVar2 = local_10 + 1;
      }
      else {
        pUVar2 = local_10 + 2;
      }
      UVar1 = *pUVar2;
      *(UINT *)(param_1 + 0x30) = UVar1;
      FUN_004a807c(*(int *)(param_1 + 4),0,UVar1,*(byte *)(param_1 + 0x3e));
    }
    if ((iVar3 != 0) && (0 < *(int *)(param_1 + 0x24))) {
      local_10[0] = (iVar3 + 1) / *(int *)(param_1 + 0x24) - 1;
      local_14 = 1;
      if ((int)local_10[0] < 1) {
        pUVar2 = &local_14;
      }
      else {
        pUVar2 = local_10;
      }
      UVar1 = *pUVar2;
      *(UINT *)(param_1 + 0x34) = UVar1;
      FUN_004a807c(*(int *)(param_1 + 4),1,UVar1,*(byte *)(param_1 + 0x3e));
    }
  }
  return;
}

