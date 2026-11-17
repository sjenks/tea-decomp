// name: FUN_0043d32c
// address: 0x43d32c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043d32c(int *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f5634);
  if (param_1 == (int *)0x0) goto LAB_0043d79a;
  param_1[3] = (int)&PTR_FUN_004f5990;
  param_1[0x18] = (int)&PTR_LAB_004f5a68;
  *(undefined ***)param_1[1] = &PTR_LAB_004f5a84;
  *(undefined ***)param_1[2] = &PTR_LAB_004f5a90;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f5a9c;
  FUN_00417b74(param_1 + 0x1a2,2);
  FUN_0041b094(param_1 + 0x173,2);
  piVar2 = (int *)((int)param_1 + 0x51d);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + -4;
  *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -4;
  FUN_004ad9d8(piVar2,0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + 4;
  *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 4;
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + 0x96;
  FUN_004a52c0((undefined4 *)((int)param_1 + 0x545),0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + -0x96;
  FUN_00489c54((undefined4 *)((int)param_1 + 0x53d),0);
  FUN_004ad9d8((int *)((int)param_1 + 0x473),0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x477) + -4);
  *piVar3 = *piVar3 + 0x96;
  FUN_004a52c0((undefined4 *)((int)param_1 + 0x497),0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x477) + -4);
  *piVar3 = *piVar3 + -0x96;
  FUN_00489c54((undefined4 *)((int)param_1 + 0x48f),0);
  piVar3 = param_1 + 0xf2;
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + -1;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + -1;
  FUN_004ad9d8(piVar3,0);
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + 1;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + 1;
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + 0x96;
  FUN_004a52c0((undefined4 *)((int)param_1 + 0x3ed),0);
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + -0x96;
  FUN_00489c54((undefined4 *)((int)param_1 + 0x3e5),0);
  FUN_00417b74(param_1 + 0xc0,2);
  FUN_0041b7d4(param_1 + 0x93,2);
  FUN_0041b094(param_1 + 100,2);
  piVar3 = param_1 + 0x38;
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + -4;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + -4;
  FUN_004ad9d8(piVar3,0);
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + 4;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + 4;
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + 0x96;
  FUN_004a52c0(param_1 + 0x42,0);
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + -0x96;
  FUN_00489c54(param_1 + 0x40,0);
  FUN_0040b4f0(param_1 + 0x30,param_1[0x31],param_1[0x32]);
  FUN_004cc0bc();
  FUN_0040b4f0(param_1 + 0x28,param_1[0x29],param_1[0x2a]);
  FUN_004cc0bc();
  if (param_1[0x24] != 0) {
    if (*(int *)(param_1[0x24] + -0xc) != -1) {
      piVar3 = (int *)(param_1[0x24] + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d669;
    }
    FUN_004cc0bc();
    param_1[0x24] = 0;
  }
LAB_0043d669:
  if (param_1[0x20] != 0) {
    if (*(int *)(param_1[0x20] + -0xc) != -1) {
      piVar3 = (int *)(param_1[0x20] + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d6e3;
    }
    FUN_004cc0bc();
    param_1[0x20] = 0;
  }
LAB_0043d6e3:
  FUN_0043fdec(param_1 + 0x18,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x6f0;
  FUN_00413f3c(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x6f0;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x1d8,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x1d6,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0043d79a:
  *in_FS_OFFSET = local_28;
  return;
}

