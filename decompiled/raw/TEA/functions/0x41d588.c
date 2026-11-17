// name: FUN_0041d588
// address: 0x41d588
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0041d588(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,int param_6
            )

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ef1a4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x14);
    param_1[0x14] = (int)(param_1 + 0x11);
    param_1[0x15] = (int)(param_1 + 0x12);
    param_1[1] = (int)(param_1 + 0x11);
    param_1[2] = (int)(param_1 + 0x12);
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x11] = (int)&PTR_FUN_004ea94c;
    param_1[0x12] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x14,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x24;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x24;
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_3;
  }
  FUN_004b6184(param_1,1,uVar3,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x24;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x24;
  param_1[3] = (int)&PTR_FUN_004efff4;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0064;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0070;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f007c;
  param_1[7] = (int)param_3;
  param_1[10] = 0;
  iVar1 = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_5 + 8) + -4);
    piVar4 = FUN_004cf7b0(param_1 + 8,uVar2,uVar2);
    param_1[10] = (int)(piVar4 + 3);
    FUN_004dc7d4((undefined4 *)param_1[10],*(undefined4 **)(param_5 + 8),uVar2);
  }
  else {
    param_1[10] = *(int *)(param_5 + 8);
    piVar4 = (int *)(param_1[10] + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  param_1[0xc] = param_6;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

