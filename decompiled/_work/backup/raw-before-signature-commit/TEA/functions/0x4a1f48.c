// name: FUN_004a1f48
// address: 0x4a1f48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004a1f48(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50a0d8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xe);
    param_1[0xe] = (int)(param_1 + 0xb);
    param_1[0xf] = (int)(param_1 + 0xc);
    param_1[1] = (int)(param_1 + 0xb);
    param_1[2] = (int)(param_1 + 0xc);
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xb] = (int)&PTR_FUN_004ea94c;
    param_1[0xc] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xe,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x14;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x14;
  FUN_004ad87c(param_1,1,param_3,param_4,param_6);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x14;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x14;
  FUN_004a1f1c(param_1 + 5,0);
  param_1[3] = (int)&PTR_FUN_0050a0f8;
  *(undefined ***)param_1[1] = &PTR_LAB_0050a12c;
  *(undefined ***)param_1[2] = &PTR_LAB_0050a138;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050a144;
  param_1[6] = param_5;
  param_1[7] = 0;
  param_1[8] = 100;
  param_1[9] = 0;
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

