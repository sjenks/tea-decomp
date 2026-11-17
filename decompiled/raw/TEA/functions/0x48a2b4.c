// name: FUN_0048a2b4
// address: 0x48a2b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl
FUN_0048a2b4(uint *param_1,uint *param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_78;
  HDC local_54 [10];
  HDC local_2c [10];
  
  FUN_004dce64(0x504ea4);
  FUN_00497828((int *)local_2c,param_2);
  FUN_00497828((int *)local_54,param_1);
  BVar1 = BitBlt(local_54[0],*param_3,param_3[1],(*param_3 + *param_4) - *param_3,
                 (param_3[1] + param_4[1]) - param_3[1],local_2c[0],param_5,param_6,0xcc0020);
  uVar2 = (uint)(BVar1 != 0);
  FUN_00497930((int *)local_54,2);
  FUN_00497930((int *)local_2c,2);
  *in_FS_OFFSET = local_78;
  return uVar2;
}

