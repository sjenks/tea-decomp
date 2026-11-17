// name: FUN_00490848
// address: 0x490848
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00490848(int *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iVar2;
  
  FUN_004dce64(0x50695c);
  FUN_0048fcec(param_1,param_3);
  *param_1 = (int)&PTR_FUN_00506a00;
  *(undefined1 *)(param_1 + 0x11) = param_4;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  iVar2 = 0;
  (**(code **)(*param_1 + 4))();
  *(ushort *)((int)param_1 + 0x42) = *(ushort *)((int)param_1 + 0x42) & 0xfffd;
  if (param_2 == 0) {
    iVar2 = DAT_00509ec0;
    iVar1 = GetSystemMetrics(DAT_00509ec0);
    param_2 = iVar1 * 2;
  }
  *(int *)((int)param_1 + 0x12) = param_2;
  *(int *)((int)param_1 + 0x16) = param_2;
  *in_FS_OFFSET = iVar2;
  return param_1;
}

