// name: FUN_00423b5c
// address: 0x423b5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_00423b5c(uint *param_1,LOGFONTA *param_2)

{
  HFONT pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47ab10);
  FUN_00428420(param_1);
  pHVar1 = CreateFontIndirectA(param_2);
  *param_1 = (uint)pHVar1;
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

