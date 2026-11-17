// name: FUN_00418398
// address: 0x418398
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004184e5) */

int * __cdecl FUN_00418398(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ee270);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x10);
    param_1[0x10] = (int)(param_1 + 0xd);
    param_1[0x11] = (int)(param_1 + 0xe);
    param_1[1] = (int)(param_1 + 0xd);
    param_1[2] = (int)(param_1 + 0xe);
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xd] = (int)&PTR_FUN_004ea94c;
    param_1[0xe] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x16;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x16;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004ac4b8(param_1,1,uVar1,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x16;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x16;
  param_1[3] = (int)&PTR_FUN_004f096c;
  *(undefined ***)param_1[1] = &PTR_LAB_004f09a4;
  *(undefined ***)param_1[2] = &PTR_LAB_004f09b0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f09bc;
  param_1[7] = (int)param_3;
  param_1[10] = 0;
  param_1[10] = (int)&DAT_00513d64;
  *in_FS_OFFSET = local_28;
  return param_1;
}

