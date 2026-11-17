// name: FUN_004014d0
// address: 0x4014d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004014d0(int *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ea434);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004ea7c8;
    *(undefined ***)param_1[1] = &PTR_LAB_004ea890;
    *(undefined ***)param_1[2] = &PTR_LAB_004ea89c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ea8a8;
    FUN_004abd9c(param_1 + 0x267,2);
    FUN_004abd9c(param_1 + 0x23c,2);
    FUN_0041b094(param_1 + 0x20d,2);
    FUN_0041b094(param_1 + 0x1de,2);
    FUN_0041b094(param_1 + 0x1af,2);
    FUN_0041b094(param_1 + 0x180,2);
    piVar1 = (int *)((int)param_1 + 0x552);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x556) + -4);
    *piVar2 = *piVar2 + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_004ad9d8(piVar1,0);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x556) + -4);
    *piVar2 = *piVar2 + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    piVar2 = (int *)(*(int *)((int)param_1 + 0x556) + -4);
    *piVar2 = *piVar2 + 0x96;
    FUN_004a52c0((undefined4 *)((int)param_1 + 0x57a),0);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x556) + -4);
    *piVar2 = *piVar2 + -0x96;
    FUN_00489c54((undefined4 *)((int)param_1 + 0x572),0);
    piVar2 = param_1 + 0x129;
    *(int *)(param_1[0x12a] + -4) = *(int *)(param_1[0x12a] + -4) + -4;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -4;
    FUN_004ad9d8(piVar2,0);
    *(int *)(param_1[0x12a] + -4) = *(int *)(param_1[0x12a] + -4) + 4;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 4;
    *(int *)(param_1[0x12a] + -4) = *(int *)(param_1[0x12a] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x133,0);
    *(int *)(param_1[0x12a] + -4) = *(int *)(param_1[0x12a] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x131,0);
    piVar1 = (int *)((int)param_1 + 0x3f6);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x3fa) + -4);
    *piVar2 = *piVar2 + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_004ad9d8(piVar1,0);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x3fa) + -4);
    *piVar2 = *piVar2 + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    piVar2 = (int *)(*(int *)((int)param_1 + 0x3fa) + -4);
    *piVar2 = *piVar2 + 0x96;
    FUN_004a52c0((undefined4 *)((int)param_1 + 0x41e),0);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x3fa) + -4);
    *piVar2 = *piVar2 + -0x96;
    FUN_00489c54((undefined4 *)((int)param_1 + 0x416),0);
    piVar2 = param_1 + 0xd2;
    *(int *)(param_1[0xd3] + -4) = *(int *)(param_1[0xd3] + -4) + -4;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -4;
    FUN_004ad9d8(piVar2,0);
    *(int *)(param_1[0xd3] + -4) = *(int *)(param_1[0xd3] + -4) + 4;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 4;
    *(int *)(param_1[0xd3] + -4) = *(int *)(param_1[0xd3] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0xdc,0);
    *(int *)(param_1[0xd3] + -4) = *(int *)(param_1[0xd3] + -4) + -0x96;
    FUN_00489c54(param_1 + 0xda,0);
    FUN_0041b094(param_1 + 0xa3,2);
    FUN_0041b094(param_1 + 0x74,2);
    FUN_0041b094(param_1 + 0x45,2);
    piVar2 = param_1 + 0x1a;
    *(int *)(param_1[0x1b] + -4) = *(int *)(param_1[0x1b] + -4) + -1;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -1;
    FUN_004ad9d8(piVar2,0);
    *(int *)(param_1[0x1b] + -4) = *(int *)(param_1[0x1b] + -4) + 1;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 1;
    *(int *)(param_1[0x1b] + -4) = *(int *)(param_1[0x1b] + -4) + 0x96;
    FUN_004a52c0((undefined4 *)((int)param_1 + 0x8d),0);
    *(int *)(param_1[0x1b] + -4) = *(int *)(param_1[0x1b] + -4) + -0x96;
    FUN_00489c54((undefined4 *)((int)param_1 + 0x85),0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x9e8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x9e8;
    FUN_00413f3c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x9e8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x9e8;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x296,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x294,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

