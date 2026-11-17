// name: FUN_0043df5c
// address: 0x43df5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043df5c(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47fc50);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_0047fcec;
    param_1[4] = (int)&PTR_LAB_0047fd30;
    *(undefined ***)param_1[2] = &PTR_LAB_0047fd48;
    *(undefined ***)param_1[3] = &PTR_LAB_0047fd54;
    *(undefined ***)(param_1[1] + 8) = &PTR_LAB_0047fd60;
    *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_0047fdf0;
    FUN_0045680c();
    FUN_0045680c();
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x12;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x12;
    FUN_00428e84(param_1 + 1,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x12;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x12;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
      FUN_0044cd7c((int *)((int)param_1 + 0xe1),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
      FUN_00435f74((undefined4 *)((int)param_1 + 0x57),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
      FUN_0041e99c((undefined4 *)((int)param_1 + 0x4f),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

