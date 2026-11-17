// name: FUN_004419a0
// address: 0x4419a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004419a0(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,char param_6,
            int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46eb5c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5a;
    *(int *)((int)param_1 + 0x5a) = (int)param_1 + 0x4e;
    *(int *)((int)param_1 + 0x5e) = (int)param_1 + 0x52;
    param_1[1] = (int)param_1 + 0x4e;
    param_1[2] = (int)param_1 + 0x52;
    *(undefined4 *)((int)param_1 + 0x4a) = 0;
    *(undefined4 *)((int)param_1 + 0x56) = 0;
    *(undefined ***)((int)param_1 + 0x4e) = &PTR_FUN_00462234;
    *(undefined ***)((int)param_1 + 0x52) = &PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84((int *)((int)param_1 + 0x5a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&PTR_FUN_0046ecc8;
  *(undefined ***)param_1[1] = &PTR_LAB_0046ed1c;
  *(undefined ***)param_1[2] = &PTR_LAB_0046ed28;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046ed34;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  FUN_0042ac60(*param_1,param_3,param_4,param_7);
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  FUN_00441adc(param_1,param_5,param_6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

