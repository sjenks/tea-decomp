// name: FUN_004dbb34
// address: 0x4dbb34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004dbb34(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x516aec);
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(int *)(param_1 + 0x2c) = param_1 + 0x38;
  *(int *)(param_1 + 0x30) = param_1 + 0x38;
  uVar1 = *(uint *)(param_1 + 0xc) & 0x4a;
  if (uVar1 == 8) {
    *(undefined4 *)(param_1 + 0x18) = 0x10;
  }
  else if (uVar1 == 0x40) {
    *(undefined4 *)(param_1 + 0x18) = 8;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 10;
  }
  uVar1 = *(uint *)(param_1 + 0xc) & 0xb0;
  if (uVar1 == 0x20) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else if (uVar1 == 0x10) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

