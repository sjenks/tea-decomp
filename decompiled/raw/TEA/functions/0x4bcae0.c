// name: FUN_004bcae0
// address: 0x4bcae0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004bcae0(int param_1,uint param_2)

{
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x164) == '\0') {
    if (((param_2 & 2) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + -4) != 0)) {
      FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 0x18));
      FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f23c);
      if (((param_2 & 4) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + -4) == 0)) {
        FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f241);
      }
    }
  }
  else {
    if ((param_2 & 1) != 0) {
      FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f238);
      FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 8));
      if ((param_2 & 2) != 0) {
        FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f241);
      }
    }
    if (((param_2 & 2) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + -4) != 0)) {
      FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 0x18));
      if (((param_2 & 4) != 0) || ((param_2 & 8) != 0)) {
        FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f241);
      }
    }
  }
  if (((param_2 & 4) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + -4) != 0)) {
    FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 0x28));
    FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f241);
  }
  if (((param_2 & 8) != 0) && (*(int *)(*(int *)(param_1 + 0x38) + -4) != 0)) {
    FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 0x38));
  }
  if (((param_2 & 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x48) + -4) != 0)) {
    FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 0x48));
  }
  return param_1 + 0x60;
}

