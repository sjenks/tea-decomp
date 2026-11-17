// name: FUN_0043d704
// address: 0x43d704
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043d704(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47fabc);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_0047f9bc;
    *(undefined ***)param_1[1] = &PTR_LAB_0047f9e8;
    *(undefined ***)param_1[2] = &PTR_LAB_0047f9f4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047fa00;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_00435f74(param_1 + 9,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_0041e99c(param_1 + 7,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

