// name: FUN_0042d792
// address: 0x42d792
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0042d891) */

void __stdcall FUN_0042d792(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  puVar1 = *(undefined2 **)(unaff_EBP + 0x10);
  piVar7 = *(int **)(unaff_EBP + 8);
  FUN_004dce64(0x4f28d4);
  if (piVar7[0x41] != -1) {
    if ((*(byte *)(unaff_EBP + 0xc) & 1) == 0) {
      piVar7[0x41] = -1;
    }
    else {
      iVar5 = 0;
      if (0 < piVar7[0x40]) {
        iVar5 = (*(int *)(*(int *)(*piVar7 + 0x44) + 0xc) + *(int *)(puVar1 + 2)) / piVar7[0x40];
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else {
        iVar2 = FUN_0042ba08((int)piVar7);
        if (iVar2 <= iVar5) {
          iVar5 = FUN_0042ba08((int)piVar7);
          iVar5 = iVar5 + -1;
        }
      }
      iVar2 = piVar7[0x44];
      if (iVar5 != iVar2) {
        if (iVar5 < iVar2) {
          iVar3 = iVar2 - iVar5;
          iVar2 = iVar5;
        }
        else {
          iVar3 = iVar5 - iVar2;
        }
        *(undefined4 *)(unaff_EBP + -0x50) = 0;
        *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        *(undefined4 *)(unaff_EBP + -0x48) = 0;
        *(undefined4 *)(unaff_EBP + -0x44) = 0;
        uVar4 = FUN_00430290(piVar7,iVar2,iVar3 + 1,(int *)(unaff_EBP + -0x50));
        if ((char)uVar4 != '\0') {
          (**(code **)(*(int *)(*piVar7 + 8) + 0x6c))();
        }
        piVar7[0x44] = iVar5;
      }
      (**(code **)(**(int **)(*piVar7 + 0x44) + 0x3c))();
    }
  }
  *(undefined2 *)(unaff_EBP + -0x24) = 8;
  *(undefined4 *)(unaff_EBP + -8) = 0;
  *(undefined **)(unaff_EBP + -8) = &DAT_00513d64;
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -8);
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  *(undefined2 *)(unaff_EBP + -0x24) = 0x20;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (0 < piVar7[0x40]) {
    *(int *)(unaff_EBP + -0x38) =
         (*(int *)(*(int *)(*piVar7 + 0x44) + 0xc) + *(int *)(puVar1 + 2)) / piVar7[0x40];
  }
  iVar5 = FUN_0042d9a0((int *)piVar7[0x31],(int *)piVar7[0x32],(int *)(unaff_EBP + -0x38));
  if (iVar5 != piVar7[0x32]) {
    puVar6 = FUN_004308e4((int)piVar7,*(int *)(unaff_EBP + -0x38));
    FUN_004cf41c(unaff_EBP + -0x10,(uint *)((int)puVar6 + 9));
  }
  FUN_0045e060(piVar7[0x38],unaff_EBP + -0x10,*(undefined4 *)(*piVar7 + 0xc),
               *(undefined4 *)(unaff_EBP + 0xc),puVar1,0);
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
  if (*(int *)(unaff_EBP + -8) != 0) {
    if (*(int *)(*(int *)(unaff_EBP + -8) + -0xc) != -1) {
      piVar7 = (int *)(*(int *)(unaff_EBP + -8) + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar5 = *piVar7 + 1;
      }
      if (iVar5 != 0) goto LAB_0042d98e;
    }
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -8) + -0xc;
    FUN_004cc0bc();
    *(undefined4 *)(unaff_EBP + -8) = 0;
    *(int *)(unaff_EBP + -0x40) = unaff_EBP + -0x10;
    *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 8);
  }
LAB_0042d98e:
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x34);
  return;
}

