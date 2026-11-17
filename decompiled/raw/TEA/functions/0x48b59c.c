// name: FUN_0048b59c
// address: 0x48b59c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0048b59c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5055c0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1b);
    param_1[0x1b] = (int)(param_1 + 0x18);
    param_1[0x1c] = (int)(param_1 + 0x19);
    param_1[1] = (int)(param_1 + 0x18);
    param_1[2] = (int)(param_1 + 0x19);
    param_1[0x17] = 0;
    param_1[0x1a] = 0;
    param_1[0x18] = (int)&PTR_FUN_004ea94c;
    param_1[0x19] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1b,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x40;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x40;
  FUN_0048c514(param_1,1,param_3,param_6,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x40;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x40;
  param_1[3] = (int)&PTR_FUN_00505604;
  *(undefined ***)param_1[1] = &PTR_LAB_00505648;
  *(undefined ***)param_1[2] = &PTR_LAB_00505654;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00505660;
  param_1[0x16] = param_4;
  FUN_004dc844(param_1 + 7,0,0x3c);
  param_1[7] = 0x3c;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  param_1[0x11] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0xc] = *(uint *)param_1[0x16] | 8;
  if (param_5 == 0) {
    param_1[0xc] = param_1[0xc] & 0xffffffef;
  }
  else {
    param_1[0x10] = param_5;
    param_1[0xc] = param_1[0xc] | 0x10;
  }
  param_1[0xf] = 0;
  param_1[9] = *(int *)(param_1[0x16] + 8);
  param_1[10] = param_1[0x16] + 0xc;
  param_1[0xb] = *(int *)(param_1[0x16] + 0x48);
  uVar1 = FUN_0048c12c((uint *)(param_1[0x16] + 0x4c));
  param_1[0xd] = uVar1;
  param_1[0x12] = *(int *)(param_1[0x16] + 0x50);
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_1[0x16] + 0x54);
  param_1[0x14] = *(int *)(param_1[0x16] + 0x56);
  param_1[0x15] = *(int *)(param_1[0x16] + 0x5a);
  *in_FS_OFFSET = local_28;
  return param_1;
}

