// name: FUN_0041be78
// address: 0x41be78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0041be78(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,int param_6
            )

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4eed4c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xd);
    param_1[0xd] = (int)(param_1 + 10);
    param_1[0xe] = (int)(param_1 + 0xb);
    param_1[1] = (int)(param_1 + 10);
    param_1[2] = (int)(param_1 + 0xb);
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[10] = (int)&PTR_FUN_004ea94c;
    param_1[0xb] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xd,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004acc48(param_1,1,uVar1,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc;
  param_1[3] = (int)&PTR_FUN_004f0254;
  *(undefined ***)param_1[1] = &PTR_LAB_004f02e8;
  *(undefined ***)param_1[2] = &PTR_LAB_004f02f4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0300;
  param_1[6] = param_5;
  param_1[7] = param_6;
  param_1[8] = (int)param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

