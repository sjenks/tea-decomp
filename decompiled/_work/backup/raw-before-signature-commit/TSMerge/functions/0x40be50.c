// name: FUN_0040be50
// address: 0x40be50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0040bece) */
/* WARNING: Removing unreachable block (ram,0x0040be8a) */
/* WARNING: Removing unreachable block (ram,0x0040beac) */
/* WARNING: Removing unreachable block (ram,0x0040bef0) */

int __cdecl FUN_0040be50(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x463464);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined **)(param_1 + 0x20) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined **)(param_1 + 0x30) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x40) = &DAT_00471d68;
  *in_FS_OFFSET = local_28;
  return param_1;
}

