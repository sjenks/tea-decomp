// name: FUN_0041e688
// address: 0x41e688
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041e688(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4efd80);
  *param_1 = &PTR_FUN_004eac60;
  param_1[4] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x10) + -4);
    piVar3 = FUN_004cf7b0(param_1 + 2,uVar2,uVar2);
    param_1[4] = piVar3 + 3;
    FUN_004dc7d4((undefined4 *)param_1[4],*(undefined4 **)(param_2 + 0x10),uVar2);
  }
  else {
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    piVar3 = (int *)(param_1[4] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *param_1 = &PTR_FUN_004ecaac;
  *in_FS_OFFSET = local_28;
  return param_1;
}

