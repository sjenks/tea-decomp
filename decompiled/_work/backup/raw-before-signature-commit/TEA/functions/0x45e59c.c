// name: FUN_0045e59c
// address: 0x45e59c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0045e5f6) */

int __cdecl FUN_0045e59c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f9ef8);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_00513d64;
  FUN_00477ca0((undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x60) = 0x7fffffff;
  *(undefined4 *)(param_1 + 100) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x68) = 0x7fffffff;
  *in_FS_OFFSET = local_28;
  return param_1;
}

