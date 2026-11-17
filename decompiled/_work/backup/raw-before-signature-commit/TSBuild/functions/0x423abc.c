// name: FUN_00423abc
// address: 0x423abc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl
FUN_00423abc(uint *param_1,LPCSTR param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,byte param_8,byte param_9,byte param_10,byte param_11,byte param_12,
            byte param_13,byte param_14,byte param_15)

{
  HFONT pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47aaec);
  FUN_00428420(param_1);
  pHVar1 = CreateFontA(param_3,param_4,param_5,param_6,param_7,(uint)param_9,(uint)param_10,
                       (uint)param_11,(uint)param_12,(uint)param_13,(uint)param_14,(uint)param_15,
                       (uint)param_8,param_2);
  *param_1 = (uint)pHVar1;
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

