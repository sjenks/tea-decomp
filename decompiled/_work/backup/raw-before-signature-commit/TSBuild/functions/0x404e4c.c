// name: FUN_00404e4c
// address: 0x404e4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00404e4c(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x474f98);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
    FUN_0043d704(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_00435f74(param_1 + 0xb,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_0041e99c(param_1 + 9,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

