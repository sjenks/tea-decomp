// name: FUN_00411ee0
// address: 0x411ee0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_00411ee0(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  FUN_00455f04(0x465300);
  FUN_0041d2ac(param_1);
  if (param_3 == (uint *)0x0) {
    puVar1 = FUN_00423bc8(local_c,param_2,'\0');
    FUN_0041209c(param_1,param_2,puVar1);
    FUN_0041d334(local_c,0);
  }
  else {
    FUN_0041209c(param_1,param_2,param_3);
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

