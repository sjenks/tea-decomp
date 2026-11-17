// name: FUN_004602c4
// address: 0x4602c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004602c4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 local_148 [240];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_00467ba8(0x486e78);
  iVar1 = FUN_004591bc(param_2);
  uVar6 = DAT_00485f20 - iVar1;
  uVar2 = FUN_004591bc(param_1);
  if (uVar6 <= uVar2) {
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar2 = 1;
    puVar8 = &LAB_00402064;
    uVar7 = 0;
    local_40 = 0x14;
    FUN_00459238(local_58);
    FUN_004591bc(param_2);
    FUN_004591bc(param_1);
    puVar3 = FUN_004670cc(local_148,PTR_s_resulting_length_is_invalid_in_f_00488a5c);
    puVar4 = (uint *)FUN_00459ce4(puVar3);
    FUN_00459d78((int)local_2c,puVar4);
    local_34 = local_34 + 1;
    FUN_0045a664(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_0040473c((int)local_2c,2);
    local_40 = 8;
    FUN_00471ae8((uint *)&DAT_00402008,local_1c,uVar7,puVar8,uVar2,uVar9,uVar10,uVar12);
  }
  uVar2 = FUN_004591bc(param_2);
  uVar6 = FUN_0045a6f0(param_2);
  uVar11 = 0;
  uVar5 = FUN_004591bc(param_1);
  FUN_0045a1fc(param_1,uVar5,uVar11,uVar6,uVar2);
  *in_FS_OFFSET = local_50;
  return param_1;
}

