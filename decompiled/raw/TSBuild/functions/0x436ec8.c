// name: FUN_00436ec8
// address: 0x436ec8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00436ec8(int param_1,int param_2)

{
  uint uVar1;
  tagRECT local_14;
  
  FUN_00435bfc(param_1);
  if (((DAT_0047e1aa == '\0') && (*(int *)(param_1 + 0x44) != 0)) && (param_2 != 1)) {
    DAT_0047e1aa = 1;
    (**(code **)(**(int **)(param_1 + 0x44) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
    DAT_0047e1aa = '\0';
  }
  if (param_2 == 0) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004386c0(param_1,&local_14);
    *(LONG *)(param_1 + 0x28) = local_14.right - local_14.left;
    *(LONG *)(param_1 + 0x2c) = local_14.bottom - local_14.top;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = FUN_004385cc(param_1);
    if ((uVar1 & 4) == 0) {
      FUN_00438338(*(int *)(param_1 + 0x14),0x210,5,*(LPARAM *)(param_1 + 0xc));
    }
  }
  FUN_00436428(param_1);
  return;
}

