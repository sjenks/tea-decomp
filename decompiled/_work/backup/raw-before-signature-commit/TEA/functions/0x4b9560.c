// name: FUN_004b9560
// address: 0x4b9560
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004b9560(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10
            )

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50eb38);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x12);
    param_1[0x12] = (int)(param_1 + 0xf);
    param_1[0x13] = (int)(param_1 + 0x10);
    param_1[1] = (int)(param_1 + 0xf);
    param_1[2] = (int)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0xf] = (int)&PTR_FUN_004ea94c;
    param_1[0x10] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
  FUN_004b5ff0(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,'\x01',param_10);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
  param_1[3] = (int)&PTR_FUN_004fcffc;
  *(undefined ***)param_1[1] = &PTR_LAB_004fd05c;
  *(undefined ***)param_1[2] = &PTR_LAB_004fd068;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fd074;
  FUN_004bccc4(param_1 + 7,1,0x51);
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x100;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

