// name: FUN_00422858
// address: 0x422858
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00422858(int *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 *local_c [2];
  
  FUN_00455f04(0x468a50);
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    FUN_0042027c((int *)local_c,param_3);
    uVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (uVar1 == param_3) {
      FUN_004559d0(param_2,local_c[0],param_3);
    }
    else {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    FUN_0042033c(local_c,0);
  }
  *in_FS_OFFSET = local_30;
  return;
}

