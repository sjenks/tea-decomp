// name: FUN_004014b4
// address: 0x4014b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004014b4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_4c;
  HDC local_28 [9];
  
  FUN_00455f04(0x461818);
  FUN_00416a98(local_28,*(undefined4 *)(param_2 + 0x18));
  iVar1 = ((*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x1c)) * *(int *)(param_1 + 0x18)) / 100;
  FUN_00416c4c(local_28,7);
  FUN_00416c4c(local_28,5);
  Rectangle(local_28[0],*(int *)(param_2 + 0x1c),*(int *)(param_2 + 0x20),*(int *)(param_2 + 0x24),
            *(int *)(param_2 + 0x28));
  FUN_00416c4c(local_28,8);
  FUN_00416c4c(local_28,2);
  Rectangle(local_28[0],*(int *)(param_2 + 0x1c) + 1,*(int *)(param_2 + 0x20) + 1,
            *(int *)(param_2 + 0x1c) + iVar1,*(int *)(param_2 + 0x28));
  FUN_00416c4c(local_28,0);
  Rectangle(local_28[0],iVar1 + *(int *)(param_2 + 0x1c) + 1,*(int *)(param_2 + 0x20) + 1,
            *(int *)(param_2 + 0x24) + -1,*(int *)(param_2 + 0x28));
  FUN_00416b40((int *)local_28,2);
  *in_FS_OFFSET = local_4c;
  return;
}

