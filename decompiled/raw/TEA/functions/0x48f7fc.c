// name: FUN_0048f7fc
// address: 0x48f7fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0048f7fc(uint *param_1,LOGFONTA *param_2)

{
  HFONT pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5066b8);
  FUN_00493fdc(param_1);
  pHVar1 = CreateFontIndirectA(param_2);
  *param_1 = (uint)pHVar1;
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

