// name: FUN_00432570
// address: 0x432570
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00432570(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46bce0);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_0046bbe0;
    *(undefined ***)param_1[1] = &PTR_LAB_0046bc0c;
    *(undefined ***)param_1[2] = &PTR_LAB_0046bc18;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046bc24;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_0042ade0(param_1 + 9,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00413978(param_1 + 7,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

