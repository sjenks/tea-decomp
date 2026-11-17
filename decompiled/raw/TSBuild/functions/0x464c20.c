// name: FUN_00464c20
// address: 0x464c20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_00464c20(uint *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  uint *local_38;
  undefined4 local_30;
  int local_c [2];
  
  FUN_00467ba8(0x4880c4);
  uVar1 = FUN_004649a0((char *)param_1);
  if ((char)uVar1 == '\0') {
    puVar2 = (uint *)FUN_004568d0();
    FUN_00465be4(local_c,param_1,2);
    bVar4 = 0;
    local_38 = puVar2;
    do {
      uVar5 = (uint)bVar4;
      iVar3 = FUN_0046b57c(uVar5);
      uVar6 = (uint)(iVar3 != 0);
      iVar3 = FUN_0046b550(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 2;
      }
      iVar3 = FUN_0046b4fc(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 4;
      }
      iVar3 = FUN_0046b590(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 8;
      }
      iVar3 = FUN_0046b53c(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x10;
      }
      iVar3 = FUN_0046b4e4(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x20;
      }
      iVar3 = FUN_0046b510(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x40;
      }
      iVar3 = FUN_0046b568(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x80;
      }
      iVar3 = FUN_0046b5a4(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x100;
      }
      iVar3 = FUN_0046b524(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x200;
      }
      *local_38 = uVar6;
      bVar4 = bVar4 + 1;
      local_38 = local_38 + 1;
    } while (bVar4 != 0xff);
    FUN_00465d6c(local_c,2);
    *in_FS_OFFSET = local_30;
  }
  else {
    puVar2 = (uint *)&DAT_00487b38;
    *in_FS_OFFSET = local_30;
  }
  return puVar2;
}

