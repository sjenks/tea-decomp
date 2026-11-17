// name: FUN_004885cc
// address: 0x4885cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004885cc(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  FUN_004dce64(0x504984);
  FUN_00493fdc(param_1);
  if (param_3 == (uint *)0x0) {
    puVar1 = FUN_0049b104(local_c,param_2,'\0');
    FUN_00488788(param_1,param_2,puVar1);
    FUN_00494064(local_c,0);
  }
  else {
    FUN_00488788(param_1,param_2,param_3);
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

