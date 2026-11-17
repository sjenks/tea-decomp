// name: FUN_004b5734
// address: 0x4b5734
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b5734(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  iVar3 = FUN_004dce64(0x50df18);
  if (*(int *)(param_1 + 0x22) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x22);
    piVar1 = puVar2 + 7;
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (puVar2 != (undefined4 *)0x0)) {
      iVar3 = (**(code **)*puVar2)();
    }
  }
  if (param_2 != 0) {
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    iVar3 = param_2;
  }
  *(int *)(param_1 + 0x22) = param_2;
  *in_FS_OFFSET = local_30;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

