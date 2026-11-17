// name: FUN_0041d7b0
// address: 0x41d7b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041d7b0(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ef1e0);
  if (param_1 == (int *)0x0) goto LAB_0041d91e;
  param_1[3] = (int)&PTR_FUN_004efff4;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0064;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0070;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f007c;
  if (param_1[10] != 0) {
    if (*(int *)(param_1[10] + -0xc) != -1) {
      piVar2 = (int *)(param_1[10] + -0xc);
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
      if (iVar1 != 0) goto LAB_0041d889;
    }
    FUN_004cc0bc();
    param_1[10] = 0;
  }
LAB_0041d889:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x24;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x24;
  FUN_004b62bc(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x24;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x24;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x14,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x12,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0041d91e:
  *in_FS_OFFSET = local_28;
  return;
}

