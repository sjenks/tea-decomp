// name: FUN_0045e756
// address: 0x45e756
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045e756(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044b944();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1 < 0x81) {
    iVar1 = FUN_00401140();
    if ((*(byte *)(iVar1 + 4) & 1) == 0) goto LAB_0045e783;
  }
  FUN_0045d628();
LAB_0045e783:
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  iVar1 = FUN_00401140();
  return *(int *)(iVar1 + 0x14);
}

