// name: FUN_00408b6c
// address: 0x408b6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00408baa) */
/* WARNING: Removing unreachable block (ram,0x00408c01) */
/* WARNING: Removing unreachable block (ram,0x00408c10) */
/* WARNING: Removing unreachable block (ram,0x00408c09) */

undefined1 __cdecl FUN_00408b6c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_004dce64(0x4eb880);
  uVar1 = (**(code **)(**(int **)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x1c))();
  if (DAT_00513d58 == -1) {
    FUN_004cc0bc();
  }
  *in_FS_OFFSET = local_38;
  return uVar1;
}

