// name: FUN_004a4194
// address: 0x4a4194
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004a42e1) */

int * __cdecl FUN_004a4194(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50a9d0);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x4f;
    *(int *)((int)param_1 + 0x4f) = (int)param_1 + 0x43;
    *(int *)((int)param_1 + 0x53) = (int)param_1 + 0x47;
    param_1[1] = (int)param_1 + 0x43;
    param_1[2] = (int)param_1 + 0x47;
    *(undefined4 *)((int)param_1 + 0x3f) = 0;
    *(undefined4 *)((int)param_1 + 0x4b) = 0;
    *(undefined ***)((int)param_1 + 0x43) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x47) = &PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x4f),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x27;
  FUN_004c7d50(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x27;
  param_1[3] = (int)&PTR_FUN_0050aa64;
  *(undefined ***)param_1[1] = &PTR_LAB_0050aac0;
  *(undefined ***)param_1[2] = &PTR_LAB_0050aacc;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050aad8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xd] = (int)&DAT_00513d64;
  *in_FS_OFFSET = local_28;
  return param_1;
}

