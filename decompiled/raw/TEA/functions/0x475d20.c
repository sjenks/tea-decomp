// name: FUN_00475d20
// address: 0x475d20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00475d20(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ffef8);
  if (param_1 == (int *)0x0) goto LAB_00475f3b;
  param_1[3] = (int)&PTR_FUN_00500064;
  *(undefined ***)param_1[1] = &PTR_LAB_0050012c;
  *(undefined ***)param_1[2] = &PTR_LAB_00500138;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00500144;
  if (param_1[0xa4] != 0) {
    if (*(int *)(param_1[0xa4] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xa4] + -0xc);
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
      if (iVar1 != 0) goto LAB_00475dfc;
    }
    FUN_004cc0bc();
    param_1[0xa4] = 0;
  }
LAB_00475dfc:
  FUN_00417b74(param_1 + 0x70,2);
  FUN_004abd9c((int *)((int)param_1 + 0x10e),2);
  piVar2 = param_1 + 0x18;
  *(int *)(param_1[0x19] + -4) = *(int *)(param_1[0x19] + -4) + -4;
  *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -4;
  FUN_004ad9d8(piVar2,0);
  *(int *)(param_1[0x19] + -4) = *(int *)(param_1[0x19] + -4) + 4;
  *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 4;
  *(int *)(param_1[0x19] + -4) = *(int *)(param_1[0x19] + -4) + 0x96;
  FUN_004a52c0(param_1 + 0x22,0);
  *(int *)(param_1[0x19] + -4) = *(int *)(param_1[0x19] + -4) + -0x96;
  FUN_00489c54(param_1 + 0x20,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x240;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x240;
  FUN_00413f3c(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x240;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x240;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0xac,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_00489c54(param_1 + 0xaa,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_00475f3b:
  *in_FS_OFFSET = local_28;
  return;
}

