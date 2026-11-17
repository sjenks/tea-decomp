// name: FUN_004a1174
// address: 0x4a1174
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_004a1174(undefined4 *param_1,int *param_2,int *param_3,int param_4,char param_5,char param_6)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int local_64 [4];
  int local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c [2];
  
  if (param_1[1] == 0) {
    FUN_004a0c7c(*param_1,param_2,param_1 + 2,param_3,param_4,param_5,param_6,param_1 + 7,
                 *(ushort *)(param_1 + 8));
  }
  else if (param_1[1] == 1) {
    puVar3 = param_1 + 7;
    piVar2 = param_1 + 6;
    piVar1 = param_1 + 2;
    FUN_00488750(local_c,(undefined4 *)*param_1);
    local_14 = 0;
    local_10 = 0;
    local_20 = 0;
    local_24 = 0;
    local_54[0] = 0;
    local_54[1] = 0;
    FUN_004a05b0((uint *)*param_1,local_54,param_2,piVar1,param_3,param_4,param_5,param_6,piVar2,
                 puVar3);
  }
  else if (param_1[1] == 2) {
    puVar3 = param_1 + 7;
    piVar2 = param_1 + 6;
    piVar1 = param_1 + 2;
    FUN_00488750(local_2c,(undefined4 *)*param_1);
    local_34 = 0;
    local_30 = 0;
    local_40 = 0;
    local_44 = 0;
    local_64[0] = 0;
    local_64[1] = 0;
    FUN_004a0bc8((undefined4 *)*param_1,local_64,param_2,piVar1,param_3,param_4,param_5,param_6,
                 piVar2,puVar3);
  }
  return;
}

