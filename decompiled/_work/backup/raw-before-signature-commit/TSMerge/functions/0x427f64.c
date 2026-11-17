// name: FUN_00427f64
// address: 0x427f64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00427f64(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x469b24);
  if (param_1 == (int *)0x0) goto LAB_00428132;
  param_1[3] = (int)&PTR_FUN_0046a244;
  *(undefined ***)param_1[1] = &PTR_LAB_0046a2a0;
  *(undefined ***)param_1[2] = &PTR_LAB_0046a2ac;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046a2b8;
  if ((uint *)param_1[6] != (uint *)0x0) {
    FUN_0041d334((uint *)param_1[6],0);
    FUN_0044b2cc();
  }
  if (param_1[0xd] != 0) {
    if (*(int *)(param_1[0xd] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xd] + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00428070;
    }
    FUN_0044b2cc();
    param_1[0xd] = 0;
  }
LAB_00428070:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x27;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_00432570(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x27;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ade0((undefined4 *)((int)param_1 + 0x4f),0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_00413978((undefined4 *)((int)param_1 + 0x47),0);
  }
  if ((param_2 & 1) != 0) {
    FUN_0044b2cc();
  }
LAB_00428132:
  *in_FS_OFFSET = local_2c;
  return;
}

