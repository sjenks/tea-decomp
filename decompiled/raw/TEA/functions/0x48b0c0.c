// name: FUN_0048b0c0
// address: 0x48b0c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0048b0c0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x505470);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x15);
    param_1[0x15] = (int)(param_1 + 0x12);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[1] = (int)(param_1 + 0x12);
    param_1[2] = (int)(param_1 + 0x13);
    param_1[0x11] = 0;
    param_1[0x14] = 0;
    param_1[0x12] = (int)&PTR_FUN_004ea94c;
    param_1[0x13] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x15,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x28;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x28;
  FUN_0048c514(param_1,1,param_3,param_6,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x28;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x28;
  param_1[3] = (int)&PTR_FUN_005054b4;
  *(undefined ***)param_1[1] = &PTR_LAB_005054f8;
  *(undefined ***)param_1[2] = &PTR_LAB_00505504;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00505510;
  param_1[0x10] = param_4;
  if (DAT_00505444 == 0) {
    DAT_00505444 = RegisterWindowMessageA(s_commdlg_SetRGBColor_00505430);
  }
  FUN_004dc844(param_1 + 7,0,0x24);
  param_1[7] = 0x24;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  param_1[9] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0xc] = *(uint *)param_1[0x10] | 0x10;
  if (param_5 == 0) {
    param_1[0xc] = param_1[0xc] & 0xffffffdf;
  }
  else {
    param_1[0xf] = param_5;
    param_1[0xc] = param_1[0xc] | 0x20;
  }
  param_1[0xe] = 0;
  uVar1 = FUN_0048c12c((uint *)(param_1[0x10] + 8));
  param_1[10] = uVar1;
  param_1[0xb] = *(int *)(param_1[0x10] + 0xc);
  *in_FS_OFFSET = local_28;
  return param_1;
}

