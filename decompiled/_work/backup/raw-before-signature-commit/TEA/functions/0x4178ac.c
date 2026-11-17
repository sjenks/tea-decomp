// name: FUN_004178ac
// address: 0x4178ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LOGBRUSH * __cdecl FUN_004178ac(LOGBRUSH *param_1,COLORREF param_2)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ee054);
  param_1->lbStyle = 0;
  param_1->lbColor = param_2;
  puVar1 = (uint *)FUN_004cc0f0();
  if (puVar1 != (uint *)0x0) {
    FUN_004ab954(puVar1,param_1);
  }
  param_1[1].lbStyle = (UINT)puVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

