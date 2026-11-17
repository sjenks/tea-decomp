// name: FUN_0042bd34
// address: 0x42bd34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042bd34(int param_1,int param_2)

{
  uint uVar1;
  tagRECT local_14;
  
  FUN_0042aa68(param_1);
  if (((DAT_0046a3ce == '\0') && (*(int *)(param_1 + 0x44) != 0)) && (param_2 != 1)) {
    DAT_0046a3ce = 1;
    (**(code **)(**(int **)(param_1 + 0x44) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
    DAT_0046a3ce = '\0';
  }
  if (param_2 == 0) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_0042d52c(param_1,&local_14);
    *(LONG *)(param_1 + 0x28) = local_14.right - local_14.left;
    *(LONG *)(param_1 + 0x2c) = local_14.bottom - local_14.top;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = FUN_0042d438(param_1);
    if ((uVar1 & 4) == 0) {
      FUN_0042d1a4(*(int *)(param_1 + 0x14),0x210,5,*(LPARAM *)(param_1 + 0xc));
    }
  }
  FUN_0042b294(param_1);
  return;
}

