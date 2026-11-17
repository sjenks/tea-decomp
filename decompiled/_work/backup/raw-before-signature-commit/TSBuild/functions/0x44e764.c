// name: FUN_0044e764
// address: 0x44e764
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0044e7a2) */

DWORD * __cdecl FUN_0044e764(DWORD *param_1)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x482dfc);
  param_1[3] = 0;
  param_1[3] = (DWORD)&DAT_00485bd8;
  DVar1 = GetLastError();
  *param_1 = DVar1;
  FUN_0044e7f8(param_1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

