// name: FUN_00419a98
// address: 0x419a98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00419a98(int *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iVar2;
  
  FUN_00455f04(0x466fd8);
  FUN_00418f5c(param_1,param_3);
  *param_1 = (int)&PTR_FUN_00466ff8;
  *(undefined1 *)(param_1 + 0x11) = param_4;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  iVar2 = 0;
  (**(code **)(*param_1 + 4))();
  *(ushort *)((int)param_1 + 0x42) = *(ushort *)((int)param_1 + 0x42) & 0xfffd;
  if (param_2 == 0) {
    iVar2 = DAT_00469814;
    iVar1 = GetSystemMetrics(DAT_00469814);
    param_2 = iVar1 * 2;
  }
  *(int *)((int)param_1 + 0x12) = param_2;
  *(int *)((int)param_1 + 0x16) = param_2;
  *in_FS_OFFSET = iVar2;
  return param_1;
}

