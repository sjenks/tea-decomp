// name: FUN_0043c510
// address: 0x43c510
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0043c510(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f4ea0);
  if (*(int **)(param_2 + 8) == (int *)0x0) {
    iVar1 = *(int *)(param_2 + 0xc);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  }
  else {
    iVar1 = FUN_00430678(*(int **)(param_2 + 8));
  }
  puVar2 = (uint *)FUN_0042baf8(*(int *)(param_2 + 4),iVar1);
  FUN_004cf628(param_1,puVar2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

