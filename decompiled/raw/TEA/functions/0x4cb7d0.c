// name: FUN_004cb7d0
// address: 0x4cb7d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004cb7d0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_004dce64(0x5127fc);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 10);
    param_1[10] = (int)(param_1 + 7);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[1] = (int)(param_1 + 7);
    param_1[2] = (int)(param_1 + 8);
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[7] = (int)&PTR_FUN_004ea94c;
    param_1[8] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004bf9d8(param_1,1,param_3,param_4,param_5);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PTR_FUN_005128f8;
  *(undefined ***)param_1[1] = &PTR_LAB_0051297c;
  *(undefined ***)param_1[2] = &PTR_LAB_00512988;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00512994;
  bVar1 = FUN_00487180();
  if (!bVar1) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 1;
    puVar3 = &LAB_00487348;
    uVar2 = 0;
    FUN_00487190(local_10);
    FUN_004e7cc4((uint *)&DAT_004872f0,local_10,uVar2,puVar3,uVar4,uVar5,uVar6,uVar7);
  }
  *in_FS_OFFSET = local_34;
  return param_1;
}

