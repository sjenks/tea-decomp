// name: FUN_00465870
// address: 0x465870
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004658ae) */

int __cdecl FUN_00465870(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4883b4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00485bd8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

