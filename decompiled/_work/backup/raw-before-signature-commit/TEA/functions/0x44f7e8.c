// name: FUN_0044f7e8
// address: 0x44f7e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044f7e8(int param_1)

{
  int iVar1;
  int iVar2;
  tagRECT local_14;
  
  if (*(int *)(param_1 + 4) != 0) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004a7a6c(*(int *)(param_1 + 4),&local_14);
    if (*(char *)(param_1 + 0x3b) != '\0') {
      if (*(int *)(param_1 + 0x10) < 0x8000) {
        iVar1 = *(int *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_0044f1d8();
      }
      iVar2 = FUN_004a7f40(*(int *)(param_1 + 4),0);
      if (iVar1 != iVar2) {
        FUN_004a7f80(*(int *)(param_1 + 4),0,iVar1,*(byte *)(param_1 + 0x3e));
      }
    }
    if (*(char *)(param_1 + 0x3c) != '\0') {
      if (*(int *)(param_1 + 0x14) < 0x8000) {
        iVar1 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar1 = FUN_0044f1d8();
      }
      iVar2 = FUN_004a7f40(*(int *)(param_1 + 4),1);
      if (iVar1 != iVar2) {
        FUN_004a7f80(*(int *)(param_1 + 4),1,iVar1,*(byte *)(param_1 + 0x3e));
      }
    }
  }
  return;
}

