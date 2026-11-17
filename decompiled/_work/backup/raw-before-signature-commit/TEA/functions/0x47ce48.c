// name: FUN_0047ce48
// address: 0x47ce48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0047ce48(int param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x502378);
  if (*(int *)(param_1 + 4) == 2) {
    iVar3 = *(int *)(param_1 + 0x214);
    if (-1 < iVar3) {
      iVar2 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      if (iVar3 < iVar2 >> 4) {
        if (*(char *)((int)param_3 + (param_4 - 1)) == ';') {
          param_4 = param_4 - 1;
        }
        iVar3 = iVar3 * 0x10 + *(int *)(param_1 + 0x1d4);
        FUN_004cfad4(iVar3,*(uint *)(*(int *)(iVar3 + 8) + -4),0,(uint)param_3,param_4,0,param_4);
      }
    }
    goto LAB_0047d0d4;
  }
  if (*(int *)(param_1 + 4) != 0) goto LAB_0047d0d4;
  FUN_0047f9f8(param_1);
  if ((*(int *)(param_1 + 0x18) == -0x80000000) && (*(int *)(param_1 + 0x210) != -0x80000000)) {
    FUN_0047fdac(param_1,4,*(int *)(param_1 + 0x210));
  }
  if ((*(int *)(param_1 + 0x1c) == -0x80000000) && (*(int *)(param_1 + 0x298) == 0)) {
    FUN_0047fdac(param_1,5,0);
  }
  if (*(int *)(param_1 + 0x248) != 4) {
    iVar3 = *(int *)(param_1 + 0x248);
    iVar2 = FUN_004d1c6c((int)local_24,param_3,param_4);
    FUN_00482bdc((int)local_14,iVar2,iVar3);
    iVar3 = extraout_ECX;
    if (local_1c != 0) {
      iVar3 = *(int *)(local_1c + -0xc) + 1;
      if (iVar3 != 0) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_0047cfe7;
      }
      FUN_004cc0bc();
      local_1c = 0;
      iVar3 = 0;
    }
LAB_0047cfe7:
    FUN_0047d0e8(local_14,*(undefined4 *)(param_1 + 0x244),iVar3,
                 (int *)*(undefined4 *)(param_1 + 0x244),(int)local_14);
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar5 = (int *)(local_c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar3 = *piVar5 + 1;
        }
        if (iVar3 != 0) goto LAB_0047d080;
      }
      FUN_004cc0bc();
      local_c = 0;
    }
  }
LAB_0047d080:
  uVar4 = param_4 + param_2;
  for (; param_2 < uVar4; param_2 = param_2 + 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x218);
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x224)) = uVar1;
  }
  iVar3 = FUN_0048070c(param_1);
  if (iVar3 != 0) {
    FUN_004cfad4(iVar3 + 0x40,*(uint *)(*(int *)(iVar3 + 0x48) + -4),0,(uint)param_3,param_4,0,
                 param_4);
  }
LAB_0047d0d4:
  *in_FS_OFFSET = local_48;
  return;
}

