// name: FUN_00474ef0
// address: 0x474ef0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00474ef0(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ffa88);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 0x1b) = &PTR_FUN_004ffc48;
    param_1[1] = (int)&PTR_LAB_004ffc9c;
    *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_004ffcac;
    *(undefined ***)*param_1 = &PTR_LAB_004ffccc;
    if (param_1[0x1c] != 0) {
      FUN_00463058(param_1[0x1c],3);
    }
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xd;
    FUN_004a8edc(param_1,0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xd;
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

