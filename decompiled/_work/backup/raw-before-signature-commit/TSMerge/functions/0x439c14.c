// name: FUN_00439c14
// address: 0x439c14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00439c14(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  iVar3 = FUN_00455f04(0x46d1fc);
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

