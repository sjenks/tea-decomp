// name: FUN_004ca814
// address: 0x4ca814
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004ca814(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  FUN_004dce64(0x512254);
  if ((*(int *)(param_1 + 0x1c) == 0) ||
     (uVar3 = FUN_004ca7d0(*(int **)(param_1 + 0x1c)), (char)uVar3 == '\0')) {
    uVar3 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x30) + 1) == 0) {
      FUN_004ca482(*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x1c));
    }
    puVar4 = (undefined4 *)FUN_0049cce4(*(int *)(param_1 + 0x1c));
    iVar5 = FUN_00488728(puVar4);
    uVar1 = FUN_0049cd34(*(int *)(param_1 + 0x1c));
    iVar5 = iVar5 / CONCAT22(extraout_var,uVar1);
    local_8 = (undefined4 *)FUN_004cc0f0();
    if (local_8 != (undefined4 *)0x0) {
      local_1c = 0x14;
      uVar7 = 5;
      uVar1 = FUN_0049ccf0(*(int *)(param_1 + 0x1c));
      iVar6 = CONCAT22(extraout_var_00,uVar1);
      uVar3 = 0;
      uVar1 = FUN_0049cd34(*(int *)(param_1 + 0x1c));
      uVar2 = FUN_0049cd1c(*(int *)(param_1 + 0x1c));
      local_38 = CONCAT22(extraout_var_02,uVar2);
      local_34 = CONCAT22(extraout_var_01,uVar1);
      local_30 = local_38;
      FUN_00489df0(local_8,&local_38,uVar3,iVar6,uVar7,iVar5);
      local_1c = 8;
    }
    puVar4 = local_8;
    FUN_0048a134((int)local_8,-1);
    (**(code **)(*(int *)(param_2 + 0x18) + 0x28))();
    iVar5 = 0;
    local_3c = 0;
    for (iVar6 = 0; iVar6 < *(int *)(*(int *)(param_1 + 0x30) + 1); iVar6 = iVar6 + 1) {
      (**(code **)(*(int *)(param_2 + 0x18) + 0x14))();
      iVar5 = *(int *)(param_1 + 0x30);
      if (*(char *)(*(int *)(*(int *)(iVar5 + 9) + iVar6 * 4) + 4) != '\0') {
        iVar5 = FUN_0048a094((int)puVar4,*(int *)(param_1 + 0x20),local_3c);
        local_3c = local_3c + 1;
      }
    }
    uVar3 = CONCAT31((int3)((uint)iVar5 >> 8),1);
    *in_FS_OFFSET = local_2c;
  }
  return uVar3;
}

