// name: FUN_004257c4
// address: 0x4257c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004257c4(int *param_1,int param_2,undefined4 param_3,char param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46911c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&PTR_FUN_00462234;
    param_1[7] = (int)&PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_00432270(param_1,1,param_3,0,(uint *)&DAT_004690a8,0,0,0,0,param_5);
  param_1[3] = (int)&PTR_FUN_00469160;
  *(undefined ***)param_1[1] = &PTR_LAB_00469190;
  *(undefined ***)param_1[2] = &PTR_LAB_0046919c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004691a8;
  *(undefined4 *)(*param_1 + 0x18) = 0x88000000;
  if (param_4 != '\0') {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 1;
  }
  bVar1 = FUN_004109c0();
  if (bVar1) {
    *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 0x100;
  }
  else {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x800000;
  }
  *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 8;
  bVar1 = FUN_00410754();
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

