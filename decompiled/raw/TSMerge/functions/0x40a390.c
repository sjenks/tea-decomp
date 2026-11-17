// name: FUN_0040a390
// address: 0x40a390
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_0040a390(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_2c;
  undefined4 local_8;
  
  FUN_00455f04(0x462c80);
  while( true ) {
    iVar3 = param_1 + -0x10;
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
    iVar2 = FUN_00405984((int)&param_2,iVar3);
    if (iVar2 < 1) break;
    FUN_0044ce78(param_1,iVar3);
    param_1 = iVar3;
  }
  FUN_0044ce78(param_1,(int)&param_2);
  if (param_4 != 0) {
    if (*(int *)(param_4 + -0xc) != -1) {
      piVar4 = (int *)(param_4 + -0xc);
      if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040a4a7;
    }
    FUN_0044b2cc();
  }
LAB_0040a4a7:
  *in_FS_OFFSET = local_2c;
  return;
}

