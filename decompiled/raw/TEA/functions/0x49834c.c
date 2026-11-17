// name: FUN_0049834c
// address: 0x49834c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0049834c(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x5080d8);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x62;
    *(int *)((int)param_1 + 0x62) = (int)param_1 + 0x56;
    *(int *)((int)param_1 + 0x66) = (int)param_1 + 0x5a;
    param_1[4] = (int)param_1 + 0x56;
    param_1[5] = (int)param_1 + 0x5a;
    *(undefined4 *)((int)param_1 + 0x52) = 0;
    *(undefined4 *)((int)param_1 + 0x5e) = 0;
    *(undefined ***)((int)param_1 + 0x56) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x5a) = &PTR_FUN_004ea93c;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x62),1);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -5;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -5;
  if (param_4 == (uint *)0x0) {
    param_4 = FUN_004982d4();
  }
  FUN_00491150(param_1,1,param_3,0,param_4,param_5);
  *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 5;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 5;
  param_1[6] = (int)&PTR_FUN_00508134;
  param_1[1] = (int)&PTR_LAB_005081ac;
  *(undefined ***)param_1[4] = &PTR_LAB_005081cc;
  *(undefined ***)param_1[5] = &PTR_LAB_005081d8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_005081e4;
  puVar2 = (undefined4 *)FUN_004cc0f0();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0049eb84(puVar2,30000,3,0,10,(uint *)0x0,0);
  }
  *(undefined4 *)(*param_1 + 0x34) = 0x7d28;
  bVar1 = FUN_004875a8();
  *(bool *)((int)param_1 + 0x4d) = !bVar1;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)puVar2 + 5) = 1;
  (**(code **)(param_1[6] + 0x14))();
  *in_FS_OFFSET = local_2c;
  return param_1;
}

