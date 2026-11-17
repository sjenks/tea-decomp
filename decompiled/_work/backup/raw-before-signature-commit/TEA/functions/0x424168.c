// name: FUN_00424168
// address: 0x424168
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00424168(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  int local_b8;
  undefined4 local_a0;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  FUN_004dce64(0x4f13c4);
  iVar5 = 0;
  iVar4 = 1;
  FUN_004649b0((int)local_1c);
  FUN_0044e83c(local_c,(int)local_1c,iVar4,iVar5);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar1 = (int *)(local_14 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1 + 1;
      }
      if (iVar4 != 0) goto LAB_00424263;
    }
    FUN_004cc0bc();
    local_14 = 0;
  }
LAB_00424263:
  local_b8 = 0;
  do {
    iVar4 = *(int *)(param_1 + local_b8 * 4);
    iVar5 = 0;
    do {
      iVar3 = iVar5 * 0x38 + iVar4;
      FUN_004248a4((int)local_2c,iVar4);
      FUN_0044eca8((int)local_c,(int)local_2c);
      FUN_004248a4((int)local_3c,iVar4 + 0x10);
      FUN_004cf384((int)local_2c,(int)local_3c);
      if (local_34 != 0) {
        if (*(int *)(local_34 + -0xc) != -1) {
          piVar1 = (int *)(local_34 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1 + 1;
          }
          if (iVar2 != 0) goto LAB_004243be;
        }
        FUN_004cc0bc();
        local_34 = 0;
      }
LAB_004243be:
      FUN_0044ec78((int)local_c,(int)local_2c,iVar3 + 0x48);
      FUN_004248a4((int)local_4c,iVar4 + 0x20);
      FUN_004cf384((int)local_2c,(int)local_4c);
      if (local_44 != 0) {
        if (*(int *)(local_44 + -0xc) != -1) {
          piVar1 = (int *)(local_44 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1 + 1;
          }
          if (iVar2 != 0) goto LAB_004244bb;
        }
        FUN_004cc0bc();
        local_44 = 0;
      }
LAB_004244bb:
      FUN_0044ec78((int)local_c,(int)local_2c,iVar3 + 0x58);
      if (*(int *)(*(int *)(iVar4 + 0x38) + -4) != 0) {
        FUN_004248a4((int)local_5c,iVar4 + 0x30);
        FUN_004cf384((int)local_2c,(int)local_5c);
        if (local_54 != 0) {
          if (*(int *)(local_54 + -0xc) != -1) {
            piVar1 = (int *)(local_54 + -0xc);
            if (piVar1 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (piVar1 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1 + 1;
            }
            if (iVar2 != 0) goto LAB_004245c6;
          }
          FUN_004cc0bc();
          local_54 = 0;
        }
LAB_004245c6:
        FUN_0044ec78((int)local_c,(int)local_2c,iVar3 + 0x68);
      }
      if (local_24 != 0) {
        if (*(int *)(local_24 + -0xc) != -1) {
          piVar1 = (int *)(local_24 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1 + 1;
          }
          if (iVar3 != 0) goto LAB_00424676;
        }
        FUN_004cc0bc();
        local_24 = 0;
      }
LAB_00424676:
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    local_b8 = local_b8 + 1;
  } while (local_b8 < 4);
  iVar4 = param_1 + 0x10;
  iVar5 = FUN_004cf628((int)local_6c,(uint *)s_LookupTestWord_004f0e1c);
  FUN_0044ec78((int)local_c,iVar5,iVar4);
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar1 = (int *)(local_64 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1 + 1;
      }
      if (iVar4 != 0) goto LAB_00424783;
    }
    FUN_004cc0bc();
    local_64 = 0;
  }
LAB_00424783:
  iVar4 = param_1 + 0x20;
  iVar5 = FUN_004cf628((int)local_7c,(uint *)s_LookupDefaultLabel_004f0e2b);
  FUN_0044ec78((int)local_c,iVar5,iVar4);
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      piVar1 = (int *)(local_74 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1 + 1;
      }
      if (iVar4 != 0) goto LAB_00424873;
    }
    FUN_004cc0bc();
    local_74 = 0;
  }
LAB_00424873:
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_a0;
  return;
}

