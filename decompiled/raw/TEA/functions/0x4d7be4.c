// name: FUN_004d7be4
// address: 0x4d7be4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d7be4(int param_1,byte *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  undefined1 local_148 [240];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_004dce64(0x515554);
  if (param_2 == (byte *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    pcVar6 = FUN_0041e688;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_004ceae8(local_58);
    puVar1 = FUN_004dc320(local_148,PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
    puVar2 = (uint *)FUN_004cf594(puVar1);
    FUN_004cf628((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_004cf59c(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    FUN_00402880((int)local_2c,2);
    local_40 = 8;
    FUN_004e7cc4((uint *)&DAT_004113dc,local_1c,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  while( true ) {
    uVar7 = FUN_004cea6c(param_1);
    iVar4 = DAT_005140ac;
    if (uVar7 < (uint)(param_4 + param_3)) {
      *in_FS_OFFSET = local_50;
      return iVar4;
    }
    pbVar11 = param_2;
    iVar4 = param_4;
    iVar3 = FUN_004ce924(param_1);
    iVar4 = FUN_004d4204((byte *)(iVar3 + param_3),pbVar11,iVar4);
    if (iVar4 == 0) break;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_50;
  return param_3;
}

