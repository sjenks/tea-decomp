// name: FUN_00459fc0
// address: 0x459fc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_00459fc0(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_2c;
  undefined4 local_8;
  
  FUN_00467ba8(0x485e3c);
  iVar1 = FUN_00456840();
  if (iVar1 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 1;
    puVar3 = &LAB_0040eb80;
    uVar2 = 0;
    FUN_0045a02c(&local_8);
    FUN_00471ae8((uint *)&DAT_0040eb28,&local_8,uVar2,puVar3,uVar4,uVar5,uVar6,uVar7);
  }
  *in_FS_OFFSET = local_2c;
  return iVar1;
}

