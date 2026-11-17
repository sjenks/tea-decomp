// name: FUN_00417ffc
// address: 0x417ffc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00417ffc(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ee1f8);
  if (param_1 == (int *)0x0) goto LAB_0041817d;
  param_1[3] = (int)&PTR_FUN_004f0a50;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0a90;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0a9c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0aa8;
  if ((HGDIOBJ)param_1[7] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[7]);
  }
  if (param_1[0xc] != 0) {
    if (*(int *)(param_1[0xc] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xc] + -0xc);
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
      if (iVar1 != 0) goto LAB_004180e5;
    }
    FUN_004cc0bc();
    param_1[0xc] = 0;
  }
LAB_004180e5:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1e;
  FUN_004ac5f0(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1e;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x12,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x10,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0041817d:
  *in_FS_OFFSET = local_28;
  return;
}

