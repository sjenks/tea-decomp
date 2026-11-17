// name: FUN_0042116c
// address: 0x42116c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00421274) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0042116c(int param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  undefined3 extraout_var;
  int *piVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined4 *in_FS_OFFSET;
  char *pcVar10;
  uint local_98;
  undefined4 local_88;
  undefined1 local_64 [8];
  char *local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  FUN_004dce64(0x4efcdc);
  FUN_0041b48c((int *)(param_1 + 0x168),param_2);
  FUN_00401d10((int)local_54,param_2,(uint *)&DAT_004ed376);
  FUN_004cf384(param_1 + 0x230,(int)local_54);
  if (local_4c != 0) {
    if (*(int *)(local_4c + -0xc) != -1) {
      piVar7 = (int *)(local_4c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar3 = *piVar7 + 1;
      }
      if (iVar3 != 0) goto LAB_00421249;
    }
    FUN_004cc0bc();
    local_4c = 0;
  }
LAB_00421249:
  local_c = &DAT_00513d64;
  FUN_00401d10((int)local_24,param_1 + 0x230,(uint *)&DAT_004ed378);
  FUN_00414278(&local_44,(int)local_24);
  for (local_98 = local_40; local_98 < local_3c; local_98 = local_98 + 0x10) {
    puVar1 = *(uint **)(local_98 + 8);
    puVar4 = thunk_FUN_004dccbc(puVar1,'.');
    if (puVar4 != (uint *)0x0) {
      FUN_00401d10((int)local_64,param_1 + 0x230,puVar1);
      for (iVar3 = 0; iVar6 = FUN_00408b14(*(int *)(param_1 + 0x14)), iVar3 < iVar6;
          iVar3 = iVar3 + 1) {
        pcVar10 = local_5c;
        pcVar5 = (char *)FUN_00408c98(*(int *)(param_1 + 0x14),iVar3);
        iVar6 = FUN_004dcbf8(pcVar5,pcVar10);
        if (iVar6 == 0) break;
      }
      iVar6 = FUN_00408b14(*(int *)(param_1 + 0x14));
      if (iVar6 <= iVar3) {
        uVar8 = 0;
        ppuVar9 = &PTR_DAT_004f33b0;
        do {
          if (((1 << ((byte)uVar8 & 0x1f) & *(uint *)(param_1 + 0x224)) != 0) &&
             (iVar3 = FUN_004dcbf8((char *)puVar4,*ppuVar9), iVar3 == 0)) break;
          uVar8 = uVar8 + 1;
          ppuVar9 = ppuVar9 + 1;
        } while (uVar8 < 4);
        if ((uVar8 != 4) &&
           ((*(int *)(param_1 + 0x224) != 4 ||
            (bVar2 = FUN_004216dc(param_1,(int)local_64), CONCAT31(extraout_var,bVar2) != 0)))) {
          if (*(int *)(local_c + -4) != 0) {
            FUN_004d5c40((int)local_14,*(uint *)(local_c + -4),0,1,0x3b);
          }
          FUN_004d573c((int)local_14,(int)local_64);
        }
      }
      if (local_5c != (char *)0x0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          piVar7 = (int *)(local_5c + -0xc);
          if (piVar7 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar7 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar7 = *piVar7 + -1;
            iVar3 = *piVar7 + 1;
          }
          if (iVar3 != 0) goto LAB_0042147c;
        }
        FUN_004cc0bc();
        local_5c = (char *)0x0;
      }
    }
LAB_0042147c:
  }
  FUN_0041f1c8(param_1 + 0xb0,(int)local_14,'\x01');
  FUN_0040b4f0(&local_44,local_40,local_3c);
  FUN_004cc0bc();
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar7 = (int *)(local_1c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar3 = *piVar7 + 1;
      }
      if (iVar3 != 0) goto LAB_00421547;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_00421547:
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar7 = (int *)(local_c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar3 = *piVar7 + 1;
      }
      if (iVar3 != 0) goto LAB_004215da;
    }
    FUN_004cc0bc();
  }
LAB_004215da:
  *in_FS_OFFSET = local_88;
  return;
}

