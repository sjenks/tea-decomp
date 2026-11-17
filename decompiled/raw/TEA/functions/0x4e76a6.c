// name: FUN_004e76a6
// address: 0x4e76a6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004e76a6(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004cc734();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1 < 0x81) {
    iVar1 = FUN_00401140();
    if ((*(byte *)(iVar1 + 4) & 1) == 0) goto LAB_004e76d3;
  }
  FUN_004e6284();
LAB_004e76d3:
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  iVar1 = FUN_00401140();
  return *(int *)(iVar1 + 0x14);
}

