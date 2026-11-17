// name: FUN_0044f3c0
// address: 0x44f3c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044f3c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  tagRECT local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004a7a6c(iVar1,&local_14);
    iVar1 = param_2;
    if (*(int *)(param_1 + 0x10) - (local_14.right - local_14.left) <= param_2) {
      iVar1 = *(int *)(param_1 + 0x10) - (local_14.right - local_14.left);
    }
    if (iVar1 < 0) {
      param_2 = 0;
    }
    else if (*(int *)(param_1 + 0x10) - (local_14.right - local_14.left) <= param_2) {
      param_2 = *(int *)(param_1 + 0x10) - (local_14.right - local_14.left);
    }
    iVar1 = param_3;
    if (*(int *)(param_1 + 0x14) - (local_14.bottom - local_14.top) <= param_3) {
      iVar1 = *(int *)(param_1 + 0x14) - (local_14.bottom - local_14.top);
    }
    if (iVar1 < 0) {
      param_3 = 0;
    }
    else if (*(int *)(param_1 + 0x14) - (local_14.bottom - local_14.top) <= param_3) {
      param_3 = *(int *)(param_1 + 0x14) - (local_14.bottom - local_14.top);
    }
  }
  FUN_004c6ff0(param_1,param_2,param_3);
  return;
}

