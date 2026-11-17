// name: FUN_00474938
// address: 0x474938
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00474938(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4ff978);
  puVar1 = FUN_0041238c(*(int *)(param_1 + 0x4c),0);
  FUN_00412434((int)local_14,(int)puVar1,param_2 + -0x12e8);
  FUN_00464bb4(*(int *)(param_1 + 0x4c),local_c);
  FUN_0041251c((int)puVar1,local_c);
  FUN_0045269c(*(int **)(param_1 + 0x48));
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar2 = *local_c + 1;
      }
      if (iVar2 != 0) goto LAB_00474a17;
    }
    FUN_004cc0bc();
  }
LAB_00474a17:
  *in_FS_OFFSET = local_38;
  return;
}

