// name: FUN_00409be4
// address: 0x409be4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00409be4(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_2c;
  undefined4 local_8;
  
  FUN_00455f04(0x462b54);
  iVar4 = param_2 - param_1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xf;
  }
  uVar5 = iVar4 >> 4;
  while (uVar1 = uVar5, 0 < (int)uVar1) {
    uVar5 = (int)uVar1 >> 1;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + ((uVar1 & 1) != 0);
    }
    iVar4 = uVar5 * 0x10 + param_1;
    cVar2 = (**(code **)*param_4)();
    if (cVar2 == '\0') {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 1;
      puVar7 = &LAB_00409830;
      uVar6 = 0;
      FUN_00409794(&local_8);
      FUN_0045ed74((uint *)&DAT_004097d4,&local_8,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
    }
    iVar3 = FUN_00405984(iVar4,param_3);
    if (0 < iVar3) {
      param_1 = iVar4 + 0x10;
      uVar5 = (uVar1 - uVar5) - 1;
    }
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

