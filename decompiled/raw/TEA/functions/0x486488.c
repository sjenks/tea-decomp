// name: FUN_00486488
// address: 0x486488
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00486488(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x503b98);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_00503bb8;
    *(undefined ***)param_1[1] = &PTR_LAB_00503c80;
    *(undefined ***)param_1[2] = &PTR_LAB_00503c8c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00503c98;
    FUN_004b62bc((int *)((int)param_1 + 0x11a),2);
    FUN_004b62bc(param_1 + 0x1a,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x170;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x170;
    FUN_00413f3c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x170;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x170;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x78,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x76,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

