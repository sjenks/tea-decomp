// name: FUN_00473df0
// address: 0x473df0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00473ece) */
/* WARNING: Removing unreachable block (ram,0x00473e2a) */
/* WARNING: Removing unreachable block (ram,0x00473ef0) */
/* WARNING: Removing unreachable block (ram,0x00473e65) */
/* WARNING: Removing unreachable block (ram,0x00473ea2) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffcc : 0x00473eaa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_00473df0(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ff31c);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x40;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x40;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined **)(param_1 + 0x60) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *in_FS_OFFSET = local_28;
  return param_1;
}

