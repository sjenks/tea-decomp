// name: FUN_0042ecec
// address: 0x42ecec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0042ecec(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47cb04);
  FUN_00428470(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_00428078(*param_1,4);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

