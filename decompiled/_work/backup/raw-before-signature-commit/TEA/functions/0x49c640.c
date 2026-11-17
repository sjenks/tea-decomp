// name: FUN_0049c640
// address: 0x49c640
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0049c640(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6,undefined4 param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508c00);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x9e;
    param_1[1] = (int)param_1 + 0xa2;
    *(undefined4 *)((int)param_1 + 0x9a) = 0;
    *(undefined ***)((int)param_1 + 0x9e) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0xa2) = &PTR_FUN_004ea93c;
  }
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x14;
  FUN_004a4de0(param_1,1,param_3,(uint *)0x0,0);
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x14;
  param_1[2] = (int)&PTR_FUN_00508c6c;
  *(undefined ***)*param_1 = &PTR_LAB_00508cfc;
  *(undefined ***)param_1[1] = &PTR_LAB_00508d08;
  *(undefined4 *)((int)param_1 + 0x86) = param_7;
  *(undefined4 *)((int)param_1 + 0x8a) = *param_6;
  *(undefined4 *)((int)param_1 + 0x8e) = param_6[1];
  *(undefined4 *)((int)param_1 + 0x92) = param_4;
  *(undefined4 *)((int)param_1 + 0x96) = param_5;
  param_1[6] = 0x50800000;
  param_1[0x17] = DAT_0051b198;
  *in_FS_OFFSET = local_28;
  return param_1;
}

