// name: FUN_00423c2c
// address: 0x423c2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00423c2c(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  do {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + *(int *)(*param_1 + 0x40 + iVar1 * 0x38);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    local_8 = local_8 + 1;
    param_1 = param_1 + 1;
  } while (local_8 < 4);
  return iVar2;
}

