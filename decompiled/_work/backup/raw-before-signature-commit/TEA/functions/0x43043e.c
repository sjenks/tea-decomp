// name: FUN_0043043e
// address: 0x43043e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0043043e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  uVar4 = *(undefined4 *)(piVar1[0x27] + 8);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  *(undefined4 *)(unaff_EBP + -8) = uVar4;
  while( true ) {
    iVar2 = piVar1[0x27];
    *(int *)(unaff_EBP + -0x28) = iVar2;
    *(int *)(unaff_EBP + -0x38) = iVar2;
    iVar3 = *(int *)(unaff_EBP + -8);
    if (iVar2 == iVar3) break;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    uVar4 = FUN_00430290(piVar1,*(int *)(iVar3 + 0x10),*(int *)(iVar3 + 0x14),
                         (int *)(unaff_EBP + -0x70));
    if ((char)uVar4 != '\0') {
      (**(code **)(*(int *)(*piVar1 + 8) + 0x6c))();
    }
    *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0xc);
    *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -8);
    FUN_0042ba94(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + -0x50);
    *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x4c);
    *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x48);
  }
  return;
}

