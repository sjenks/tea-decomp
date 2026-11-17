// name: FUN_00415f60
// address: 0x415f60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00415f60(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5,
            int param_6)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x466220);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5d;
    *(int *)((int)param_1 + 0x5d) = (int)param_1 + 0x51;
    *(int *)((int)param_1 + 0x61) = (int)param_1 + 0x55;
    param_1[4] = (int)param_1 + 0x51;
    param_1[5] = (int)param_1 + 0x55;
    *(undefined4 *)((int)param_1 + 0x4d) = 0;
    *(undefined4 *)((int)param_1 + 0x59) = 0;
    *(undefined ***)((int)param_1 + 0x51) = &PTR_FUN_00462234;
    *(undefined ***)((int)param_1 + 0x55) = &PTR_FUN_00462224;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_0042ab84((int *)((int)param_1 + 0x5d),1);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  FUN_0041a280(param_1,1,param_3,param_4,param_5,param_6);
  param_1[6] = (int)&PTR_FUN_00466264;
  param_1[1] = (int)&PTR_LAB_004662d8;
  *(undefined ***)param_1[4] = &PTR_LAB_004662f8;
  *(undefined ***)param_1[5] = &PTR_LAB_00466304;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00466310;
  param_1[10] = 2;
  if (*(char *)((int)param_1 + 0x35) == '\0') {
    iVar1 = GetSystemMetrics(DAT_0046974c);
    *(char *)((int)param_1 + 0x2d) = (char)iVar1;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
    iVar1 = GetSystemMetrics(DAT_00469754);
    *(char *)((int)param_1 + 0x2f) = (char)iVar1;
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2f);
  }
  else {
    iVar1 = GetSystemMetrics(DAT_0046974c);
    *(char *)((int)param_1 + 0x2d) = (char)iVar1;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
    iVar1 = GetSystemMetrics(DAT_00469754);
    *(char *)((int)param_1 + 0x2f) = (char)iVar1;
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2f);
  }
  *(undefined1 *)((int)param_1 + 0x3f) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

