// name: FUN_00446bd4
// address: 0x446bd4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00446bd4(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x481610);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_00478390;
    *(undefined ***)param_1[1] = &PTR_LAB_00478410;
    *(undefined ***)param_1[2] = &PTR_LAB_0047841c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00478428;
    FUN_0045681c();
    FUN_00450c68((int)(param_1 + 0xe),2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
    FUN_0044890c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_00435f74(param_1 + 0x1d,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_0041e99c(param_1 + 0x1b,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

