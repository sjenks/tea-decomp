// name: FUN_0041cd0c
// address: 0x41cd0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl
FUN_0041cd0c(uint *param_1,int param_2,int param_3,byte param_4,byte param_5,void *param_6)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x479038);
  FUN_00428420(param_1);
  pHVar1 = CreateBitmap(param_2,param_3,(uint)param_4,(uint)param_5,param_6);
  *param_1 = (uint)pHVar1;
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

