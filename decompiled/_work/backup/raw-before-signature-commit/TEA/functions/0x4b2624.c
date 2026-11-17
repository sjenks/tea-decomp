// name: FUN_004b2624
// address: 0x4b2624
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b2624(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  char local_134 [263];
  char local_2d;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined4 local_8;
  
  FUN_004dce64(0x50d3ac);
  local_2d = (param_3 & 0x80000000) != 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 4))();
  if (iVar1 == 0) {
    uVar2 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    local_8 = FUN_004cc180();
    local_10 = local_10 + 1;
    local_1c = 0x14;
    (**(code **)(*(int *)(param_1 + 8) + 4))();
    local_134[0] = '\0';
    if (local_2d == '\0') {
      if (param_2 == (char *)0x0) {
        local_134[0] = '\0';
      }
      else {
        FUN_004dc9c4(local_134,param_2);
      }
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x60))();
    }
    else if (iVar1 == 1) {
      iVar1 = 1;
    }
    else {
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x5c))();
    }
    if (iVar1 == 0) {
      uVar2 = 0;
      local_10 = local_10 + -1;
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
    else if ((local_134[0] == '\0') || (iVar1 = FUN_004b3b84(param_1,local_134), iVar1 == 0)) {
      uVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x18))();
      local_10 = local_10 + -1;
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
    else {
      (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
      uVar2 = 0;
      local_10 = local_10 + -1;
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
  }
  return uVar2;
}

