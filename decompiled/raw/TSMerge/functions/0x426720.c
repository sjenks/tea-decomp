// name: FUN_00426720
// address: 0x426720
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl
FUN_00426720(uint *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,int param_6,
            char param_7,char param_8,int *param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int *local_130;
  int *local_124;
  undefined4 local_11c;
  undefined4 local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  uint local_64 [2];
  uint local_5c [2];
  HDC local_54 [10];
  HDC local_2c;
  int local_27;
  
  FUN_00455f04(0x469558);
  local_78 = 8;
  FUN_0042080c((int *)&local_2c,param_1);
  local_6c = local_6c + 3;
  local_78 = 0x14;
  (**(code **)(local_27 + 0x24))();
  (**(code **)(local_27 + 0x20))();
  local_94 = param_2[3] - param_2[1];
  local_98 = param_2[2] - *param_2;
  local_a0 = *param_5;
  local_9c = param_5[1];
  local_140 = param_4[1] + local_9c;
  local_144 = *param_4 + local_a0;
  local_138 = local_140 + local_94;
  local_13c = local_144 + local_98;
  local_b0 = local_144;
  local_ac = local_140;
  local_a8 = local_144;
  local_a4 = local_140;
  FUN_0041d75c(&local_144,param_4);
  local_b8 = *param_5;
  local_b4 = param_5[1];
  if ((param_7 != '\0') || (param_6 == 1)) {
    local_b8 = local_b8 + 1;
    local_b4 = local_b4 + 1;
    FUN_0041d724(&local_144,1,1);
    FUN_0041d75c(&local_144,param_4);
  }
  local_bc = local_138 - local_140;
  local_c0 = local_13c - local_144;
  local_148 = param_4[3] - param_4[1];
  local_14c = param_4[2] - *param_4;
  local_d0 = 0;
  local_cc = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_154 = 0;
  local_150 = 0;
  local_78 = 0x20;
  local_e8 = local_14c;
  local_e4 = local_148;
  local_e0 = local_14c;
  local_dc = local_148;
  local_c8 = local_14c;
  local_c4 = local_148;
  puVar1 = (uint *)FUN_0042646c(&local_e8);
  FUN_0042080c((int *)local_54,puVar1);
  local_6c = local_6c + 3;
  local_78 = 0x14;
  local_ec = local_148 - local_150;
  local_f0 = local_14c - local_154;
  FUN_00426484(local_54,&local_b8,&local_f0,&local_2c,param_2,param_9);
  local_fc = param_2[3] - param_2[1];
  local_100 = param_2[2] - *param_2;
  local_158 = local_b4 + local_fc;
  local_15c = local_b8 + local_100;
  local_10c = local_b4;
  local_110 = local_b8;
  local_164 = local_b8;
  local_160 = local_b4;
  local_108 = local_15c;
  local_104 = local_158;
  local_f8 = local_100;
  local_f4 = local_fc;
  if (param_6 == 3) {
    (**(code **)(local_27 + 0x20))();
    local_11c = 0;
    local_118 = 0;
    BitBlt(local_54[0],*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],local_2c,0,
           0,0xee0086);
    local_78 = 0x2c;
    FUN_00431320(local_5c,&DAT_00476bf4,'\x01');
    local_6c = local_6c + 2;
    local_78 = 0x38;
    FUN_00416b78(param_3,local_5c);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    local_124 = &local_164;
    BitBlt((HDC)*param_3,local_144,local_140,local_13c - local_144,local_138 - local_140,local_54[0]
           ,local_164,local_160,0xb8074a);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    local_6c = local_6c + -2;
    FUN_00431428(local_5c,2);
    local_78 = 0x14;
  }
  else {
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    local_130 = &local_164;
    BitBlt((HDC)*param_3,local_144,local_140,local_13c - local_144,local_138 - local_140,local_54[0]
           ,local_164,local_160,0x8800c6);
    BitBlt((HDC)*param_3,local_144,local_140,local_13c - local_144,local_138 - local_140,local_2c,
           *param_2,param_2[1],0xee0086);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
  }
  if (param_6 == 2) {
    FUN_00426604(param_3,local_54,param_4);
  }
  else if ((param_8 != '\0') && (*param_10 != DAT_00476bac)) {
    local_78 = 0x44;
    FUN_00431320(local_64,param_10,'\x01');
    local_6c = local_6c + 2;
    local_78 = 0x50;
    FUN_00426554(param_3,local_54,param_4,local_64);
    local_6c = local_6c + -2;
    FUN_00431428(local_64,2);
    local_78 = 0x14;
  }
  FUN_004208e8(local_54);
  local_6c = local_6c + -3;
  FUN_00420914((int *)local_54,2);
  local_6c = local_6c + -3;
  FUN_00420914((int *)&local_2c,2);
  *in_FS_OFFSET = local_88;
  return;
}

