// name: FUN_004593e0
// address: 0x4593e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004593e0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x485c30);
  iVar1 = FUN_00459448(param_2);
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = FUN_0045943c(iVar1);
  *(int *)(param_1 + 0xc) = iVar1;
  iVar1 = FUN_004594a8(param_2);
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

