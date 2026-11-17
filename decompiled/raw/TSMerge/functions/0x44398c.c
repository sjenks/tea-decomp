// name: FUN_0044398c
// address: 0x44398c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044398c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_004439d4(param_1,param_2);
  if (iVar1 != -1) {
    puVar2 = FUN_004559f4((undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 9)),
                          (undefined4 *)((iVar1 + 1) * 4 + *(int *)(param_1 + 9)),
                          ((*(int *)(param_1 + 1) - iVar1) + -1) * 4);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
    return CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  return 0;
}

