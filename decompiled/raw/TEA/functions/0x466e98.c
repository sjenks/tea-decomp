// name: FUN_00466e98
// address: 0x466e98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00466e98(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4fc448);
  puVar2 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1 + 0x140));
  FUN_004cf628((int)local_14,puVar2);
  iVar3 = FUN_00466b28(param_1);
  iVar3 = *(int *)(iVar3 + 0x28);
  iVar10 = 0;
  while( true ) {
    iVar7 = FUN_00408b14(iVar3);
    if (iVar7 <= iVar10) break;
    iVar7 = FUN_00408b14(*(int *)(param_1 + 0x140));
    do {
      iVar9 = iVar7 + -1;
      if (iVar7 < 1) break;
      pcVar6 = (char *)FUN_00408c98(*(int *)(param_1 + 0x140),iVar9);
      pcVar4 = (char *)FUN_00408c98(iVar3,iVar10);
      iVar5 = FUN_004dcbf8(pcVar4,pcVar6);
      iVar7 = iVar9;
    } while (iVar5 != 0);
    if (iVar9 < 0) {
      if (local_c[-1] != 0) {
        FUN_004d5c40((int)local_14,local_c[-1],0,1,0x3b);
      }
      puVar2 = (uint *)FUN_00408c98(iVar3,iVar10);
      uVar1 = local_c[-1];
      pcVar6 = FUN_004dc9f4(puVar2);
      FUN_004cfad4((int)local_14,uVar1,0,(uint)puVar2,(uint)pcVar6,0,(uint)pcVar6);
    }
    iVar10 = iVar10 + 1;
  }
  puVar8 = FUN_00407734(local_c);
  FUN_00409594((int)puVar8,param_2,param_3);
  FUN_00408884((int)puVar8);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar3 = *local_c + 1;
      }
      if (iVar3 != 0) goto LAB_00467032;
    }
    FUN_004cc0bc();
  }
LAB_00467032:
  *in_FS_OFFSET = local_38;
  return;
}

