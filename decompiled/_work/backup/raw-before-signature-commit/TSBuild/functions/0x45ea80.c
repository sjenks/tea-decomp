// name: FUN_0045ea80
// address: 0x45ea80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0045ea80(int param_1,uint param_2,uint param_3,byte *param_4,uint param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_14c [240];
  uint local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_00467ba8(0x486a54);
  uVar1 = FUN_004591bc(param_1);
  if (uVar1 < param_2) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = 1;
    puVar6 = &LAB_004021bc;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_00459238(local_58);
    FUN_004591bc(param_1);
    puVar2 = FUN_004670cc(local_14c,PTR_s_position_beyond_end_of_string_in_00488a58);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    FUN_00459d78((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_0045a61c(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_0040473c((int)local_2c,2);
    local_40 = 8;
    FUN_00471ae8((uint *)&DAT_00402160,local_1c,uVar5,puVar6,uVar1,uVar7,uVar8,uVar9);
  }
  iVar4 = FUN_004591bc(param_1);
  if (iVar4 - param_2 < param_3) {
    iVar4 = FUN_004591bc(param_1);
    param_3 = iVar4 - param_2;
  }
  uVar1 = param_5;
  if (param_3 < param_5) {
    uVar1 = param_3;
  }
  local_5c = uVar1;
  iVar4 = FUN_00459074(param_1);
  uVar1 = FUN_0045ebb4((byte *)(iVar4 + param_2),param_4,uVar1);
  if (uVar1 == 0) {
    if (param_3 < param_5) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (uint)(param_3 != param_5);
    }
  }
  *in_FS_OFFSET = local_50;
  return uVar1;
}

