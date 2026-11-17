// name: FUN_0042a250
// address: 0x42a250
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042a250(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff7c;
  undefined4 in_stack_ffffff80;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_004dce64(0x4f2718);
  if (param_1 != (int *)0x0) {
    local_18 = 8;
    param_1[3] = (int)&PTR_FUN_004f2c28;
    *(undefined ***)param_1[1] = &PTR_LAB_004f2c68;
    *(undefined ***)param_1[2] = &PTR_LAB_004f2c74;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f2c80;
    local_c = 8;
    FUN_0042a45c(param_1 + 0x30,param_1[0x31],param_1[0x32]);
    FUN_004cc0bc();
    local_c = local_c + -2;
    if (param_1[0x27] != 0) {
      local_30 = param_1[0x27];
      local_2c = *(int *)(param_1[0x27] + 8);
      FUN_0042a474(local_48,(int)(param_1 + 0x1e),in_stack_ffffff7c,in_stack_ffffff80,local_2c);
      iVar1 = param_1[0x27];
      *(int *)(iVar1 + 0xc) = param_1[0x24];
      param_1[0x24] = iVar1;
      FUN_0042af24((int)(param_1 + 0x1e));
    }
    local_c = local_c + -1;
    FUN_00429fb8(param_1 + 0x14,(undefined4 *)param_1[0x15],(undefined4 *)param_1[0x16]);
    FUN_004cc0bc();
    local_c = local_c + -2;
    if (param_1[0xf] != 0) {
      local_38 = param_1[0xf];
      local_34 = *(int *)(param_1[0xf] + 8);
      FUN_0042af64(local_58,(int)(param_1 + 6),in_stack_ffffff7c,in_stack_ffffff80,local_34);
      iVar1 = param_1[0xf];
      *(int *)(iVar1 + 0xc) = param_1[0xc];
      param_1[0xc] = iVar1;
      FUN_0042b9ac((int)(param_1 + 6));
    }
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x114;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x114;
    local_c = local_c + -3;
    FUN_004ad9d8(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x114;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x114;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      local_c = local_c + -2;
      FUN_004a52c0(param_1 + 0x4e,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      local_c = local_c + -1;
      FUN_00489c54(param_1 + 0x4c,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

