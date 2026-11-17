// name: FUN_0049da2c
// address: 0x49da2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0049da2c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x5e);
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (iVar1 == param_2) {
        return 0;
      }
      iVar1 = *(int *)(iVar1 + 0x3e);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

