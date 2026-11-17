// name: FUN_00430ac0
// address: 0x430ac0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00430ac0(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47cf1c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_0047cf3c;
    *(undefined ***)param_1[1] = &PTR_LAB_0047cf6c;
    *(undefined ***)param_1[2] = &PTR_LAB_0047cf78;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047cf84;
    FUN_0043d704(param_1,0);
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

