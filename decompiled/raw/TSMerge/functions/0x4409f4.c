// name: FUN_004409f4
// address: 0x4409f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00440ab9) */
/* WARNING: Removing unreachable block (ram,0x00440a75) */
/* WARNING: Removing unreachable block (ram,0x00440a31) */
/* WARNING: Removing unreachable block (ram,0x00440a53) */
/* WARNING: Removing unreachable block (ram,0x00440a97) */
/* WARNING: Removing unreachable block (ram,0x00440adb) */

int __cdecl FUN_004409f4(int param_1,uint *param_2,char param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46e64c);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x28) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x38) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined **)(param_1 + 0x58) = &DAT_00471d68;
  FUN_0043fe14(param_1,param_2,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

