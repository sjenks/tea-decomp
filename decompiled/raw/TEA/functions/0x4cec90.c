// name: FUN_004cec90
// address: 0x4cec90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004cec90(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x513dbc);
  iVar1 = FUN_004cecf8(param_2);
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = FUN_004cecec(iVar1);
  *(int *)(param_1 + 0xc) = iVar1;
  iVar1 = FUN_004ced58(param_2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x18;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

