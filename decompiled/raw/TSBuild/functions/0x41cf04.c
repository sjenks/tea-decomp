// name: FUN_0041cf04
// address: 0x41cf04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0041cf04(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  FUN_00467ba8(0x4790b4);
  FUN_00428420(param_1);
  if (param_3 == (uint *)0x0) {
    puVar1 = FUN_0042ed5c(local_c,param_2,'\0');
    FUN_0041d0c0(param_1,param_2,puVar1);
    FUN_004284a8(local_c,0);
  }
  else {
    FUN_0041d0c0(param_1,param_2,param_3);
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

