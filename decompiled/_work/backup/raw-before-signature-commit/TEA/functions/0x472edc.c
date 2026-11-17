// name: FUN_00472edc
// address: 0x472edc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00472edc(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4fedcc);
  if (param_1 == (int *)0x0) goto LAB_004730d0;
  *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_004feef0;
  param_1[4] = (int)&PTR_LAB_004fef38;
  *(undefined ***)param_1[2] = &PTR_LAB_004fef50;
  *(undefined ***)param_1[3] = &PTR_LAB_004fef5c;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004fef68;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004feff8;
  if (param_1[0x24] != 0) {
    if (*(int *)(param_1[0x24] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x24] + -0xc);
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
      if (iVar1 != 0) goto LAB_00472fd1;
    }
    FUN_004cc0bc();
    param_1[0x24] = 0;
  }
LAB_00472fd1:
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x51;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x51;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x51;
  FUN_004ae77c(param_1,0);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x51;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x51;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x51;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bdc6c((int *)((int)param_1 + 0x132),0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x2a,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x28,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_004730d0:
  *in_FS_OFFSET = local_28;
  return;
}

