// name: FUN_004c0384
// address: 0x4c0384
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004c03c2) */

DWORD * __cdecl FUN_004c0384(DWORD *param_1)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5101b0);
  param_1[3] = 0;
  param_1[3] = (DWORD)&DAT_00513d64;
  DVar1 = GetLastError();
  *param_1 = DVar1;
  FUN_004c0418(param_1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

