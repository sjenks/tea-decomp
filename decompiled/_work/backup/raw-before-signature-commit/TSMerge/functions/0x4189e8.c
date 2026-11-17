// name: FUN_004189e8
// address: 0x4189e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004189e8(uint *param_1,LOGFONTA *param_2)

{
  HFONT pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x466d34);
  FUN_0041d2ac(param_1);
  pHVar1 = CreateFontIndirectA(param_2);
  *param_1 = (uint)pHVar1;
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

