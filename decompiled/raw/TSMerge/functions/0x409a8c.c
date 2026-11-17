// name: FUN_00409a8c
// address: 0x409a8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_00409a8c(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_2c;
  undefined4 local_8;
  
  FUN_00455f04(0x462b30);
  if (param_2 == param_1) {
    FUN_004068fc(param_3,param_4,param_5);
    *in_FS_OFFSET = local_2c;
  }
  else if (param_4 == param_3) {
    FUN_004068fc(param_1,param_2,param_5);
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar4 = param_2 + -0x10;
    iVar3 = param_4 + -0x10;
    while( true ) {
      while( true ) {
        cVar1 = (**(code **)*param_6)();
        if (cVar1 == '\0') {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_00409830;
          uVar5 = 0;
          FUN_00409794(&local_8);
          FUN_0045ed74((uint *)&DAT_004097d4,&local_8,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        iVar2 = FUN_00405984(iVar3,iVar4);
        if (iVar2 < 1) break;
        param_5 = param_5 + -0x10;
        FUN_0044ce78(param_5,iVar4);
        if (iVar4 == param_1) {
          FUN_004068fc(param_3,iVar3 + 0x10,param_5);
          *in_FS_OFFSET = local_2c;
          return;
        }
        iVar4 = iVar4 + -0x10;
      }
      param_5 = param_5 + -0x10;
      FUN_0044ce78(param_5,iVar3);
      if (iVar3 == param_3) break;
      iVar3 = iVar3 + -0x10;
    }
    FUN_004068fc(param_1,iVar4 + 0x10,param_5);
    *in_FS_OFFSET = local_2c;
  }
  return;
}

