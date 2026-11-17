// name: FUN_00428ce4
// address: 0x428ce4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00428e54) */

int * __cdecl
FUN_00428ce4(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f2090);
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
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x20;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x20;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004c78e4(param_1,1,uVar1,param_4,(uint *)&DAT_004f2070,*param_5,param_5[1],
               param_5[2] - *param_5,param_5[3] - param_5[1],0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x20;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x20;
  param_1[3] = (int)&PTR_FUN_004f2138;
  *(undefined ***)param_1[1] = &PTR_LAB_004f2170;
  *(undefined ***)param_1[2] = &PTR_LAB_004f217c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f2188;
  param_1[6] = (int)param_3;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[10] = (int)&DAT_00513d64;
  param_1[0xc] = -1;
  FUN_004a7988(*param_1,0,0x100c,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

