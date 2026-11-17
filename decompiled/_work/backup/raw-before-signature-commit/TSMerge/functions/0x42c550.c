// name: FUN_0042c550
// address: 0x42c550
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042c550(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
  int local_6c [26];
  
  FUN_00455f04(0x46a9a8);
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    FUN_004239f8(local_6c,*(HWND *)(param_1 + 0xc));
    if (*(int *)(param_1 + 0x44) != 0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x1c))();
    }
    (**(code **)(*(int *)(param_1 + 8) + 0x54))();
    if (*(int *)(param_1 + 0x44) != 0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x20))();
    }
    FUN_00423a80(local_6c,2);
  }
  else {
    FUN_0042b294(param_1);
  }
  *in_FS_OFFSET = local_90;
  return;
}

