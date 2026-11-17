// name: FUN_0040b8ac
// address: 0x40b8ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0040b8ac(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ebe84);
  *param_1 = &PTR_FUN_004eca60;
  param_1[0x801] = 0;
  param_1[0x804] = 1;
  *(undefined2 *)(param_1 + 0xb7e) = 0;
  param_1[0xb7f] = 0;
  param_1[0xbe7] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
    piVar3 = FUN_004cf7b0(param_1 + 0xbe5,uVar2,uVar2);
    param_1[0xbe7] = piVar3 + 3;
    FUN_004dc7d4((undefined4 *)param_1[0xbe7],*(undefined4 **)(param_2 + 8),uVar2);
  }
  else {
    param_1[0xbe7] = *(undefined4 *)(param_2 + 8);
    piVar3 = (int *)(param_1[0xbe7] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  FUN_004dc844(param_1 + 0xb80,0,0x194);
  param_1[0x802] = 0;
  param_1[0x803] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

