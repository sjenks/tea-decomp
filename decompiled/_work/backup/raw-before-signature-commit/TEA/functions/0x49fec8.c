// name: FUN_0049fec8
// address: 0x49fec8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049fec8(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint *param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  uint local_14 [2];
  uint local_c [2];
  
  FUN_004dce64(0x509a94);
  if ((param_3 & 3) != 0) {
    FUN_004ab84c(local_c,param_4,'\x01');
    FUN_0048d938(param_1,local_c);
    if ((param_3 & 2) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1],(param_2[2] - *param_2) + -1,1,0xf00021);
    }
    if ((param_3 & 1) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1] + 1,1,(param_2[3] - param_2[1]) + -2,0xf00021);
    }
    FUN_0048da64(param_1);
    FUN_004ab9b4(local_c,2);
  }
  if ((param_3 & 0xc) != 0) {
    FUN_004ab84c(local_14,param_5,'\x01');
    FUN_0048d938(param_1,local_14);
    if ((param_3 & 8) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[3] + -1,param_2[2] - *param_2,1,0xf00021);
    }
    if ((param_3 & 4) != 0) {
      PatBlt((HDC)*param_1,param_2[2] + -1,param_2[1],1,(param_2[3] - param_2[1]) + -1,0xf00021);
    }
    FUN_0048da64(param_1);
    FUN_004ab9b4(local_14,2);
  }
  *in_FS_OFFSET = local_38;
  return;
}

