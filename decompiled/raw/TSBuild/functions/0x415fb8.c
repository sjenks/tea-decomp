// name: FUN_00415fb8
// address: 0x415fb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00416036) */
/* WARNING: Removing unreachable block (ram,0x00415ff2) */
/* WARNING: Removing unreachable block (ram,0x00416014) */
/* WARNING: Removing unreachable block (ram,0x00416058) */

int __cdecl FUN_00415fb8(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x476c58);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x28) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x38) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 100;
  *(undefined4 *)(param_1 + 0x48) = 10;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

