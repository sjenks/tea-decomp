// name: FUN_0047be04
// address: 0x47be04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0047be04(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_34;
  
  FUN_004dce64(0x501458);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x7b;
    *(int *)((int)param_1 + 0x7b) = (int)param_1 + 0x6f;
    *(int *)((int)param_1 + 0x7f) = (int)param_1 + 0x73;
    param_1[4] = (int)param_1 + 0x6f;
    param_1[5] = (int)param_1 + 0x73;
    *(undefined4 *)((int)param_1 + 0x6b) = 0;
    *(undefined4 *)((int)param_1 + 0x77) = 0;
    *(undefined ***)((int)param_1 + 0x6f) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x73) = &PTR_FUN_004ea93c;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x7b),1);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  iVar3 = 0;
  puVar1 = (uint *)FUN_004cc0f0();
  if (puVar1 != (uint *)0x0) {
    FUN_0048faec(puVar1);
  }
  FUN_0049d444(param_1,1,param_3,param_4,param_5,puVar1,iVar3);
  param_1[6] = (int)&PTR_FUN_005014a8;
  param_1[1] = (int)&PTR_LAB_00501520;
  *(undefined ***)param_1[4] = &PTR_LAB_00501540;
  *(undefined ***)param_1[5] = &PTR_LAB_0050154c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00501558;
  puVar2 = (undefined4 *)FUN_00490dd0((int)(param_1 + 1),0x7537);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)(param_1[6] + 0x1c))();
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
    *(int *)((int)param_1 + 0x5e) = *(int *)((int)param_1 + 0x5e) + -1;
  }
  *in_FS_OFFSET = local_34;
  return param_1;
}

