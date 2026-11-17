// name: FUN_004096a0
// address: 0x4096a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_004096a0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_2c;
  undefined4 local_8;
  
  FUN_00455f04(0x462b0c);
  while ((param_1 != param_2 && (param_3 != param_4))) {
    cVar1 = (**(code **)*param_6)();
    if (cVar1 == '\0') {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 1;
      puVar4 = &LAB_00409830;
      uVar3 = 0;
      FUN_00409794(&local_8);
      FUN_0045ed74((uint *)&DAT_004097d4,&local_8,uVar3,puVar4,uVar5,uVar6,uVar7,uVar8);
    }
    iVar2 = FUN_00405984(param_3,param_1);
    if (iVar2 < 1) {
      FUN_0044ce78(param_5,param_1);
      param_1 = param_1 + 0x10;
      param_5 = param_5 + 0x10;
    }
    else {
      FUN_0044ce78(param_5,param_3);
      param_3 = param_3 + 0x10;
      param_5 = param_5 + 0x10;
    }
  }
  iVar2 = FUN_00409868(param_1,param_2,param_5);
  FUN_00409868(param_3,param_4,iVar2);
  *in_FS_OFFSET = local_2c;
  return;
}

