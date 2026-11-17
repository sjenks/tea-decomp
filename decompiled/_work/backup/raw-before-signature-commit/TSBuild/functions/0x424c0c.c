// name: FUN_00424c0c
// address: 0x424c0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00424c0c(int *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iVar2;
  
  FUN_00467ba8(0x47adb4);
  FUN_004240d0(param_1,param_3);
  *param_1 = (int)&PTR_FUN_0047add4;
  *(undefined1 *)(param_1 + 0x11) = param_4;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  iVar2 = 0;
  (**(code **)(*param_1 + 4))();
  *(ushort *)((int)param_1 + 0x42) = *(ushort *)((int)param_1 + 0x42) & 0xfffd;
  if (param_2 == 0) {
    iVar2 = DAT_0047d5f0;
    iVar1 = GetSystemMetrics(DAT_0047d5f0);
    param_2 = iVar1 * 2;
  }
  *(int *)((int)param_1 + 0x12) = param_2;
  *(int *)((int)param_1 + 0x16) = param_2;
  *in_FS_OFFSET = iVar2;
  return param_1;
}

