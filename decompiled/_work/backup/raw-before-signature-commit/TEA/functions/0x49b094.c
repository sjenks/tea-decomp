// name: FUN_0049b094
// address: 0x49b094
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0049b094(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508920);
  FUN_0049402c(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_00493c34(*param_1,4);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

