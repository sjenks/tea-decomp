// name: FUN_00446060
// address: 0x446060
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00446060(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46f76c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x22);
    param_1[0x22] = (int)(param_1 + 0x1f);
    param_1[0x23] = (int)(param_1 + 0x20);
    param_1[1] = (int)(param_1 + 0x1f);
    param_1[2] = (int)(param_1 + 0x20);
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x1f] = (int)&PTR_FUN_00462234;
    param_1[0x20] = (int)&PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0x22,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_00445d00(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&PTR_FUN_0046f78c;
  *(undefined ***)param_1[1] = &PTR_LAB_0046f7d4;
  *(undefined ***)param_1[2] = &PTR_LAB_0046f7e0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046f7ec;
  *in_FS_OFFSET = local_28;
  return param_1;
}

