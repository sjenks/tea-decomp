// name: FUN_00475a74
// address: 0x475a74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00475a74(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ffe98);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xac);
    param_1[0xac] = (int)(param_1 + 0xa9);
    param_1[0xad] = (int)(param_1 + 0xaa);
    param_1[1] = (int)(param_1 + 0xa9);
    param_1[2] = (int)(param_1 + 0xaa);
    param_1[0xa8] = 0;
    param_1[0xab] = 0;
    param_1[0xa9] = (int)&PTR_FUN_004ea94c;
    param_1[0xaa] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xac,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x240;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x240;
  FUN_00413cf4(param_1,1,0x4ffe34,param_3,param_4,(uint *)0x321e,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x240;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x240;
  param_1[3] = (int)&PTR_FUN_00500064;
  *(undefined ***)param_1[1] = &PTR_LAB_0050012c;
  *(undefined ***)param_1[2] = &PTR_LAB_00500138;
  iVar1 = *param_1;
  *(undefined ***)(iVar1 + 8) = &PTR_LAB_00500144;
  FUN_004c7a28(param_1 + 0x18,0,iVar1,0x3228,0,0);
  FUN_004abc64((int *)((int)param_1 + 0x10e),0,*param_1,1,0);
  FUN_004179f0(param_1 + 0x70,0,param_1,0xd0c);
  param_1[0xa4] = 0;
  iVar1 = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_5 + 8) + -4);
    piVar3 = FUN_004cf7b0(param_1 + 0xa2,uVar2,uVar2);
    param_1[0xa4] = (int)(piVar3 + 3);
    FUN_004dc7d4((undefined4 *)param_1[0xa4],*(undefined4 **)(param_5 + 8),uVar2);
  }
  else {
    param_1[0xa4] = *(int *)(param_5 + 8);
    piVar3 = (int *)(param_1[0xa4] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  param_1[0xa6] = param_6;
  *in_FS_OFFSET = local_28;
  return param_1;
}

