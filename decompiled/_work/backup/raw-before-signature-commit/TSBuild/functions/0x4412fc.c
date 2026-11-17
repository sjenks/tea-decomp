// name: FUN_004412fc
// address: 0x4412fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl
FUN_004412fc(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4801b8);
  FUN_00450b7c(param_1,param_2,param_3,0,param_4,param_5,0,param_6,0);
  param_1[10] = param_8;
  param_1[0xc] = param_7;
  *in_FS_OFFSET = local_28;
  return param_1;
}

