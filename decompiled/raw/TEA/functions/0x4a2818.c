// name: FUN_004a2818
// address: 0x4a2818
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a2818(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  tagRECT local_70;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined4 local_3c [12];
  int local_c;
  undefined4 local_8;
  
  FUN_004dce64(0x50a4e8);
  if (param_1[7] != 0) {
    if (*(int *)(*(int *)param_1[7] + 0xc) == 0) {
      local_c = param_1[7];
      if (local_c != 0) {
        local_8 = *(undefined4 *)(local_c + 0xc);
        local_50 = 0x14;
        (*(code *)**(undefined4 **)(local_c + 0xc))();
        local_50 = 8;
      }
    }
    else {
      FUN_004a76a8(*(int *)param_1[7],0x10,0,0);
    }
  }
  param_1[7] = param_2;
  if (((param_1[7] != 0) && (*(int *)(*param_1 + 0xc) != 0)) &&
     (*(int *)(*(int *)param_1[7] + 0xc) == 0)) {
    FUN_004a7988(*(int *)param_1[7],0,0x8000000,0);
    (**(code **)(*(int *)(*(int *)param_1[7] + 8) + 0x10))();
    local_70.left = 0;
    local_70.top = 0;
    local_70.right = 0;
    local_70.bottom = 0;
    FUN_004a7a6c(*param_1,&local_70);
    local_50 = 0x20;
    FUN_0049f414(local_3c,*(undefined4 *)(*param_1 + 0xc),&local_70.left,0x3eb,(uint *)0xffffffff);
    local_44 = local_44 + 2;
    local_50 = 0x2c;
    FUN_0049f534((int)local_3c,(uint *)param_1[0xd],'\x01');
    FUN_004a76a8(*(int *)param_1[7],0x404,0,(LPARAM)local_3c);
    local_44 = local_44 + -2;
    FUN_004cc0cc();
  }
  *in_FS_OFFSET = local_60;
  return;
}

