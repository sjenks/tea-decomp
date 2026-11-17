// name: FUN_00414e84
// address: 0x414e84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl
FUN_00414e84(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,byte *param_5)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_004dce64(0x4ed910);
  while( true ) {
    while (iVar1 = FUN_0043c624(*(byte **)(param_1 + 8),*(int *)(*(int *)(param_1 + 8) + -4),param_5
                                ,*(int *)(param_5 + -4)), uVar4 = param_2, iVar1 < 0) {
      param_1 = param_1 + 0x10;
    }
    do {
      param_2 = uVar4 - 0x10;
      iVar1 = FUN_0043c624(param_5,*(int *)(param_5 + -4),*(byte **)(uVar4 - 8),
                           *(int *)(*(int *)(uVar4 - 8) + -4));
      uVar4 = param_2;
    } while (iVar1 < 0);
    if (param_2 <= param_1) break;
    local_c = (int *)0x0;
    iVar1 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar4 = *(uint *)(*(int *)(param_1 + 8) + -4);
      local_c = FUN_004cf7b0(local_14,uVar4,uVar4);
      local_c = local_c + 3;
      FUN_004dc7d4(local_c,*(undefined4 **)(param_1 + 8),uVar4);
    }
    else {
      local_c = *(int **)(param_1 + 8);
      piVar2 = local_c + -3;
      if (piVar2 != &DAT_00513d58) {
        *piVar2 = *piVar2 + 1;
      }
    }
    FUN_004cf384(param_1,param_2);
    FUN_004cf384(param_2,(int)local_14);
    if (local_c != (int *)0x0) {
      if (local_c[-3] != -1) {
        piVar2 = local_c + -3;
        if (piVar2 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar1 = *piVar2 + 1;
        }
        if (iVar1 != 0) goto LAB_00415101;
      }
      FUN_004cc0bc();
      local_c = (int *)0x0;
    }
LAB_00415101:
    param_1 = param_1 + 0x10;
  }
  if (param_5 != (byte *)0x0) {
    if (*(int *)(param_5 + -0xc) != -1) {
      pbVar3 = param_5 + -0xc;
      if (pbVar3 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else if (pbVar3 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar3 = *(int *)pbVar3 + -1;
        iVar1 = *(int *)pbVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00414f97;
    }
    FUN_004cc0bc();
  }
LAB_00414f97:
  *in_FS_OFFSET = local_38;
  return param_1;
}

