// name: FUN_00466b38
// address: 0x466b38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00466b7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00466b38(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4fc3a8);
  local_c = (uint *)&DAT_00513d64;
  for (iVar3 = 0; iVar1 = FUN_00408b14(*(int *)(param_1 + 0x140)), iVar3 < iVar1; iVar3 = iVar3 + 1)
  {
    if (local_c[-1] != 0) {
      FUN_00464a94((int)local_24,param_1,0x2e4a);
      FUN_004d573c((int)local_14,(int)local_24);
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar4 = (int *)(local_1c + -0xc);
          if (piVar4 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar1 = *piVar4 + 1;
          }
          if (iVar1 != 0) goto LAB_00466c4a;
        }
        FUN_004cc0bc();
        local_1c = 0;
      }
    }
LAB_00466c4a:
    FUN_00408cbc(local_34,*(int *)(param_1 + 0x140),iVar3);
    FUN_004d573c((int)local_14,(int)local_34);
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar4 = (int *)(local_2c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar1 = *piVar4 + 1;
        }
        if (iVar1 != 0) goto LAB_00466cf7;
      }
      FUN_004cc0bc();
      local_2c = 0;
    }
LAB_00466cf7:
  }
  FUN_00464a94((int)local_44,param_1,0x116c);
  FUN_004d573c((int)local_14,(int)local_44);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      piVar4 = (int *)(local_3c + -0xc);
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
      if (iVar3 != 0) goto LAB_00466dc1;
    }
    FUN_004cc0bc();
    local_3c = 0;
  }
LAB_00466dc1:
  FUN_004a7780(**(int **)(*(int *)(**(int **)(param_1 + 0x10) + 0x6c) + 0x2b),local_c);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar2 = local_c + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar3 = *puVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00466e64;
    }
    FUN_004cc0bc();
  }
LAB_00466e64:
  *in_FS_OFFSET = local_68;
  return;
}

