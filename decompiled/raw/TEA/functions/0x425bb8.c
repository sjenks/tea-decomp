// name: FUN_00425bb8
// address: 0x425bb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00425bb8(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  uint local_30;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f1838);
  if (param_1 == 0) goto LAB_00425fe7;
  local_30 = 0;
  do {
    iVar3 = *(int *)(param_1 + local_30 * 4);
    if (iVar3 != 0) {
      FUN_004cc264(iVar3 + 0x40,0x38,4,1,FUN_00425984);
      if (*(int *)(iVar3 + 0x38) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x38) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 0x38) + -0xc);
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
          if (iVar2 != 0) goto LAB_00425cae;
        }
        FUN_004cc0bc();
        *(undefined4 *)(iVar3 + 0x38) = 0;
      }
LAB_00425cae:
      if (*(int *)(iVar3 + 0x28) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x28) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 0x28) + -0xc);
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
          if (iVar2 != 0) goto LAB_00425d38;
        }
        FUN_004cc0bc();
        *(undefined4 *)(iVar3 + 0x28) = 0;
      }
LAB_00425d38:
      if (*(int *)(iVar3 + 0x18) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x18) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 0x18) + -0xc);
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
          if (iVar2 != 0) goto LAB_00425dc2;
        }
        FUN_004cc0bc();
        *(undefined4 *)(iVar3 + 0x18) = 0;
      }
LAB_00425dc2:
      if (*(int *)(iVar3 + 8) != 0) {
        if (*(int *)(*(int *)(iVar3 + 8) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 8) + -0xc);
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
          if (iVar2 != 0) goto LAB_00425e5f;
        }
        FUN_004cc0bc();
        *(undefined4 *)(iVar3 + 8) = 0;
      }
LAB_00425e5f:
      FUN_004cc0bc();
    }
    local_30 = local_30 + 1;
  } while (local_30 < 4);
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
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
      if (iVar3 != 0) goto LAB_00425f1f;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_00425f1f:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
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
      if (iVar3 != 0) goto LAB_00425fd7;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_00425fd7:
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_00425fe7:
  *in_FS_OFFSET = local_2c;
  return;
}

