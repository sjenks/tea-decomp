// name: FUN_004311cc
// address: 0x4311cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004311cc(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint *param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  uint local_14 [2];
  uint local_c [2];
  
  FUN_00467ba8(0x47d1c4);
  if ((param_3 & 3) != 0) {
    FUN_0043c4b4(local_c,param_4,'\x01');
    FUN_00421cec(param_1,local_c);
    if ((param_3 & 2) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1],(param_2[2] - *param_2) + -1,1,0xf00021);
    }
    if ((param_3 & 1) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1] + 1,1,(param_2[3] - param_2[1]) + -2,0xf00021);
    }
    FUN_00421e18(param_1);
    FUN_0043c5bc(local_c,2);
  }
  if ((param_3 & 0xc) != 0) {
    FUN_0043c4b4(local_14,param_5,'\x01');
    FUN_00421cec(param_1,local_14);
    if ((param_3 & 8) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[3] + -1,param_2[2] - *param_2,1,0xf00021);
    }
    if ((param_3 & 4) != 0) {
      PatBlt((HDC)*param_1,param_2[2] + -1,param_2[1],1,(param_2[3] - param_2[1]) + -1,0xf00021);
    }
    FUN_00421e18(param_1);
    FUN_0043c5bc(local_14,2);
  }
  *in_FS_OFFSET = local_38;
  return;
}

