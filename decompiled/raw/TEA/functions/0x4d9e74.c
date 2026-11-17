// name: FUN_004d9e74
// address: 0x4d9e74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004d9e74(uint *param_1)

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
  
  FUN_004dce64(0x516390);
  uVar1 = FUN_004d9bf4((char *)param_1);
  if ((char)uVar1 == '\0') {
    puVar2 = (uint *)FUN_004cc180();
    FUN_004dae38(local_c,param_1,2);
    bVar4 = 0;
    local_38 = puVar2;
    do {
      uVar5 = (uint)bVar4;
      iVar3 = FUN_004e13d4(uVar5);
      uVar6 = (uint)(iVar3 != 0);
      iVar3 = FUN_004e13a8(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 2;
      }
      iVar3 = FUN_004e1354(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 4;
      }
      iVar3 = FUN_004e13e8(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 8;
      }
      iVar3 = FUN_004e1394(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x10;
      }
      iVar3 = FUN_004e133c(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x20;
      }
      iVar3 = FUN_004e1368(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x40;
      }
      iVar3 = FUN_004e13c0(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x80;
      }
      iVar3 = FUN_004e13fc(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x100;
      }
      iVar3 = FUN_004e137c(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x200;
      }
      *local_38 = uVar6;
      bVar4 = bVar4 + 1;
      local_38 = local_38 + 1;
    } while (bVar4 != 0xff);
    FUN_004dafc0(local_c,2);
    *in_FS_OFFSET = local_30;
  }
  else {
    puVar2 = (uint *)&DAT_00515e04;
    *in_FS_OFFSET = local_30;
  }
  return puVar2;
}

