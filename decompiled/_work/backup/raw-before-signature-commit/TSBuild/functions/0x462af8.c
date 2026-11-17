// name: FUN_00462af8
// address: 0x462af8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00462af8(int param_1,byte *param_2,int param_3,int param_4)

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
  
  FUN_00467ba8(0x487278);
  if (param_2 == (byte *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    pcVar6 = FUN_0045642c;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_00459238(local_58);
    puVar1 = FUN_004670cc(local_148,PTR_s_unexpected_NULL_pointer_in_funct_00488a64);
    puVar2 = (uint *)FUN_00459ce4(puVar1);
    FUN_00459d78((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_00459cec(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    FUN_0040473c((int)local_2c,2);
    local_40 = 8;
    FUN_00471ae8((uint *)&DAT_00403f08,local_1c,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  while( true ) {
    uVar7 = FUN_004591bc(param_1);
    iVar4 = DAT_00485f20;
    if (uVar7 < (uint)(param_4 + param_3)) {
      *in_FS_OFFSET = local_50;
      return iVar4;
    }
    pbVar11 = param_2;
    iVar4 = param_4;
    iVar3 = FUN_00459074(param_1);
    iVar4 = FUN_0045ebb4((byte *)(iVar3 + param_3),pbVar11,iVar4);
    if (iVar4 == 0) break;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_50;
  return param_3;
}

