// name: FUN_00488088
// address: 0x488088
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00488088(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = *(uint *)(param_1 + 8);
      uVar1 < (uint)(*(int *)(param_1 + 4) * 8 + *(int *)(param_1 + 8)); uVar1 = uVar1 + 8) {
    if (*(int *)(uVar1 + 4) != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

