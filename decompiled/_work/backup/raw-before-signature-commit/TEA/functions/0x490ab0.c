// name: FUN_00490ab0
// address: 0x490ab0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00490ab0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 local_28;
  
  FUN_004dce64(0x506980);
  uVar4 = 1;
  iVar1 = GetSystemMetrics(DAT_00509e68);
  iVar2 = GetSystemMetrics(DAT_00509e60);
  if (iVar2 < iVar1) {
    piVar3 = &DAT_00509e68;
  }
  else {
    piVar3 = &DAT_00509e60;
  }
  iVar1 = GetSystemMetrics(*piVar3);
  FUN_00490848(param_1,iVar1,param_2,uVar4);
  *param_1 = (int)&PTR_FUN_005069a0;
  (**(code **)(*param_1 + 4))();
  *in_FS_OFFSET = local_28;
  return param_1;
}

