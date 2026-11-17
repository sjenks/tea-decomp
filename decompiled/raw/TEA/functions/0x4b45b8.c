// name: FUN_004b45b8
// address: 0x4b45b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b45b8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  uVar2 = FUN_004dce64(0x50d8c8);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    piVar3 = (int *)FUN_004b5d60((undefined4 *)(param_1 + 0x14),0);
    uVar2 = 0;
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x30))();
      if (cVar1 == '\0') {
        *in_FS_OFFSET = local_30;
        return 0;
      }
      uVar2 = (**(code **)(*piVar3 + 0x10))();
      if ((char)uVar2 == '\0') {
        (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
        *in_FS_OFFSET = local_30;
        return 0;
      }
      if (piVar3 != (int *)0x0) {
        uVar2 = (**(code **)*piVar3)();
      }
    }
  }
  *in_FS_OFFSET = local_30;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

