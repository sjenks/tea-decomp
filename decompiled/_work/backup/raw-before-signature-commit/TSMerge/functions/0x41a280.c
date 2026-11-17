// name: FUN_0041a280
// address: 0x41a280
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0041a280(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5,
            int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  tagTEXTMETRICA local_64;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  uint *local_8;
  
  FUN_00455f04(0x4672f0);
  local_1c = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5d;
    *(int *)((int)param_1 + 0x5d) = (int)param_1 + 0x51;
    *(int *)((int)param_1 + 0x61) = (int)param_1 + 0x55;
    param_1[4] = (int)param_1 + 0x51;
    param_1[5] = (int)param_1 + 0x55;
    *(undefined4 *)((int)param_1 + 0x4d) = 0;
    *(undefined4 *)((int)param_1 + 0x59) = 0;
    *(undefined ***)((int)param_1 + 0x51) = &PTR_FUN_00462234;
    *(undefined ***)((int)param_1 + 0x55) = &PTR_FUN_00462224;
    local_10 = local_10 + 1;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_0042ab84((int *)((int)param_1 + 0x5d),1);
    local_10 = local_10 + 1;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  FUN_00419dc8(param_1 + 1);
  local_10 = local_10 + 1;
  param_1[6] = (int)&PTR_FUN_00467580;
  param_1[1] = (int)&PTR_LAB_004675f4;
  *(undefined ***)param_1[4] = &PTR_LAB_00467614;
  *(undefined ***)param_1[5] = &PTR_LAB_00467620;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046762c;
  param_1[10] = 1;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = *(undefined1 *)((int)param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x49) = 0;
  FUN_0042ac60(*param_1,param_3,(uint *)0x0,param_6);
  FUN_0042d484(*param_1,0,0x2000000,0);
  bVar1 = FUN_004109c0();
  if (!bVar1) {
    FUN_0042d484(*param_1,0,0x800000,0);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  if ((param_5 == (uint *)0x0) &&
     (param_5 = (uint *)FUN_0044b300(), local_8 = param_5, param_5 != (uint *)0x0)) {
    local_1c = 0x20;
    FUN_0041a0b0(param_5,6,'\0',0);
    local_1c = 0x14;
    param_5 = local_8;
  }
  param_1[7] = (int)param_5;
  *(undefined1 *)((int)param_1 + 0x35) = param_4;
  *(bool *)((int)param_1 + 0x31) = *(char *)((int)param_1 + 0x35) != '\0';
  *(bool *)((int)param_1 + 0x32) = *(char *)((int)param_1 + 0x35) != '\x01';
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  *(undefined1 *)((int)param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  FUN_00418a84(param_1[7],&local_64);
  *(char *)(param_1 + 0xc) = (char)local_64.tmHeight + (char)local_64.tmExternalLeading;
  *(uint *)(*param_1 + 0x2c) = (uint)*(byte *)(param_1 + 0xc);
  if ((*(byte *)(*param_1 + 0x1a) & 0x80) != 0) {
    iVar2 = GetSystemMetrics(DAT_00469744);
    *(int *)(*param_1 + 0x2c) = *(int *)(*param_1 + 0x2c) + iVar2 * 2;
  }
  *(undefined4 *)(*param_1 + 0x5c) = DAT_00476bf0;
  *(undefined4 *)((int)param_1 + 0x37) = 0;
  *(undefined4 *)((int)param_1 + 0x3b) = 0;
  *(undefined1 *)((int)param_1 + 0x3f) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 4;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

