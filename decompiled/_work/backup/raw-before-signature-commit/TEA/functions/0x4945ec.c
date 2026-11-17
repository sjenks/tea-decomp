// name: FUN_004945ec
// address: 0x4945ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004945ec(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  uint *in_stack_00000018;
  undefined4 local_28;
  
  FUN_004dce64(0x50740c);
  param_1[2] = 0;
  param_1[3] = 0;
  bVar1 = FUN_00487180();
  if (!bVar1) {
    FUN_0048739c();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  FUN_0048c12c(in_stack_00000018);
  FUN_00487178();
  iVar2 = FUN_00486f84();
  *param_1 = iVar2;
  FUN_004946f4(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

