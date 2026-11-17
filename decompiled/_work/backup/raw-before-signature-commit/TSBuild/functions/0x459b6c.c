// name: FUN_00459b6c
// address: 0x459b6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00459b6c(int param_1,uint *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_160 [16];
  undefined1 local_150 [240];
  int local_60;
  undefined1 local_5a;
  char local_59;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_00467ba8(0x485d90);
  if (param_2 == (uint *)0x0) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 1;
    pcVar10 = FUN_0045642c;
    uVar9 = 0;
    local_40 = 0x14;
    FUN_00459238(local_58);
    puVar2 = FUN_004670cc(local_150,PTR_s_unexpected_NULL_pointer_in_funct_00488a64);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    FUN_00459d78((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_00459cec(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    FUN_0040473c((int)local_2c,2);
    local_40 = 8;
    FUN_00471ae8((uint *)&DAT_00403f08,local_1c,uVar9,pcVar10,uVar11,uVar12,uVar13,uVar14);
  }
  uVar9 = FUN_0045a1ec();
  local_59 = (char)uVar9;
  bVar1 = FUN_00459d40((char *)param_2,&local_59);
  if (bVar1) {
    piVar4 = (int *)FUN_00459080(param_1);
    iVar5 = FUN_00459094(piVar4);
    if (iVar5 == 1) {
      iVar5 = FUN_00459080(param_1);
      *(undefined4 *)(iVar5 + 8) = 0;
      uVar9 = FUN_0045a1ec();
      local_5a = (undefined1)uVar9;
      puVar2 = &local_5a;
      puVar6 = (undefined1 *)FUN_00459074(param_1);
      FUN_00459d58(puVar6,puVar2);
    }
    else {
      FUN_00458fdc(param_1);
      piVar4 = FUN_004590c4();
      FUN_00459b44(piVar4);
      puVar7 = FUN_004590c4();
      local_60 = FUN_0045a1f0((int)puVar7);
      FUN_004591e0((int)local_160,param_1,&local_60);
    }
    *in_FS_OFFSET = local_50;
  }
  else {
    uVar11 = FUN_00459d68(param_2);
    uVar8 = FUN_004591bc(param_1);
    param_1 = FUN_0045a1fc(param_1,0,uVar8,(uint)param_2,uVar11);
    *in_FS_OFFSET = local_50;
  }
  return param_1;
}

