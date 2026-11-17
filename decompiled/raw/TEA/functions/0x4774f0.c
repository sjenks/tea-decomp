// name: FUN_004774f0
// address: 0x4774f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004774f0(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5005c8);
  if (param_1 == (int *)0x0) goto LAB_00477731;
  param_1[3] = (int)&PTR_FUN_0050067c;
  *(undefined ***)param_1[1] = &PTR_LAB_00500744;
  *(undefined ***)param_1[2] = &PTR_LAB_00500750;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050075c;
  FUN_004abd9c(param_1 + 0x1c4,2);
  FUN_00417b74(param_1 + 0x192,2);
  FUN_00420274(param_1 + 0x22,2);
  if (param_1[0x20] != 0) {
    if (*(int *)(param_1[0x20] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x20] + -0xc);
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
      if (iVar1 != 0) goto LAB_00477610;
    }
    FUN_004cc0bc();
    param_1[0x20] = 0;
  }
LAB_00477610:
  if (param_1[0x1c] != 0) {
    if (*(int *)(param_1[0x1c] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x1c] + -0xc);
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
      if (iVar1 != 0) goto LAB_0047768a;
    }
    FUN_004cc0bc();
    param_1[0x1c] = 0;
  }
LAB_0047768a:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x768;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x768;
  FUN_00413f3c(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x768;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x768;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x1f6,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_00489c54(param_1 + 500,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_00477731:
  *in_FS_OFFSET = local_28;
  return;
}

