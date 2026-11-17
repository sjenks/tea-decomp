// name: FUN_0044aeec
// address: 0x44aeec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_0044aeec(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  
  FUN_00455f04(0x470670);
  *param_1 = &PTR_FUN_00461fe8;
  param_1[4] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x10) + -4);
    piVar3 = FUN_0044d2a4(param_1 + 2,uVar2,uVar2);
    param_1[4] = piVar3 + 3;
    FUN_004559d0((undefined4 *)param_1[4],*(undefined4 **)(param_2 + 0x10),uVar2);
  }
  else {
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    piVar3 = (int *)(param_1[4] + -0xc);
    if (piVar3 != &DAT_00471d5c) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *param_1 = &PTR_FUN_00461ffc;
  *in_FS_OFFSET = uStack_28;
  return param_1;
}

