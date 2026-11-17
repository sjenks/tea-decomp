// name: FUN_004ab954
// address: 0x4ab954
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004ab954(uint *param_1,LOGBRUSH *param_2)

{
  HBRUSH pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50bf20);
  FUN_00493fdc(param_1);
  pHVar1 = CreateBrushIndirect(param_2);
  *param_1 = (uint)pHVar1;
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

