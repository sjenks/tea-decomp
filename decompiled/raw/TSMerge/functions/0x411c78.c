// name: FUN_00411c78
// address: 0x411c78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_00411c78(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x465260);
  FUN_0041d2fc(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_0041cf04(*param_1,5);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

