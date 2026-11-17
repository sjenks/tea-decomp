// name: FUN_0042a578
// address: 0x42a578
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042a578(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f275c);
  while (param_2 != 0) {
    FUN_0042a578(param_1,*(int *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = param_2;
    param_2 = iVar1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

