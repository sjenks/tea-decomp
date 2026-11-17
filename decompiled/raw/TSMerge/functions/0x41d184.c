// name: FUN_0041d184
// address: 0x41d184
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0041d184(uint param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint *puVar3;
  BOOL BVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x467904);
  if (DAT_004677d0 == 0) {
    *in_FS_OFFSET = local_28;
    uVar5 = local_28;
  }
  else {
    puVar3 = (uint *)FUN_0041cdb0(param_1);
    uVar5 = 0;
    if (puVar3 != (uint *)0x0) {
      *(char *)((int)puVar3 + 5) = *(char *)((int)puVar3 + 5) + -1;
      bVar2 = *(char *)((int)puVar3 + 5) == '\0';
      uVar5 = (uint)bVar2;
      if (bVar2) {
        BVar4 = DeleteObject((HGDIOBJ)*puVar3);
        if (BVar4 == 0) {
          FUN_0041cad0(0x7fde,*puVar3);
        }
        uVar5 = FUN_0041ce7c(DAT_004677d0,puVar3);
        if (uVar5 != 0xffffffff) {
          puVar1 = *(undefined4 **)(*(int *)(DAT_004677d0 + 9) + uVar5 * 4);
          FUN_004559f4((undefined4 *)(*(int *)(DAT_004677d0 + 9) + uVar5 * 4),
                       (undefined4 *)(*(int *)(DAT_004677d0 + 9) + (uVar5 + 1) * 4),
                       ((*(int *)(DAT_004677d0 + 1) - uVar5) + -1) * 4);
          *(int *)(DAT_004677d0 + 1) = *(int *)(DAT_004677d0 + 1) + -1;
          puVar6 = (undefined4 *)(DAT_004677d0 + 0xd);
          *puVar1 = *puVar6;
          *puVar6 = puVar1;
        }
        uVar5 = FUN_0041cc5e();
      }
    }
    *in_FS_OFFSET = local_28;
  }
  return uVar5;
}

