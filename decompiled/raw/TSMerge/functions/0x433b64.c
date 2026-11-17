// name: FUN_00433b64
// address: 0x433b64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00433b64(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int local_3c;
  byte local_38;
  byte local_37;
  byte local_36;
  undefined4 local_35;
  undefined4 local_31;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  undefined4 local_2a;
  byte local_22;
  byte local_21;
  undefined4 local_1b;
  byte local_17;
  byte local_16;
  byte local_15;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_0041efe0(&local_3c);
  FUN_0041e0e8((int)(param_1 + 1),param_3,&local_3c);
  local_8 = local_3c;
  if ((*(byte *)(param_3 + 0x1a) & 0x80) == 0) {
    bVar1 = 3;
  }
  else {
    bVar1 = 4;
  }
  local_3c = param_2;
  local_38 = local_38 & 0xf0;
  local_37 = bVar1 | local_37 & 0xf0;
  local_36 = local_36 & 0xf0 | 2;
  local_35 = 0;
  FUN_0041e018((int)(param_1 + 1),param_3,&local_3c);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) != 0;
  if (local_8 == 0) {
    local_c = 0;
  }
  else {
    local_c = 2;
  }
  if (bVar2) {
    local_10 = 4;
  }
  else {
    local_10 = 3;
  }
  local_3c = local_8;
  local_38 = local_38 & 0xf0;
  local_37 = (byte)local_10 | local_37 & 0xf0;
  local_36 = (byte)local_c | local_36 & 0xf0;
  local_35 = 0;
  local_22 = local_22 & 0xf0 | 5;
  local_21 = local_21 & 0xf0;
  if (bVar2 == ((*(uint *)(*(int *)(*param_1 + 0x15) + 0x18) & 0x800000) != 0)) {
    local_31 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 4;
    local_2b = local_2b & 0xf0 | 1;
    local_1b = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 4;
    local_15 = local_15 & 0xf0 | 3;
  }
  else if (bVar2) {
    local_31 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 2;
    local_2b = local_2b & 0xf0 | 1;
    local_1b = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 3;
    local_15 = local_15 & 0xf0 | 3;
  }
  else {
    local_31 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 3;
    local_2b = local_2b & 0xf0 | 1;
    local_1b = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 2;
    local_15 = local_15 & 0xf0 | 3;
  }
  local_14 = 0;
  local_2a = 0;
  FUN_0041e018((int)(param_1 + 1),param_2,&local_3c);
  return;
}

