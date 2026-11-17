// name: FUN_0040b62c
// address: 0x40b62c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040b62c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ebe18);
joined_r0x0040b648:
  do {
    do {
      iVar1 = param_2;
      if (iVar1 == param_3) {
        *in_FS_OFFSET = local_2c;
        return;
      }
      param_2 = iVar1 + 0x80;
    } while (iVar1 == 0);
    if (*(int *)(iVar1 + 0x70) != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x70) + -0xc) != -1) {
        piVar2 = (int *)(*(int *)(iVar1 + 0x70) + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2 + 1;
        }
        if (iVar3 != 0) goto LAB_0040b6f3;
      }
      FUN_004cc0bc();
      *(undefined4 *)(iVar1 + 0x70) = 0;
    }
LAB_0040b6f3:
    if (*(int *)(iVar1 + 0x60) != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x60) + -0xc) != -1) {
        piVar2 = (int *)(*(int *)(iVar1 + 0x60) + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2 + 1;
        }
        if (iVar3 != 0) goto LAB_0040b77d;
      }
      FUN_004cc0bc();
      *(undefined4 *)(iVar1 + 0x60) = 0;
    }
LAB_0040b77d:
    FUN_0040b4f0(iVar1 + 0x38,*(int *)(iVar1 + 0x3c),*(int *)(iVar1 + 0x40));
    FUN_004cc0bc();
    FUN_0040b4f0(iVar1 + 0x18,*(int *)(iVar1 + 0x1c),*(int *)(iVar1 + 0x20));
    FUN_004cc0bc();
  } while (*(int *)(iVar1 + 8) == 0);
  if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) {
    piVar2 = (int *)(*(int *)(iVar1 + 8) + -0xc);
    if (piVar2 == &DAT_00513d58) {
      iVar3 = 1;
    }
    else if (piVar2 == &DAT_00513d58) {
      iVar3 = 1;
    }
    else {
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2 + 1;
    }
    if (iVar3 != 0) goto joined_r0x0040b648;
  }
  FUN_004cc0bc();
  *(undefined4 *)(iVar1 + 8) = 0;
  goto joined_r0x0040b648;
}

