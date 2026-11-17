// name: FUN_0041851c
// address: 0x41851c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041851c(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ee2a0);
  if (param_1 == (int *)0x0) goto LAB_0041868a;
  param_1[3] = (int)&PTR_FUN_004f096c;
  *(undefined ***)param_1[1] = &PTR_LAB_004f09a4;
  *(undefined ***)param_1[2] = &PTR_LAB_004f09b0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f09bc;
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
      if (iVar1 != 0) goto LAB_004185f5;
    }
    FUN_004cc0bc();
    param_1[10] = 0;
  }
LAB_004185f5:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x16;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x16;
  FUN_004ac5f0(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x16;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x16;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x10,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_00489c54(param_1 + 0xe,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0041868a:
  *in_FS_OFFSET = local_28;
  return;
}

