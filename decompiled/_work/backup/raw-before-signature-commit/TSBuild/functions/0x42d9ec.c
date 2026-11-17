// name: FUN_0042d9ec
// address: 0x42d9ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042d9ec(int *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 *local_c [2];
  
  FUN_00467ba8(0x47c82c);
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    FUN_0042b3f0((int *)local_c,param_3);
    uVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (uVar1 == param_3) {
      FUN_00467580(param_2,local_c[0],param_3);
    }
    else {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    FUN_0042b4b0(local_c,0);
  }
  *in_FS_OFFSET = local_30;
  return;
}

