// name: FUN_004339a0
// address: 0x4339a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004339a0(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  undefined4 local_39;
  int local_35;
  byte local_31;
  byte local_30;
  byte local_2f;
  undefined4 local_2e;
  undefined4 local_2a;
  byte local_26;
  byte local_25;
  byte local_24;
  undefined4 local_23;
  int local_1f;
  byte local_1b;
  byte local_1a;
  byte local_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_0041efe0(&local_40);
  FUN_0041e0e8((int)(param_1 + 1),param_3,&local_40);
  if (*(int *)(*param_1 + 0x15) == param_3) {
    local_8 = local_1f;
    if ((*(byte *)(*(int *)(*param_1 + 0x15) + 0x1a) & 0x80) == 0) {
      bVar1 = 2;
    }
    else {
      bVar1 = 4;
    }
    local_1f = param_2;
    local_1b = local_1b & 0xf0 | 3;
    local_1a = bVar1 | local_1a & 0xf0;
    local_19 = local_19 & 0xf0 | 1;
    local_18 = 0;
  }
  else {
    local_8 = local_35;
    local_35 = param_2;
    local_31 = local_31 & 0xf0 | 3;
    local_30 = local_30 & 0xf0 | 4;
    local_2f = local_2f & 0xf0 | 1;
    local_2e = 0;
  }
  FUN_0041e018((int)(param_1 + 1),param_3,&local_40);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) == 0;
  if (local_8 == 0) {
    local_c = 3;
  }
  else {
    local_c = 1;
  }
  if (bVar2) {
    local_10 = 2;
  }
  else {
    local_10 = 4;
  }
  local_35 = local_8;
  local_31 = local_31 & 0xf0 | 3;
  local_30 = (byte)local_10 | local_30 & 0xf0;
  local_2f = (byte)local_c | local_2f & 0xf0;
  local_2e = 0;
  local_1b = local_1b & 0xf0 | 6;
  local_1a = local_1a & 0xf0;
  if (bVar2) {
    local_14 = 3;
  }
  else {
    local_14 = 4;
  }
  local_40 = 0;
  local_3c = local_3c & 0xf0;
  local_3b = (byte)local_14 | local_3b & 0xf0;
  local_3a = local_3a & 0xf0;
  local_39 = 0;
  if (bVar2) {
    bVar1 = 2;
  }
  else {
    bVar1 = 4;
  }
  local_2a = 0;
  local_26 = local_26 & 0xf0 | 2;
  local_25 = bVar1 | local_25 & 0xf0;
  local_24 = local_24 & 0xf0 | 2;
  local_23 = 0;
  FUN_0041e018((int)(param_1 + 1),param_2,&local_40);
  return;
}

