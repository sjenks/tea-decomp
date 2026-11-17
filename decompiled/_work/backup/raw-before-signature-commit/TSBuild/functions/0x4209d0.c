// name: FUN_004209d0
// address: 0x4209d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004209d0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x479ed4);
  while (param_2 < *(uint *)(param_1 + 9)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 1) + -4);
    *(undefined4 *)(param_1 + 1) = *puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0045681c();
    }
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

