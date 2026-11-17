// name: FUN_0043d0c0
// address: 0x43d0c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0043d0c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47f8b4);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x2a;
    *(int *)((int)param_1 + 0x2a) = (int)param_1 + 0x1e;
    *(int *)((int)param_1 + 0x2e) = (int)param_1 + 0x22;
    param_1[1] = (int)param_1 + 0x1e;
    param_1[2] = (int)param_1 + 0x22;
    *(undefined4 *)((int)param_1 + 0x1a) = 0;
    *(undefined4 *)((int)param_1 + 0x26) = 0;
    *(undefined ***)((int)param_1 + 0x1e) = &PTR_FUN_00474f84;
    *(undefined ***)((int)param_1 + 0x22) = &PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18((int *)((int)param_1 + 0x2a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_0043c86c(param_1,1,param_3,param_4,param_6);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PTR_FUN_0047f7cc;
  *(undefined ***)param_1[1] = &PTR_LAB_0047f804;
  *(undefined ***)param_1[2] = &PTR_LAB_0047f810;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047f81c;
  *(undefined4 *)((int)param_1 + 0x16) = param_5;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x100;
  *in_FS_OFFSET = local_28;
  return param_1;
}

