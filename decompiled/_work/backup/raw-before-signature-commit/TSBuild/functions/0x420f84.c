// name: FUN_00420f84
// address: 0x420f84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00420f84(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5,
            int param_6)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x479fd4);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5d;
    *(int *)((int)param_1 + 0x5d) = (int)param_1 + 0x51;
    *(int *)((int)param_1 + 0x61) = (int)param_1 + 0x55;
    param_1[4] = (int)param_1 + 0x51;
    param_1[5] = (int)param_1 + 0x55;
    *(undefined4 *)((int)param_1 + 0x4d) = 0;
    *(undefined4 *)((int)param_1 + 0x59) = 0;
    *(undefined ***)((int)param_1 + 0x51) = &PTR_FUN_00474f84;
    *(undefined ***)((int)param_1 + 0x55) = &PTR_FUN_00474f74;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_00435d18((int *)((int)param_1 + 0x5d),1);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  FUN_004253f4(param_1,1,param_3,param_4,param_5,param_6);
  param_1[6] = (int)&PTR_FUN_0047a018;
  param_1[1] = (int)&PTR_LAB_0047a08c;
  *(undefined ***)param_1[4] = &PTR_LAB_0047a0ac;
  *(undefined ***)param_1[5] = &PTR_LAB_0047a0b8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047a0c4;
  param_1[10] = 2;
  if (*(char *)((int)param_1 + 0x35) == '\0') {
    iVar1 = GetSystemMetrics(DAT_0047d528);
    *(char *)((int)param_1 + 0x2d) = (char)iVar1;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
    iVar1 = GetSystemMetrics(DAT_0047d530);
    *(char *)((int)param_1 + 0x2f) = (char)iVar1;
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2f);
  }
  else {
    iVar1 = GetSystemMetrics(DAT_0047d528);
    *(char *)((int)param_1 + 0x2d) = (char)iVar1;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
    iVar1 = GetSystemMetrics(DAT_0047d530);
    *(char *)((int)param_1 + 0x2f) = (char)iVar1;
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2f);
  }
  *(undefined1 *)((int)param_1 + 0x3f) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

