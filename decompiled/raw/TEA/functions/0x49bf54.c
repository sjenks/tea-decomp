// name: FUN_0049bf54
// address: 0x49bf54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049bf54(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  LOGFONTA local_6c;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint *local_c;
  uint *local_8;
  
  FUN_004dce64(0x508b88);
  if (*param_2 != 0) {
    GetObjectA((HANDLE)*param_2,0x3c,&local_6c);
    puVar1 = *(uint **)(param_1 + 0x3d);
    local_8 = (uint *)FUN_004cc0f0();
    if (local_8 != (uint *)0x0) {
      local_20 = 0x14;
      FUN_0048f7fc(local_8,&local_6c);
      local_20 = 8;
    }
    *(uint **)(param_1 + 0x3d) = local_8;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0x14))();
    local_c = puVar1;
    if (puVar1 != (uint *)0x0) {
      local_20 = 0x2c;
      local_14 = local_14 + -1;
      FUN_00494064(puVar1,0);
      FUN_004cc0bc();
      local_20 = 0x20;
    }
    if (**(int **)(param_1 + 0x3d) != *(int *)(param_1 + 0x39)) {
      *(undefined4 *)(param_1 + 0x39) = **(undefined4 **)(param_1 + 0x3d);
      (**(code **)(*(int *)(param_1 + 5) + 0x60))();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

