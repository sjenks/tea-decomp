// name: FUN_004d1c6c
// address: 0x4d1c6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d1c6c(int param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  code *pcVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_27c [16];
  undefined1 local_26c [240];
  undefined1 local_17c [240];
  int local_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_004dce64(0x514710);
  local_68 = 8;
  FUN_004cf778(param_1,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    pcVar6 = FUN_0041e688;
    uVar5 = 0;
    local_68 = 0x2c;
    FUN_004ceae8(local_80);
    puVar1 = FUN_004dc320(local_17c,PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
    puVar2 = (uint *)FUN_004cf594(puVar1);
    FUN_004cf628((int)local_2c,puVar2);
    local_5c = local_5c + 1;
    FUN_004cf59c(local_1c,(int)local_2c);
    local_5c = local_5c + 2;
    FUN_00402880((int)local_2c,2);
    local_68 = 0x20;
    FUN_004e7cc4((uint *)&DAT_004113dc,local_1c,uVar5,pcVar6,uVar8,uVar9,uVar10,uVar11);
  }
  if (param_3 == DAT_005140ac) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar7 = &LAB_00408370;
    uVar5 = 0;
    local_68 = 0x44;
    FUN_004ceae8(local_88);
    puVar1 = FUN_004dc320(local_26c,PTR_s_invalid_string_size_parameter_in_00516d20);
    puVar2 = (uint *)FUN_004cf594(puVar1);
    FUN_004cf628((int)local_54,puVar2);
    local_5c = local_5c + 1;
    FUN_004cff14(local_44,(int)local_54);
    local_5c = local_5c + 3;
    FUN_00402880((int)local_54,2);
    local_68 = 0x38;
    FUN_004e7cc4((uint *)&DAT_00408314,local_44,uVar5,puVar7,uVar8,uVar9,uVar10,uVar11);
  }
  piVar3 = FUN_004cf7b0(param_1,param_3,param_3);
  local_8c = FUN_004cfaa0((int)piVar3);
  FUN_004cea90((int)local_27c,param_1,&local_8c);
  puVar4 = (undefined4 *)FUN_004ce924(param_1);
  FUN_004cf758(puVar4,param_2,param_3);
  *in_FS_OFFSET = local_78;
  return param_1;
}

