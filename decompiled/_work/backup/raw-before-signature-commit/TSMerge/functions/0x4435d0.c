// name: FUN_004435d0
// address: 0x4435d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0044360e) */

DWORD * __cdecl FUN_004435d0(DWORD *param_1)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46f020);
  param_1[3] = 0;
  param_1[3] = (DWORD)&DAT_00471d68;
  DVar1 = GetLastError();
  *param_1 = DVar1;
  FUN_00443664(param_1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

