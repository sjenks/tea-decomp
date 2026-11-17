// name: FUN_004862b0
// address: 0x4862b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004862b0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x503b5c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x78);
    param_1[0x78] = (int)(param_1 + 0x75);
    param_1[0x79] = (int)(param_1 + 0x76);
    param_1[1] = (int)(param_1 + 0x75);
    param_1[2] = (int)(param_1 + 0x76);
    param_1[0x74] = 0;
    param_1[0x77] = 0;
    param_1[0x75] = (int)&PTR_FUN_004ea94c;
    param_1[0x76] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x78,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x170;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x170;
  FUN_00413cf4(param_1,1,0x503a9c,param_3,param_4,(uint *)0x19a,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x170;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x170;
  param_1[3] = (int)&PTR_FUN_00503bb8;
  *(undefined ***)param_1[1] = &PTR_LAB_00503c80;
  *(undefined ***)param_1[2] = &PTR_LAB_00503c8c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00503c98;
  param_1[0x18] = param_5;
  param_1[0x19] = param_6;
  FUN_004b6184(param_1 + 0x1a,0,*param_1,0x604,0x33,0);
  FUN_004b6184((int *)((int)param_1 + 0x11a),0,*param_1,0x60e,0xb,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

