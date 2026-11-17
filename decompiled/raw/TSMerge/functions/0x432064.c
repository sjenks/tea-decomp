// name: FUN_00432064
// address: 0x432064
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00432064(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46bb0c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_0046b9f0;
    *(undefined ***)param_1[1] = &PTR_LAB_0046ba28;
    *(undefined ***)param_1[2] = &PTR_LAB_0046ba34;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046ba40;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    FUN_00431810(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_0042ade0((undefined4 *)((int)param_1 + 0x2a),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00413978((undefined4 *)((int)param_1 + 0x22),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

