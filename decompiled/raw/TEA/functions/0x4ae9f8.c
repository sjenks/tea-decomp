// name: FUN_004ae9f8
// address: 0x4ae9f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004ae9f8(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int *local_68 [2];
  int *local_5d;
  int *local_52;
  int *local_47;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  FUN_004dce64(0x50cbc4);
  FUN_00495f90(local_68);
  FUN_00495098((int)(param_1 + 1),*(int *)(*param_1 + 0x15),local_68);
  if ((param_2 == (int *)0x0) &&
     (param_2 = (int *)FUN_004cc0f0(), local_8 = param_2, param_2 != (int *)0x0)) {
    local_24 = 0x14;
    FUN_004a4de0(param_2,0,param_1[1],(uint *)&DAT_0050ca80,0);
    local_24 = 8;
    param_2 = local_8;
  }
  (**(code **)(param_2[2] + 0x34))();
  FUN_00494fc8((int)(param_1 + 1),(int)param_2,local_68);
  piVar1 = (int *)(**(code **)(*(int *)(*param_1 + 0xc) + 0x18))();
  if (*(int *)(param_1[1] + 0x7a) == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(int *)(*(int *)(param_1[1] + 0x7a) + 0x7e);
  }
  iVar3 = local_38;
  if (local_38 != 0) {
    do {
      local_3c = iVar3;
      uVar2 = FUN_00495098((int)(param_1 + 1),local_3c,local_68);
      if ((char)uVar2 != '\0') {
        if (piVar1 == local_68[0]) {
          local_68[0] = param_2;
        }
        if (piVar1 == local_5d) {
          local_5d = param_2;
        }
        if (piVar1 == local_52) {
          local_52 = param_2;
        }
        if (piVar1 == local_47) {
          local_47 = param_2;
        }
        FUN_00494fc8((int)(param_1 + 1),local_3c,local_68);
      }
      local_3c = *(int *)(local_3c + 0x7e);
      iVar3 = local_3c;
    } while (local_3c != local_38);
  }
  *(undefined1 *)((int)param_1 + 0x3e) = 1;
  iVar3 = FUN_004be34c((int *)*param_1,param_2);
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  if (((short)((uint)*(undefined4 *)(iVar3 + 0x10) >> 0x10) != 0) &&
     (**(char **)(iVar3 + 0x10) == '\a')) {
    (**(code **)(*(int *)(iVar3 + 8) + 0x18))();
    local_10 = iVar3;
    if (iVar3 != 0) {
      local_c = *(undefined4 *)(iVar3 + 8);
      local_24 = 0x2c;
      (*(code *)**(undefined4 **)(iVar3 + 8))();
      local_24 = 0x20;
    }
    iVar3 = 0;
  }
  (**(code **)(param_1[4] + 4))();
  *in_FS_OFFSET = local_34;
  return iVar3;
}

