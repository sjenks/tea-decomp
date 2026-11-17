// name: FUN_0046c244
// address: 0x46c244
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __cdecl FUN_0046c244(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined3 uVar5;
  uint *puVar3;
  uint uVar4;
  int *piVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  char cVar8;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4fdd1c);
  iVar1 = FUN_00466b18(*(int *)(param_1 + 0x38));
  iVar7 = 0;
  while( true ) {
    iVar2 = FUN_00408b14(iVar1);
    uVar5 = (undefined3)((uint)param_4 >> 8);
    if (iVar2 <= iVar7) break;
    puVar3 = (uint *)FUN_00408c98(iVar1,iVar7);
    iVar2 = FUN_004cf628((int)local_14,puVar3);
    uVar4 = FUN_004d40d0(param_2,0,*(uint *)(*(int *)(param_2 + 8) + -4),*(byte **)(iVar2 + 8),
                         *(uint *)(*(int *)(iVar2 + 8) + -4));
    cVar8 = uVar4 == 0;
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar6 = (int *)(local_c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_0046c34c;
      }
      FUN_004cc0bc();
      local_c = 0;
    }
LAB_0046c34c:
    if (cVar8 != '\0') {
      *param_3 = iVar1;
      *param_4 = iVar7;
      *in_FS_OFFSET = local_48;
      return CONCAT31(uVar5,1);
    }
    iVar7 = iVar7 + 1;
  }
  iVar1 = FUN_00466b28(*(int *)(param_1 + 0x38));
  iVar1 = *(int *)(iVar1 + 0x28);
  iVar7 = 0;
  do {
    iVar2 = FUN_00408b14(iVar1);
    if (iVar2 <= iVar7) {
      *param_3 = 0;
      *param_4 = 0;
      *in_FS_OFFSET = local_48;
      return 0;
    }
    puVar3 = (uint *)FUN_00408c98(iVar1,iVar7);
    iVar2 = FUN_004cf628((int)local_24,puVar3);
    uVar4 = FUN_004d40d0(param_2,0,*(uint *)(*(int *)(param_2 + 8) + -4),*(byte **)(iVar2 + 8),
                         *(uint *)(*(int *)(iVar2 + 8) + -4));
    cVar8 = uVar4 == 0;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_0046c48d;
      }
      FUN_004cc0bc();
      local_1c = 0;
    }
LAB_0046c48d:
    if (cVar8 != '\0') {
      *param_3 = iVar1;
      *param_4 = iVar7;
      *in_FS_OFFSET = local_48;
      return CONCAT31(uVar5,1);
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

