// name: FUN_00417430
// address: 0x417430
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00417430(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_4c;
  HDC local_28 [9];
  
  FUN_00467ba8(0x477068);
  FUN_00421c0c(local_28,*(undefined4 *)(param_2 + 0x18));
  iVar1 = ((*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x1c)) * *(int *)(param_1 + 0x18)) / 100;
  FUN_00421dc0(local_28,7);
  FUN_00421dc0(local_28,5);
  Rectangle(local_28[0],*(int *)(param_2 + 0x1c),*(int *)(param_2 + 0x20),*(int *)(param_2 + 0x24),
            *(int *)(param_2 + 0x28));
  FUN_00421dc0(local_28,8);
  FUN_00421dc0(local_28,2);
  Rectangle(local_28[0],*(int *)(param_2 + 0x1c) + 1,*(int *)(param_2 + 0x20) + 1,
            *(int *)(param_2 + 0x1c) + iVar1,*(int *)(param_2 + 0x28));
  FUN_00421dc0(local_28,0);
  Rectangle(local_28[0],iVar1 + *(int *)(param_2 + 0x1c) + 1,*(int *)(param_2 + 0x20) + 1,
            *(int *)(param_2 + 0x24) + -1,*(int *)(param_2 + 0x28));
  FUN_00421cb4((int *)local_28,2);
  *in_FS_OFFSET = local_4c;
  return;
}

