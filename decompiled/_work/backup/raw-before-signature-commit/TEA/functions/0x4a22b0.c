// name: FUN_004a22b0
// address: 0x4a22b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a22b0(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x50a344);
  if (param_1 == (int *)0x0) goto LAB_004a247e;
  param_1[3] = (int)&PTR_FUN_0050aa64;
  *(undefined ***)param_1[1] = &PTR_LAB_0050aac0;
  *(undefined ***)param_1[2] = &PTR_LAB_0050aacc;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050aad8;
  if ((uint *)param_1[6] != (uint *)0x0) {
    FUN_00494064((uint *)param_1[6],0);
    FUN_004cc0bc();
  }
  if (param_1[0xd] != 0) {
    if (*(int *)(param_1[0xd] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xd] + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004a23bc;
    }
    FUN_004cc0bc();
    param_1[0xd] = 0;
  }
LAB_004a23bc:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x27;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004ad9d8(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x27;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a52c0((undefined4 *)((int)param_1 + 0x4f),0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_00489c54((undefined4 *)((int)param_1 + 0x47),0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_004a247e:
  *in_FS_OFFSET = local_2c;
  return;
}

