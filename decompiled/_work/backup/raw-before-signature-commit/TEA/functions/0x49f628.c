// name: FUN_0049f628
// address: 0x49f628
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0049f628(int *param_1,int param_2,undefined4 param_3,char param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5097c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&PTR_FUN_004ea94c;
    param_1[7] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004ad6d8(param_1,1,param_3,0,(uint *)&DAT_00509730,0,0,0,0,param_5);
  param_1[3] = (int)&PTR_FUN_0050980c;
  *(undefined ***)param_1[1] = &PTR_LAB_0050983c;
  *(undefined ***)param_1[2] = &PTR_LAB_00509848;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00509854;
  *(undefined4 *)(*param_1 + 0x18) = 0x88000000;
  if (param_4 != '\0') {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 1;
  }
  bVar1 = FUN_004875a8();
  if (bVar1) {
    *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 0x100;
  }
  else {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x800000;
  }
  *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 8;
  bVar1 = FUN_00487180();
  if (bVar1) {
    iVar2 = 4;
  }
  else {
    iVar2 = 0;
  }
  param_1[4] = iVar2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

