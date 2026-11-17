// name: FUN_00435d9c
// address: 0x435d9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00435d9c(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46c38c);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -10;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -10;
    FUN_00447e8c((int *)((int)param_1 + 0x4a),0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 10;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 10;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x3a;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x3a;
    FUN_00441be8(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x3a;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x3a;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_0042ade0(param_1 + 0x28,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00413978(param_1 + 0x26,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

