// name: FUN_00406600
// address: 0x406600
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0040663e) */
/* WARNING: Removing unreachable block (ram,0x00406695) */
/* WARNING: Removing unreachable block (ram,0x004066a4) */
/* WARNING: Removing unreachable block (ram,0x0040669d) */

undefined1 __cdecl FUN_00406600(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_0041f3fc(0x42b950);
  uVar1 = (**(code **)(**(int **)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x1c))();
  if (DAT_0042fab4 == -1) {
    FUN_00414f78();
  }
  *in_FS_OFFSET = local_38;
  return uVar1;
}

