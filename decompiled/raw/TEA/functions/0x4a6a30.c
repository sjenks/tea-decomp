// name: FUN_004a6a30
// address: 0x4a6a30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a6a30(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
  int local_6c [26];
  
  FUN_004dce64(0x50b1ec);
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    FUN_0049af8c(local_6c,*(HWND *)(param_1 + 0xc));
    if (*(int *)(param_1 + 0x44) != 0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x1c))();
    }
    (**(code **)(*(int *)(param_1 + 8) + 0x54))();
    if (*(int *)(param_1 + 0x44) != 0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x20))();
    }
    FUN_0049b014(local_6c,2);
  }
  else {
    FUN_004a5774(param_1);
  }
  *in_FS_OFFSET = local_90;
  return;
}

