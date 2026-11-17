// name: FUN_004bb37c
// address: 0x4bb37c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004bb37c(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  uVar1 = FUN_004dce64(0x50f0a8);
  if (((*(int *)(param_1 + 4) != 0) && (*(char *)(param_1 + 8) != '\0')) &&
     (uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(), (char)uVar1 == '\0')) {
    *in_FS_OFFSET = local_30;
    return 0;
  }
  if ((*(int *)(param_1 + 4) != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
    uVar1 = (**(code **)**(undefined4 **)(param_1 + 4))();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *in_FS_OFFSET = local_30;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

