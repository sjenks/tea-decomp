// name: FUN_004a6214
// address: 0x4a6214
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a6214(int param_1,int param_2)

{
  uint uVar1;
  tagRECT local_14;
  
  FUN_004a4db4(param_1);
  if (((DAT_0050abee == '\0') && (*(int *)(param_1 + 0x44) != 0)) && (param_2 != 1)) {
    DAT_0050abee = 1;
    (**(code **)(**(int **)(param_1 + 0x44) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
    DAT_0050abee = '\0';
  }
  if (param_2 == 0) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004a7a30(param_1,&local_14);
    *(LONG *)(param_1 + 0x28) = local_14.right - local_14.left;
    *(LONG *)(param_1 + 0x2c) = local_14.bottom - local_14.top;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = FUN_004a793c(param_1);
    if ((uVar1 & 4) == 0) {
      FUN_004a76a8(*(int *)(param_1 + 0x14),0x210,5,*(LPARAM *)(param_1 + 0xc));
    }
  }
  FUN_004a5774(param_1);
  return;
}

