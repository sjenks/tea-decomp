// name: FUN_00412140
// address: 0x412140
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00412140(uint *param_1,uint *param_2)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 local_d0 [4];
  int local_cc;
  int local_c8;
  short local_c0;
  short local_be;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  HDC local_7c [10];
  HDC local_54 [10];
  HDC local_2c [10];
  
  FUN_00455f04(0x4653e0);
  local_90 = 8;
  FUN_0042073c((int *)local_2c);
  local_84 = local_84 + 3;
  local_90 = 0x20;
  FUN_0042073c((int *)local_54);
  local_84 = local_84 + 3;
  local_90 = 0x14;
  GetObjectA((HANDLE)*param_2,0x18,local_d0);
  if ((local_c0 == 1) && (local_be == 1)) {
    pHVar1 = CreateBitmap(local_cc,local_c8,1,1,(void *)0x0);
    *param_1 = (uint)pHVar1;
  }
  else {
    local_90 = 0x2c;
    FUN_0042e298((int *)local_7c);
    local_84 = local_84 + 3;
    local_90 = 0x38;
    pHVar1 = CreateCompatibleBitmap(local_7c[0],local_cc,local_c8);
    *param_1 = (uint)pHVar1;
    local_84 = local_84 + -3;
    FUN_0042e214((int *)local_7c,0);
    local_90 = 0x14;
  }
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,5);
  FUN_004208a4(local_2c,param_2);
  FUN_004208a4(local_54,param_1);
  local_a8 = 0;
  local_a4 = 0;
  local_b0 = local_cc;
  local_ac = local_c8;
  local_b8 = 0;
  local_b4 = 0;
  BitBlt(local_54[0],0,0,local_cc,local_c8,local_2c[0],0,0,0xcc0020);
  local_84 = local_84 + -3;
  FUN_00420914((int *)local_54,2);
  local_84 = local_84 + -3;
  FUN_00420914((int *)local_2c,2);
  *in_FS_OFFSET = local_a0;
  return;
}

