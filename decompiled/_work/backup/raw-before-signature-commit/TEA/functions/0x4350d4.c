// name: FUN_004350d4
// address: 0x4350d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004350d4(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f321c);
  if (param_1 == (int *)0x0) goto LAB_0043529b;
  param_1[3] = (int)&PTR_FUN_004f3248;
  *(undefined ***)param_1[1] = &PTR_LAB_004f3310;
  *(undefined ***)param_1[2] = &PTR_LAB_004f331c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f3328;
  if (param_1[0xb6] != 0) {
    if (*(int *)(param_1[0xb6] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xb6] + -0xc);
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
      if (iVar1 != 0) goto LAB_004351b0;
    }
    FUN_004cc0bc();
    param_1[0xb6] = 0;
  }
LAB_004351b0:
  FUN_0041d7b0(param_1 + 0x7e,2);
  FUN_0041d7b0(param_1 + 0x48,2);
  FUN_0041b094(param_1 + 0x18,2);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x280;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x280;
  FUN_00413f3c(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x280;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x280;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0xbc,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_00489c54(param_1 + 0xba,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0043529b:
  *in_FS_OFFSET = local_28;
  return;
}

