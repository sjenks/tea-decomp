// name: FUN_004173c0
// address: 0x4173c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004173c0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4edfa8);
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  if (*param_1 == 3) {
    param_1[2] = *(int *)(param_2 + 8) - (*(int *)(param_3 + 0x20) + *(int *)(param_3 + 0x28));
  }
  else if (*param_1 == 2) {
    param_1[2] = *(int *)(param_2 + 8) - *(int *)(param_1[4] + 0x20);
  }
  else if (*param_1 == 1) {
    uVar1 = *(int *)(param_2 + 8) + 1;
    iVar2 = (int)uVar1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
    }
    param_1[2] = iVar2 - *(int *)(param_1[4] + 0x20);
  }
  if (param_1[1] == 3) {
    param_1[3] = *(int *)(param_2 + 0xc) -
                 (*(int *)(param_1[4] + 0x24) + *(int *)(param_1[4] + 0x2c));
  }
  else if (param_1[1] == 2) {
    param_1[3] = *(int *)(param_2 + 0xc) - *(int *)(param_1[4] + 0x24);
  }
  else if (param_1[1] == 1) {
    uVar1 = *(int *)(param_2 + 0xc) + 1;
    iVar2 = (int)uVar1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
    }
    param_1[3] = iVar2 - *(int *)(param_1[4] + 0x24);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

