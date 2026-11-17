// name: FUN_0043fe0c
// address: 0x43fe0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043fe0c(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [8];
  int local_38;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_004dce64(0x4f5f6c);
  local_c = 1;
  if (param_1 != 0) {
    local_18 = 8;
    for (local_2c = 0; local_2c < (uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38);
        local_2c = local_2c + 1) {
      local_30 = *(int *)(param_1 + 4) + local_2c * 0x38;
      local_18 = 8;
      local_38 = *(int *)(*(int *)(local_30 + 0x24) + 8);
      while( true ) {
        if (*(int *)(local_30 + 0x24) == local_38) break;
        iVar1 = *(int *)(local_38 + 0x20);
        if (iVar1 != 0) {
          FUN_0040957c(iVar1,*(int *)(iVar1 + 4),*(int *)(iVar1 + 8));
          FUN_004cc0bc();
          local_18 = 8;
          FUN_004cc0bc();
        }
        FUN_0043ff6c((int)local_40);
      }
    }
    local_c = local_c + -1;
    FUN_0043ffd0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_004cc0bc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

