// name: FUN_004247f0
// address: 0x4247f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004247f0(int param_1,undefined4 *param_2)

{
  LPRECT ptVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_78 [6];
  undefined4 local_60 [6];
  int local_48 [3];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint local_c [2];
  
  FUN_00467ba8(0x47ad84);
  if (*(int *)(param_1 + 0x1a) != 0) {
    local_34 = GetSystemMetrics(DAT_0047d518);
    local_38 = GetSystemMetrics(DAT_0047d520);
    local_3c = *(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe);
    local_48[2] = *(int *)(param_1 + 0x12) - *(int *)(param_1 + 10);
    local_48[0] = 0;
    local_48[1] = 0;
    if (*(int *)(param_1 + 0x1a) == 1) {
      local_20 = 8;
      FUN_0043c4b4(local_c,(uint *)&DAT_0048c674,'\x01');
      local_14 = local_14 + 2;
      local_20 = 0x14;
      FUN_00421f30(param_2,local_c,local_48,local_34,local_38,0xf00021);
      FUN_00421e18(param_2);
      local_14 = local_14 + -2;
      FUN_0043c5bc(local_c,2);
    }
    else if ((DAT_0047b01c & 1) == 0) {
      ptVar1 = (LPRECT)FUN_00430cac(local_78,local_48,*(int *)(param_1 + 0x1a),0);
      FUN_00430d5c(ptVar1,param_2);
    }
    else {
      if (*(int *)(param_1 + 0x1a) == 3) {
        uVar2 = 2;
      }
      else {
        uVar2 = 4;
      }
      ptVar1 = (LPRECT)FUN_00430d0c(local_60,local_48,uVar2,0xf);
      FUN_00430d5c(ptVar1,param_2);
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

