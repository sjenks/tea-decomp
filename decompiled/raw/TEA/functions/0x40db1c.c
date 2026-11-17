// name: FUN_0040db1c
// address: 0x40db1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0040db83) */

void __cdecl FUN_0040db1c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined *local_c;
  
  FUN_004dce64(0x4ec318);
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  if ((uint)(iVar3 >> 4) < param_2) {
    local_c = &DAT_00513d64;
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    FUN_0040dc7c(param_1,*(int *)(param_1 + 8),param_2 - (iVar3 >> 4),(int)local_14);
    if (local_c != (undefined *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar3 = *piVar4 + 1;
        }
        if (iVar3 != 0) goto LAB_0040dc6c;
      }
      FUN_004cc0bc();
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = iVar3 - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if (param_2 < (uint)(iVar2 >> 4)) {
      iVar5 = param_2 * 0x10 + *(int *)(param_1 + 4);
      iVar1 = FUN_0040e20c(iVar3,iVar3,iVar5);
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = iVar3 - iVar5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar3 >> 4) * -0x10;
      FUN_0040b4f0(param_1,iVar1,iVar2);
    }
  }
LAB_0040dc6c:
  *in_FS_OFFSET = local_38;
  return;
}

