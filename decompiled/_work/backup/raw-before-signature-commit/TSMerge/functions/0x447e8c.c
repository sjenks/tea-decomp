// name: FUN_00447e8c
// address: 0x447e8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00447e8c(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x46fff0);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_00470190;
    *(undefined ***)param_1[1] = &PTR_LAB_004701a4;
    *(undefined ***)param_1[2] = &PTR_LAB_004701b0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004701bc;
    if (*(uint **)((int)param_1 + 0x26) != (uint *)0x0) {
      FUN_0041d334(*(uint **)((int)param_1 + 0x26),0);
      FUN_0044b2cc();
    }
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_0042ade0(param_1 + 0x10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00413978(param_1 + 0xe,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

