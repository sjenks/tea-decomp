// name: FUN_0044eb20
// address: 0x44eb20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044eb20(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0044eb68(param_1,param_2);
  if (iVar1 != -1) {
    puVar2 = FUN_004675a4((undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 9)),
                          (undefined4 *)((iVar1 + 1) * 4 + *(int *)(param_1 + 9)),
                          ((*(int *)(param_1 + 1) - iVar1) + -1) * 4);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
    return CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  return 0;
}

