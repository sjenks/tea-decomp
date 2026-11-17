// name: FUN_0041ee7c
// address: 0x41ee7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041ee7c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  HDC local_2c [10];
  
  iVar1 = FUN_00467ba8(0x479588);
  if (param_2 < *(int *)(param_1 + 0x25)) {
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x25) = 0;
    }
    else if (param_2 < *(int *)(param_1 + 0x25)) {
      iVar1 = *(int *)(param_1 + 0x25) + -1;
      if (param_2 < iVar1) {
        FUN_0041ec8c(&local_60,param_1,param_2,0);
        local_58 = local_60;
        local_54 = local_5c;
        local_40 = 8;
        FUN_0042b980((int *)local_2c,*(uint **)(param_1 + 4));
        local_34 = local_34 + 3;
        local_40 = 0x14;
        BitBlt(local_2c[0],local_58,local_54,
               ((*(int *)(param_1 + 0x25) - param_2) + -1) * *(int *)(param_1 + 0x15),
               *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29),local_2c[0],
               local_58 + *(int *)(param_1 + 0x15),local_54,0xcc0020);
        local_34 = local_34 + -3;
        iVar1 = FUN_0042ba88((int *)local_2c,2);
      }
      *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + -1;
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    *in_FS_OFFSET = local_50;
  }
  else {
    uVar2 = 0;
    *in_FS_OFFSET = local_50;
  }
  return uVar2;
}

