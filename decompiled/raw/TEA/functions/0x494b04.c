// name: FUN_00494b04
// address: 0x494b04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00494b04(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5074e8);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x41;
    *(int *)((int)param_1 + 0x41) = (int)param_1 + 0x35;
    *(int *)((int)param_1 + 0x45) = (int)param_1 + 0x39;
    param_1[1] = (int)param_1 + 0x35;
    param_1[2] = (int)param_1 + 0x39;
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    *(undefined4 *)((int)param_1 + 0x3d) = 0;
    *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x39) = &PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4de0((int *)((int)param_1 + 0x41),1,param_3,param_4,param_5);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&PTR_FUN_005076c0;
  *(undefined ***)param_1[1] = &PTR_LAB_005076d8;
  *(undefined ***)param_1[2] = &PTR_LAB_005076e4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_005076f0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_004a5098(*param_1,param_3,param_4,param_5);
  *(undefined4 *)((int)param_1 + 0x29) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  piVar1 = FUN_004cc3c4((int *)0x0,9,4,1,FUN_00494c8c);
  param_1[9] = (int)piVar1;
  *(undefined1 *)(param_1[9] + 8) = 1;
  *(undefined1 *)(param_1[9] + 0x11) = 1;
  *(undefined1 *)(param_1[9] + 0x1a) = 1;
  *(undefined1 *)(param_1[9] + 0x23) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

