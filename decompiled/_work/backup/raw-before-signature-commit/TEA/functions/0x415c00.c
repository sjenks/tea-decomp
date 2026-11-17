// name: FUN_00415c00
// address: 0x415c00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00415c00(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  undefined4 local_3b8;
  int local_394 [3];
  int local_388;
  
  FUN_004dce64(0x4edae4);
  (**(code **)(param_1[3] + 0xa4))();
  FUN_00460220(local_394,0,*param_1,param_1[0xe]);
  piVar2 = local_394;
  uVar1 = (**(code **)(local_388 + 0x14))();
  (**(code **)(param_1[3] + 0xa4))(uVar1,param_1[3],piVar2,param_1,1);
  FUN_00460e4c(local_394,2);
  *in_FS_OFFSET = local_3b8;
  return;
}

