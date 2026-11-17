// name: FUN_004bc960
// address: 0x4bc960
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004bca25) */
/* WARNING: Removing unreachable block (ram,0x004bc9e1) */
/* WARNING: Removing unreachable block (ram,0x004bc99d) */
/* WARNING: Removing unreachable block (ram,0x004bc9bf) */
/* WARNING: Removing unreachable block (ram,0x004bca03) */
/* WARNING: Removing unreachable block (ram,0x004bca47) */

int __cdecl FUN_004bc960(int param_1,uint *param_2,char param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50f3e0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x28) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x38) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined **)(param_1 + 0x58) = &DAT_00513d64;
  FUN_004bbd80(param_1,param_2,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

