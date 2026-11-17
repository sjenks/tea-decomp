// name: FUN_00417780
// address: 0x417780
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00417780(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    local_14 = *(int *)(param_1[4] + 0x20);
    local_c = *(int *)(param_1[4] + 0x20) + *(int *)(param_1[4] + 0x28);
  }
  else if (iVar1 == 1) {
    uVar2 = *(int *)(param_2 + 8) + 1;
    local_14 = (int)uVar2 >> 1;
    if (local_14 < 0) {
      local_14 = local_14 + (uint)((uVar2 & 1) != 0);
    }
    local_14 = local_14 - param_1[2];
    local_c = *(int *)(param_1[4] + 0x28) + local_14;
  }
  else if (iVar1 == 2) {
    local_14 = *(int *)(param_2 + 8) - param_1[2];
    local_c = *(int *)(param_1[4] + 0x28) + local_14;
  }
  else if (iVar1 == 3) {
    local_14 = *(int *)(param_1[4] + 0x20);
    local_c = *(int *)(param_2 + 8) - param_1[2];
  }
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    local_10 = *(int *)(param_1[4] + 0x24);
    local_8 = local_10 + *(int *)(param_1[4] + 0x2c);
  }
  else if (iVar1 == 1) {
    uVar2 = *(int *)(param_2 + 0xc) + 1;
    local_10 = (int)uVar2 >> 1;
    if (local_10 < 0) {
      local_10 = local_10 + (uint)((uVar2 & 1) != 0);
    }
    local_10 = local_10 - param_1[3];
    local_8 = *(int *)(param_1[4] + 0x2c) + local_10;
  }
  else if (iVar1 == 2) {
    local_10 = *(int *)(param_2 + 0xc) - param_1[3];
    local_8 = *(int *)(param_1[4] + 0x2c) + local_10;
  }
  else if (iVar1 == 3) {
    local_10 = *(int *)(param_1[4] + 0x24);
    local_8 = *(int *)(param_2 + 0xc) - param_1[3];
  }
  FUN_004a7aa0(param_1[4],(HWND)0x0,local_14,local_10,local_c - local_14,local_8 - local_10,0x21c);
  return;
}

