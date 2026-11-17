// name: FUN_00452cd8
// address: 0x452cd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00452cd8(int param_1,byte *param_2,int param_3,int param_4)

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
  
  FUN_00455f04(0x472dc4);
  if (param_2 == (byte *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    pcVar6 = FUN_0044aeec;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_0044cc2c(local_58);
    puVar1 = FUN_00455640(local_148,PTR_s_unexpected_NULL_pointer_in_funct_00474078);
    puVar2 = (uint *)FUN_0044d088(puVar1);
    FUN_0044d11c((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_0044d090(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    FUN_004052c4((int)local_2c,2);
    local_40 = 8;
    FUN_0045ed74((uint *)&DAT_00404790,local_1c,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  while( true ) {
    uVar7 = FUN_0044cbb0(param_1);
    iVar4 = DAT_00471f90;
    if (uVar7 < (uint)(param_4 + param_3)) {
      *in_FS_OFFSET = local_50;
      return iVar4;
    }
    pbVar11 = param_2;
    iVar4 = param_4;
    iVar3 = FUN_0044ca68(param_1);
    iVar4 = FUN_00450e6c((byte *)(iVar3 + param_3),pbVar11,iVar4);
    if (iVar4 == 0) break;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_50;
  return param_3;
}

