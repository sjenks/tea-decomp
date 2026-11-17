// name: FUN_0043ba40
// address: 0x43ba40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043ba40(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46d834);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004645dc;
    *(undefined ***)param_1[1] = &PTR_LAB_0046465c;
    *(undefined ***)param_1[2] = &PTR_LAB_00464668;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00464674;
    FUN_0044b2dc();
    FUN_00445ad4((int)(param_1 + 0xe),2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
    FUN_0043d778(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_0042ade0(param_1 + 0x1d,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00413978(param_1 + 0x1b,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

