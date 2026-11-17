// name: FUN_0047ad78
// address: 0x47ad78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047ad78(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x500f0c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_00501188;
    *(undefined ***)param_1[1] = &PTR_LAB_00501250;
    *(undefined ***)param_1[2] = &PTR_LAB_0050125c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00501268;
    if (param_1[0x22] != 0) {
      (*(code *)**(undefined4 **)(param_1[0x22] + 0xc))();
    }
    FUN_004ac5f0(param_1 + 0x88,2);
    FUN_00417b74(param_1 + 0x56,2);
    FUN_00417b74(param_1 + 0x24,2);
    FUN_0040b4f0(param_1 + 0x18,param_1[0x19],param_1[0x1a]);
    FUN_004cc0bc();
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x270;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x270;
    FUN_00413f3c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x270;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x270;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0xb8,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0xb6,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

