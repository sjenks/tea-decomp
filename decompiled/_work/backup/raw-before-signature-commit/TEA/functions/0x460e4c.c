// name: FUN_00460e4c
// address: 0x460e4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00460e4c(int *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_004dce64(0x4fae24);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004fb100;
    *(undefined ***)param_1[1] = &PTR_LAB_004fb1c8;
    *(undefined ***)param_1[2] = &PTR_LAB_004fb1d4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fb1e0;
    iVar2 = 0;
    do {
      iVar1 = param_1[iVar2 + 0x19];
      if (iVar1 != 0) {
        FUN_0041b094((int *)(iVar1 + 0x18c),2);
        FUN_0041b094((int *)(iVar1 + 0xd0),2);
        FUN_0041851c((int *)(iVar1 + 8),2);
        FUN_004cc0bc();
      }
      iVar1 = param_1[iVar2 + 0x25];
      if (iVar1 != 0) {
        FUN_0041bfe0((int *)(iVar1 + 0x310),2);
        FUN_00417b74((int *)(iVar1 + 0x248),2);
        FUN_0041b094((int *)(iVar1 + 0x18c),2);
        FUN_0041b094((int *)(iVar1 + 0xd0),2);
        FUN_0041851c((int *)(iVar1 + 8),2);
        FUN_004cc0bc();
      }
      iVar1 = param_1[iVar2 + 0x1d];
      if (iVar1 != 0) {
        FUN_0041b094((int *)(iVar1 + 0x248),2);
        FUN_0041b094((int *)(iVar1 + 0x18c),2);
        FUN_0041b094((int *)(iVar1 + 0xd0),2);
        FUN_0041851c((int *)(iVar1 + 8),2);
        FUN_004cc0bc();
      }
      iVar1 = param_1[iVar2 + 0x21];
      if (iVar1 != 0) {
        FUN_0041b094((int *)(iVar1 + 0x248),2);
        FUN_0041b094((int *)(iVar1 + 0x18c),2);
        FUN_0041b094((int *)(iVar1 + 0xd0),2);
        FUN_0041851c((int *)(iVar1 + 8),2);
        FUN_004cc0bc();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    FUN_00417b74(param_1 + 0x8c,2);
    FUN_0041b094(param_1 + 0x5c,2);
    FUN_00417b74(param_1 + 0x2a,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x298;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x298;
    FUN_00413f3c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x298;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x298;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0xc2,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0xc0,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_38;
  return;
}

