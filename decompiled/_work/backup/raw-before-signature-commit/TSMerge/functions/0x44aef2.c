// name: FUN_0044aef2
// address: 0x44aef2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_0044aef2(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  FUN_00455f04(0x470670);
  *puVar2 = &PTR_FUN_00461fe8;
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
  iVar3 = *(int *)(unaff_EBP + 0xc);
  puVar1 = puVar2 + 2;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puVar2[4] = *(undefined4 *)(unaff_EBP + -0x28);
  iVar4 = *(int *)(*(int *)(iVar3 + 0x10) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(*(int *)(iVar3 + 0x10) + -4);
    piVar5 = FUN_0044d2a4(puVar1,*(uint *)(unaff_EBP + -0x38),*(uint *)(unaff_EBP + -0x38));
    *(int **)(unaff_EBP + -0x40) = piVar5;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x40) + 0xc;
    puVar2[4] = *(undefined4 *)(unaff_EBP + -0x3c);
    *(undefined4 **)(unaff_EBP + -0x44) = puVar1;
    *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(*(int *)(unaff_EBP + -0x44) + 8);
    *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x38);
    *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(unaff_EBP + -0x50) = puVar2[4];
    FUN_004559d0(*(undefined4 **)(unaff_EBP + -0x50),*(undefined4 **)(unaff_EBP + -0x4c),
                 *(uint *)(unaff_EBP + -0x48));
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar3 + 0x10);
    puVar2[4] = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 **)(unaff_EBP + -0x30) = puVar1;
    *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 8);
    *(int *)(unaff_EBP + -0x34) = puVar2[4] + -0xc;
    if (*(undefined4 **)(unaff_EBP + -0x34) != &DAT_00471d5c) {
      **(int **)(unaff_EBP + -0x34) = **(int **)(unaff_EBP + -0x34) + 1;
    }
  }
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
  *puVar2 = &PTR_FUN_00461ffc;
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x24);
  return puVar2;
}

