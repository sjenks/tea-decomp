// name: FUN_0045ce6c
// address: 0x45ce6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_0045ce6c(void)

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
  
  FUN_00467ba8(0x4867c8);
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

