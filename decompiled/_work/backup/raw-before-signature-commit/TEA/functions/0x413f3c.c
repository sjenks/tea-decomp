// name: FUN_00413f3c
// address: 0x413f3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00413f3c(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_004dce64(0x4ed630);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004f0c20;
    *(undefined ***)param_1[1] = &PTR_LAB_004f0ce8;
    *(undefined ***)param_1[2] = &PTR_LAB_004f0cf4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0d00;
    if ((uint *)param_1[0xf] != (uint *)0x0) {
      FUN_00494064((uint *)param_1[0xf],0);
      FUN_004cc0bc();
    }
    uVar2 = 0;
    while( true ) {
      iVar1 = param_1[8] - param_1[7];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 3;
      }
      if ((uint)(iVar1 >> 2) <= uVar2) break;
      FUN_004cc0bc();
      uVar2 = uVar2 + 1;
    }
    if (param_1[0x16] != 0) {
      (*(code *)**(undefined4 **)(param_1[0x16] + 0xc))();
    }
    FUN_00402f68(param_1 + 6,param_1[7],param_1[8]);
    FUN_004cc0bc();
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x48;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x48;
    FUN_004b0280(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x48;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x48;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x1c,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x1a,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

