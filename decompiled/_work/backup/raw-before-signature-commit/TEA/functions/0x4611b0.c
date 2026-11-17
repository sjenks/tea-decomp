// name: FUN_004611b0
// address: 0x4611b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004611b0(int *param_1,INT_PTR param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar1 = 0;
    do {
      iVar3 = *(int *)(param_1[0x18] + iVar2 * 4) + iVar1 * 0x38;
      if (*(int *)(*(int *)(iVar3 + 0x50) + -4) == 0) {
        *(undefined4 *)(iVar3 + 0x40) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_00415264(param_1,param_2);
  return;
}

