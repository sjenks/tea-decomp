// name: FUN_00494cc0
// address: 0x494cc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00494cc0(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50750c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_005076c0;
    *(undefined ***)param_1[1] = &PTR_LAB_005076d8;
    *(undefined ***)param_1[2] = &PTR_LAB_005076e4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_005076f0;
    FUN_004cc0cc();
    iVar1 = param_1[6];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x55);
      FUN_004cc0bc();
    }
    param_1[6] = 0;
    FUN_0049533c((int)param_1);
    iVar1 = param_1[7];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      FUN_004cc0bc();
    }
    param_1[7] = 0;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0((undefined4 *)((int)param_1 + 0x41),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54((undefined4 *)((int)param_1 + 0x39),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

