// name: FUN_00421ed4
// address: 0x421ed4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421ed4(int param_1,char param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4688e4);
  if (param_2 != '\0') {
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 1); iVar1 = iVar1 + 1) {
      FUN_00421d64(*(int *)(*(int *)(param_1 + 9) + iVar1 * 4),3);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *in_FS_OFFSET = local_28;
  return;
}

