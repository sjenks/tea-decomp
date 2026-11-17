// name: FUN_00474188
// address: 0x474188
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00474188(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ff88c);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_004ffcdc;
    param_1[4] = (int)&PTR_LAB_004ffd28;
    *(undefined ***)param_1[2] = &PTR_LAB_004ffd40;
    *(undefined ***)param_1[3] = &PTR_LAB_004ffd4c;
    *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004ffd58;
    *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004ffde8;
    if (DAT_0051ac7c != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_0051ac7c);
    }
    PostQuitMessage(0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -9;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -9;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -9;
    FUN_004ae77c(param_1,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 9;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 9;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 9;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
      FUN_004bdc6c((int *)((int)param_1 + 0xea),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x18,0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x16,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

