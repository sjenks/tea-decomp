// name: FUN_004b2d40
// address: 0x4b2d40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b2d40(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char local_130 [260];
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  FUN_004dce64(0x50d578);
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 8))();
  if (iVar2 == 0) {
    uVar3 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar2 = FUN_004cc180();
    local_10 = local_10 + 1;
    local_1c = 0x14;
    local_8 = iVar2;
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    if (*(int *)((int)param_2 + 0x2e) == 0) {
      local_130[0] = '\0';
    }
    else {
      FUN_004dc9c4(local_130,*(char **)((int)param_2 + 0x2e));
    }
    iVar4 = (**(code **)(*(int *)(param_1 + 8) + 0x60))();
    if (iVar4 == 0) {
      uVar3 = 0;
      local_10 = local_10 + -1;
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
    else {
      cVar1 = (**(code **)(*param_2 + 0x20))();
      if (cVar1 == '\0') {
        uVar3 = 0;
        local_10 = local_10 + -1;
        FUN_004cc0cc();
        *in_FS_OFFSET = local_2c;
      }
      else {
        uVar3 = *(undefined4 *)(iVar2 + -4 + iVar4 * 4);
        local_10 = local_10 + -1;
        FUN_004cc0cc();
        *in_FS_OFFSET = local_2c;
      }
    }
  }
  return uVar3;
}

