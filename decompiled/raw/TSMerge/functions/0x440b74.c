// name: FUN_00440b74
// address: 0x440b74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00440b74(int param_1,uint param_2)

{
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x164) == '\0') {
    if (((param_2 & 2) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + -4) != 0)) {
      FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 0x18));
      FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4a8);
      if (((param_2 & 4) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + -4) == 0)) {
        FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4ad);
      }
    }
  }
  else {
    if ((param_2 & 1) != 0) {
      FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4a4);
      FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 8));
      if ((param_2 & 2) != 0) {
        FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4ad);
      }
    }
    if (((param_2 & 2) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + -4) != 0)) {
      FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 0x18));
      if (((param_2 & 4) != 0) || ((param_2 & 8) != 0)) {
        FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4ad);
      }
    }
  }
  if (((param_2 & 4) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + -4) != 0)) {
    FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 0x28));
    FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4ad);
  }
  if (((param_2 & 8) != 0) && (*(int *)(*(int *)(param_1 + 0x38) + -4) != 0)) {
    FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 0x38));
  }
  if (((param_2 & 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x48) + -4) != 0)) {
    FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 0x48));
  }
  return param_1 + 0x60;
}

